/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSDocumentType_h
#define JSDocumentType_h

#include "DocumentType.h"
#include "JSNode.h"

namespace WebCore {

class DocumentType;

class JSDocumentType : public JSNode {
    typedef JSNode Base;
public:
    JSDocumentType(NonNullPassRefPtr<JSC::Structure>, JSDOMGlobalObject*, PassRefPtr<DocumentType>);
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    DocumentType* impl() const
    {
        return static_cast<DocumentType*>(Base::impl());
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

DocumentType* toDocumentType(JSC::JSValue);

class JSDocumentTypePrototype : public JSC::JSObject {
    typedef JSC::JSObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount);
    }
    JSDocumentTypePrototype(NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

// Attributes

JSC::JSValue jsDocumentTypeName(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentTypeEntities(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentTypeNotations(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentTypePublicId(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentTypeSystemId(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentTypeInternalSubset(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentTypeConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif
