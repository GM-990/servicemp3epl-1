#include "servicelibpl.h"


static PyMethodDef servicelibplMethods[] =
{
	{NULL,NULL,0,NULL}
};

static struct PyModuleDef moduledef = {
	PyModuleDef_HEAD_INIT,
	"servicelibpl",         /* m_name */
	"servicelibpl",        /* m_doc */
	-1,                  /* m_size */
	servicelibplMethods,   /* m_methods */
	NULL,                /* m_reload */
	NULL,                /* m_traverse */
	NULL,                /* m_clear */
	NULL,                /* m_free */
};

PyMODINIT_FUNC PyInit_servicelibpl(void)
{
	return PyModule_Create(&moduledef);
}
