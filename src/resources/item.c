/* item.c generated by valac 0.22.1, the Vala compiler
 * generated from item.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gobject/gvaluecollector.h>


#define BR_COM_LABLUNA_TODO_RESOURCES_TYPE_ITEM (br_com_labluna_todo_resources_item_get_type ())
#define BR_COM_LABLUNA_TODO_RESOURCES_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BR_COM_LABLUNA_TODO_RESOURCES_TYPE_ITEM, brcomlablunatodoresourcesItem))
#define BR_COM_LABLUNA_TODO_RESOURCES_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BR_COM_LABLUNA_TODO_RESOURCES_TYPE_ITEM, brcomlablunatodoresourcesItemClass))
#define BR_COM_LABLUNA_TODO_RESOURCES_IS_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BR_COM_LABLUNA_TODO_RESOURCES_TYPE_ITEM))
#define BR_COM_LABLUNA_TODO_RESOURCES_IS_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BR_COM_LABLUNA_TODO_RESOURCES_TYPE_ITEM))
#define BR_COM_LABLUNA_TODO_RESOURCES_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BR_COM_LABLUNA_TODO_RESOURCES_TYPE_ITEM, brcomlablunatodoresourcesItemClass))

typedef struct _brcomlablunatodoresourcesItem brcomlablunatodoresourcesItem;
typedef struct _brcomlablunatodoresourcesItemClass brcomlablunatodoresourcesItemClass;
typedef struct _brcomlablunatodoresourcesItemPrivate brcomlablunatodoresourcesItemPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _brcomlablunatodoresourcesParamSpecItem brcomlablunatodoresourcesParamSpecItem;

struct _brcomlablunatodoresourcesItem {
	GTypeInstance parent_instance;
	volatile int ref_count;
	brcomlablunatodoresourcesItemPrivate * priv;
};

struct _brcomlablunatodoresourcesItemClass {
	GTypeClass parent_class;
	void (*finalize) (brcomlablunatodoresourcesItem *self);
};

struct _brcomlablunatodoresourcesItemPrivate {
	gchar* description;
	gboolean done;
};

struct _brcomlablunatodoresourcesParamSpecItem {
	GParamSpec parent_instance;
};


static gpointer br_com_labluna_todo_resources_item_parent_class = NULL;

gpointer br_com_labluna_todo_resources_item_ref (gpointer instance);
void br_com_labluna_todo_resources_item_unref (gpointer instance);
GParamSpec* br_com_labluna_todo_resources_param_spec_item (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void br_com_labluna_todo_resources_value_set_item (GValue* value, gpointer v_object);
void br_com_labluna_todo_resources_value_take_item (GValue* value, gpointer v_object);
gpointer br_com_labluna_todo_resources_value_get_item (const GValue* value);
GType br_com_labluna_todo_resources_item_get_type (void) G_GNUC_CONST;
#define BR_COM_LABLUNA_TODO_RESOURCES_ITEM_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), BR_COM_LABLUNA_TODO_RESOURCES_TYPE_ITEM, brcomlablunatodoresourcesItemPrivate))
enum  {
	BR_COM_LABLUNA_TODO_RESOURCES_ITEM_DUMMY_PROPERTY
};
brcomlablunatodoresourcesItem* br_com_labluna_todo_resources_item_new (void);
brcomlablunatodoresourcesItem* br_com_labluna_todo_resources_item_construct (GType object_type);
static void br_com_labluna_todo_resources_item_finalize (brcomlablunatodoresourcesItem* obj);


brcomlablunatodoresourcesItem* br_com_labluna_todo_resources_item_construct (GType object_type) {
	brcomlablunatodoresourcesItem* self = NULL;
	self = (brcomlablunatodoresourcesItem*) g_type_create_instance (object_type);
	return self;
}


brcomlablunatodoresourcesItem* br_com_labluna_todo_resources_item_new (void) {
	return br_com_labluna_todo_resources_item_construct (BR_COM_LABLUNA_TODO_RESOURCES_TYPE_ITEM);
}


static void br_com_labluna_todo_resources_value_item_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void br_com_labluna_todo_resources_value_item_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		br_com_labluna_todo_resources_item_unref (value->data[0].v_pointer);
	}
}


static void br_com_labluna_todo_resources_value_item_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = br_com_labluna_todo_resources_item_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer br_com_labluna_todo_resources_value_item_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* br_com_labluna_todo_resources_value_item_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		brcomlablunatodoresourcesItem* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = br_com_labluna_todo_resources_item_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* br_com_labluna_todo_resources_value_item_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	brcomlablunatodoresourcesItem** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = br_com_labluna_todo_resources_item_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* br_com_labluna_todo_resources_param_spec_item (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	brcomlablunatodoresourcesParamSpecItem* spec;
	g_return_val_if_fail (g_type_is_a (object_type, BR_COM_LABLUNA_TODO_RESOURCES_TYPE_ITEM), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer br_com_labluna_todo_resources_value_get_item (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, BR_COM_LABLUNA_TODO_RESOURCES_TYPE_ITEM), NULL);
	return value->data[0].v_pointer;
}


void br_com_labluna_todo_resources_value_set_item (GValue* value, gpointer v_object) {
	brcomlablunatodoresourcesItem* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, BR_COM_LABLUNA_TODO_RESOURCES_TYPE_ITEM));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, BR_COM_LABLUNA_TODO_RESOURCES_TYPE_ITEM));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		br_com_labluna_todo_resources_item_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		br_com_labluna_todo_resources_item_unref (old);
	}
}


void br_com_labluna_todo_resources_value_take_item (GValue* value, gpointer v_object) {
	brcomlablunatodoresourcesItem* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, BR_COM_LABLUNA_TODO_RESOURCES_TYPE_ITEM));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, BR_COM_LABLUNA_TODO_RESOURCES_TYPE_ITEM));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		br_com_labluna_todo_resources_item_unref (old);
	}
}


static void br_com_labluna_todo_resources_item_class_init (brcomlablunatodoresourcesItemClass * klass) {
	br_com_labluna_todo_resources_item_parent_class = g_type_class_peek_parent (klass);
	BR_COM_LABLUNA_TODO_RESOURCES_ITEM_CLASS (klass)->finalize = br_com_labluna_todo_resources_item_finalize;
	g_type_class_add_private (klass, sizeof (brcomlablunatodoresourcesItemPrivate));
}


static void br_com_labluna_todo_resources_item_instance_init (brcomlablunatodoresourcesItem * self) {
	self->priv = BR_COM_LABLUNA_TODO_RESOURCES_ITEM_GET_PRIVATE (self);
	self->ref_count = 1;
}


static void br_com_labluna_todo_resources_item_finalize (brcomlablunatodoresourcesItem* obj) {
	brcomlablunatodoresourcesItem * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BR_COM_LABLUNA_TODO_RESOURCES_TYPE_ITEM, brcomlablunatodoresourcesItem);
	_g_free0 (self->priv->description);
}


GType br_com_labluna_todo_resources_item_get_type (void) {
	static volatile gsize br_com_labluna_todo_resources_item_type_id__volatile = 0;
	if (g_once_init_enter (&br_com_labluna_todo_resources_item_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { br_com_labluna_todo_resources_value_item_init, br_com_labluna_todo_resources_value_item_free_value, br_com_labluna_todo_resources_value_item_copy_value, br_com_labluna_todo_resources_value_item_peek_pointer, "p", br_com_labluna_todo_resources_value_item_collect_value, "p", br_com_labluna_todo_resources_value_item_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (brcomlablunatodoresourcesItemClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) br_com_labluna_todo_resources_item_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (brcomlablunatodoresourcesItem), 0, (GInstanceInitFunc) br_com_labluna_todo_resources_item_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType br_com_labluna_todo_resources_item_type_id;
		br_com_labluna_todo_resources_item_type_id = g_type_register_fundamental (g_type_fundamental_next (), "brcomlablunatodoresourcesItem", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&br_com_labluna_todo_resources_item_type_id__volatile, br_com_labluna_todo_resources_item_type_id);
	}
	return br_com_labluna_todo_resources_item_type_id__volatile;
}


gpointer br_com_labluna_todo_resources_item_ref (gpointer instance) {
	brcomlablunatodoresourcesItem* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void br_com_labluna_todo_resources_item_unref (gpointer instance) {
	brcomlablunatodoresourcesItem* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		BR_COM_LABLUNA_TODO_RESOURCES_ITEM_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}


