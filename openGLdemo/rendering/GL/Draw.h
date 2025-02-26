#pragma once
#include <vector>
#include "DrawDetails.h"

void Draw(const std::vector<DrawDetails>& details) {
  for (const auto& d : details) {
    glBindVertexArray(d.vao);
    glDrawElements(GL_TRIANGLES, d.numElements, GL_UNSIGNED_INT, nullptr);
  }
  glBindVertexArray(0);
}

void DrawStrip(const std::vector<DrawStripDetails>& details) {
  for (const auto& d : details) {
    glBindVertexArray(d.vao);
    glDrawArrays(GL_TRIANGLE_STRIP, 0, d.count);
  }
  glBindVertexArray(0);
}