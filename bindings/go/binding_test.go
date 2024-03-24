package tree_sitter_hotshot_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-hotshot"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_hotshot.Language())
	if language == nil {
		t.Errorf("Error loading Hotshot grammar")
	}
}
