[
 (action)
 (dialogue)
] @spell

(parenthetical) @comment.doc

;; Title page
(title_page_key) @keyword
(title_page_field (description) @string.special)

;; Character names
(character) @label

;; Transitions (normal and forced >)
(transition) @keyword
(forced_transition_start) @keyword

;; Scene headings with scene numbers
(scene_start) @keyword
(scene_heading (description) @emphasis.strong)
(scene_number) @number

;; Section headings (# markers)
(section_start) @punctuation.special
(section_heading (description) @emphasis.strong)

;; Notes [[text]]
(note_start) @punctuation.bracket
(note_content) @comment

;; Forced elements
(forced_action_start) @operator
(forced_character_start) @operator

;; Lyrics ~text
(lyric_start) @operator
(lyric) @string.special

;; Centered text >text<
(centered_start) @operator
(centered) @emphasis

;; Page breaks ===
(page_break) @punctuation.special
(page_break_marker) @punctuation.special

;; Synopses = text
(synopsis_start) @operator
(synopsis) @comment.doc

;; Boneyard /* ... */
(boneyard_start) @comment
(boneyard) @comment
