[
 (action)
 (dialogue)
] @spell

(parenthetical) @markup.italic

;; Title page
(title_page_key) @keyword
(title_page_field (description) @string)

;; Character names
(character) @markup.heading.2

;; Transitions
(transition) @keyword

;; Scene headings
(scene_start) @keyword
(scene_heading (description) @markup.heading.1)

;; Section headings
(section_start) @keyword
(section_heading (description) @markup.heading.1)

;; Notes
(note_start) @punctuation.bracket
(note_content) @comment
