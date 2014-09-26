/* user.c generated by valac 0.22.1, the Vala compiler
 * generated from user.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gobject/gvaluecollector.h>


#define BR_COM_LABLUNA_TODO_RESOURCES_TYPE_USER (br_com_labluna_todo_resources_user_get_type ())
#define BR_COM_LABLUNA_TODO_RESOURCES_USER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BR_COM_LABLUNA_TODO_RESOURCES_TYPE_USER, brcomlablunatodoresourcesUser))
#define BR_COM_LABLUNA_TODO_RESOURCES_USER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BR_COM_LABLUNA_TODO_RESOURCES_TYPE_USER, brcomlablunatodoresourcesUserClass))
#define BR_COM_LABLUNA_TODO_RESOURCES_IS_USER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BR_COM_LABLUNA_TODO_RESOURCES_TYPE_USER))
#define BR_COM_LABLUNA_TODO_RESOURCES_IS_USER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BR_COM_LABLUNA_TODO_RESOURCES_TYPE_USER))
#define BR_COM_LABLUNA_TODO_RESOURCES_USER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BR_COM_LABLUNA_TODO_RESOURCES_TYPE_USER, brcomlablunatodoresourcesUserClass))

typedef struct _brcomlablunatodoresourcesUser brcomlablunatodoresourcesUser;
typedef struct _brcomlablunatodoresourcesUserClass brcomlablunatodoresourcesUserClass;
typedef struct _brcomlablunatodoresourcesUserPrivate brcomlablunatodoresourcesUserPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _brcomlablunatodoresourcesParamSpecUser brcomlablunatodoresourcesParamSpecUser;

struct _brcomlablunatodoresourcesUser {
	GTypeInstance parent_instance;
	volatile int ref_count;
	brcomlablunatodoresourcesUserPrivate * priv;
};

struct _brcomlablunatodoresourcesUserClass {
	GTypeClass parent_class;
	void (*finalize) (brcomlablunatodoresourcesUser *self);
};

struct _brcomlablunatodoresourcesUserPrivate {
	gchar* name;
	gchar* token;
	gchar* email;
};

struct _brcomlablunatodoresourcesParamSpecUser {
	GParamSpec parent_instance;
};


static gpointer br_com_labluna_todo_resources_user_parent_class = NULL;

gpointer br_com_labluna_todo_resources_user_ref (gpointer instance);
void br_com_labluna_todo_resources_user_unref (gpointer instance);
GParamSpec* br_com_labluna_todo_resources_param_spec_user (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void br_com_labluna_todo_resources_value_set_user (GValue* value, gpointer v_object);
void br_com_labluna_todo_resources_value_take_user (GValue* value, gpointer v_object);
gpointer br_com_labluna_todo_resources_value_get_user (const GValue* value);
GType br_com_labluna_todo_resources_user_get_type (void) G_GNUC_CONST;
#define BR_COM_LABLUNA_TODO_RESOURCES_USER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), BR_COM_LABLUNA_TODO_RESOURCES_TYPE_USER, brcomlablunatodoresourcesUserPrivate))
enum  {
	BR_COM_LABLUNA_TODO_RESOURCES_USER_DUMMY_PROPERTY
};
brcomlablunatodoresourcesUser* br_com_labluna_todo_resources_user_new (const gchar* email);
brcomlablunatodoresourcesUser* br_com_labluna_todo_resources_user_construct (GType object_type, const gchar* email);
gboolean br_com_labluna_todo_resources_user_auth (brcomlablunatodoresourcesUser* self, const gchar* password);
static void br_com_labluna_todo_resources_user_finalize (brcomlablunatodoresourcesUser* obj);


brcomlablunatodoresourcesUser* br_com_labluna_todo_resources_user_construct (GType object_type, const gchar* email) {
	brcomlablunatodoresourcesUser* self = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_val_if_fail (email != NULL, NULL);
	self = (brcomlablunatodoresourcesUser*) g_type_create_instance (object_type);
	_tmp0_ = email;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->email);
	self->priv->email = _tmp1_;
	return self;
}


brcomlablunatodoresourcesUser* br_com_labluna_todo_resources_user_new (const gchar* email) {
	return br_com_labluna_todo_resources_user_construct (BR_COM_LABLUNA_TODO_RESOURCES_TYPE_USER, email);
}


gboolean br_com_labluna_todo_resources_user_auth (brcomlablunatodoresourcesUser* self, const gchar* password) {
	gboolean result = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (password != NULL, FALSE);
	result = TRUE;
	return result;
}


static void br_com_labluna_todo_resources_value_user_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void br_com_labluna_todo_resources_value_user_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		br_com_labluna_todo_resources_user_unref (value->data[0].v_pointer);
	}
}


static void br_com_labluna_todo_resources_value_user_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = br_com_labluna_todo_resources_user_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer br_com_labluna_todo_resources_value_user_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* br_com_labluna_todo_resources_value_user_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		brcomlablunatodoresourcesUser* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = br_com_labluna_todo_resources_user_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* br_com_labluna_todo_resources_value_user_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	brcomlablunatodoresourcesUser** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = br_com_labluna_todo_resources_user_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* br_com_labluna_todo_resources_param_spec_user (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	brcomlablunatodoresourcesParamSpecUser* spec;
	g_return_val_if_fail (g_type_is_a (object_type, BR_COM_LABLUNA_TODO_RESOURCES_TYPE_USER), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer br_com_labluna_todo_resources_value_get_user (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, BR_COM_LABLUNA_TODO_RESOURCES_TYPE_USER), NULL);
	return value->data[0].v_pointer;
}


void br_com_labluna_todo_resources_value_set_user (GValue* value, gpointer v_object) {
	brcomlablunatodoresourcesUser* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, BR_COM_LABLUNA_TODO_RESOURCES_TYPE_USER));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, BR_COM_LABLUNA_TODO_RESOURCES_TYPE_USER));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		br_com_labluna_todo_resources_user_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		br_com_labluna_todo_resources_user_unref (old);
	}
}


void br_com_labluna_todo_resources_value_take_user (GValue* value, gpointer v_object) {
	brcomlablunatodoresourcesUser* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, BR_COM_LABLUNA_TODO_RESOURCES_TYPE_USER));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, BR_COM_LABLUNA_TODO_RESOURCES_TYPE_USER));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		br_com_labluna_todo_resources_user_unref (old);
	}
}


static void br_com_labluna_todo_resources_user_class_init (brcomlablunatodoresourcesUserClass * klass) {
	br_com_labluna_todo_resources_user_parent_class = g_type_class_peek_parent (klass);
	BR_COM_LABLUNA_TODO_RESOURCES_USER_CLASS (klass)->finalize = br_com_labluna_todo_resources_user_finalize;
	g_type_class_add_private (klass, sizeof (brcomlablunatodoresourcesUserPrivate));
}


static void br_com_labluna_todo_resources_user_instance_init (brcomlablunatodoresourcesUser * self) {
	self->priv = BR_COM_LABLUNA_TODO_RESOURCES_USER_GET_PRIVATE (self);
	self->ref_count = 1;
}


static void br_com_labluna_todo_resources_user_finalize (brcomlablunatodoresourcesUser* obj) {
	brcomlablunatodoresourcesUser * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BR_COM_LABLUNA_TODO_RESOURCES_TYPE_USER, brcomlablunatodoresourcesUser);
	_g_free0 (self->priv->name);
	_g_free0 (self->priv->token);
	_g_free0 (self->priv->email);
}


GType br_com_labluna_todo_resources_user_get_type (void) {
	static volatile gsize br_com_labluna_todo_resources_user_type_id__volatile = 0;
	if (g_once_init_enter (&br_com_labluna_todo_resources_user_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { br_com_labluna_todo_resources_value_user_init, br_com_labluna_todo_resources_value_user_free_value, br_com_labluna_todo_resources_value_user_copy_value, br_com_labluna_todo_resources_value_user_peek_pointer, "p", br_com_labluna_todo_resources_value_user_collect_value, "p", br_com_labluna_todo_resources_value_user_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (brcomlablunatodoresourcesUserClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) br_com_labluna_todo_resources_user_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (brcomlablunatodoresourcesUser), 0, (GInstanceInitFunc) br_com_labluna_todo_resources_user_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType br_com_labluna_todo_resources_user_type_id;
		br_com_labluna_todo_resources_user_type_id = g_type_register_fundamental (g_type_fundamental_next (), "brcomlablunatodoresourcesUser", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&br_com_labluna_todo_resources_user_type_id__volatile, br_com_labluna_todo_resources_user_type_id);
	}
	return br_com_labluna_todo_resources_user_type_id__volatile;
}


gpointer br_com_labluna_todo_resources_user_ref (gpointer instance) {
	brcomlablunatodoresourcesUser* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void br_com_labluna_todo_resources_user_unref (gpointer instance) {
	brcomlablunatodoresourcesUser* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		BR_COM_LABLUNA_TODO_RESOURCES_USER_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}


