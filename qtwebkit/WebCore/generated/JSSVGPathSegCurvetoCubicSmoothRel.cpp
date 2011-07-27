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

#include "config.h"

#if ENABLE(SVG)

#include "JSSVGPathSegCurvetoCubicSmoothRel.h"

#include "SVGPathSegCurvetoCubicSmooth.h"
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPathSegCurvetoCubicSmoothRel);

/* Hash table */

static const HashTableValue JSSVGPathSegCurvetoCubicSmoothRelTableValues[6] =
{
    { "x", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoCubicSmoothRelX), (intptr_t)setJSSVGPathSegCurvetoCubicSmoothRelX },
    { "y", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoCubicSmoothRelY), (intptr_t)setJSSVGPathSegCurvetoCubicSmoothRelY },
    { "x2", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoCubicSmoothRelX2), (intptr_t)setJSSVGPathSegCurvetoCubicSmoothRelX2 },
    { "y2", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoCubicSmoothRelY2), (intptr_t)setJSSVGPathSegCurvetoCubicSmoothRelY2 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoCubicSmoothRelConstructor), (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGPathSegCurvetoCubicSmoothRelTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 15, JSSVGPathSegCurvetoCubicSmoothRelTableValues, 0 };
#else
    { 16, 15, JSSVGPathSegCurvetoCubicSmoothRelTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSSVGPathSegCurvetoCubicSmoothRelConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGPathSegCurvetoCubicSmoothRelConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGPathSegCurvetoCubicSmoothRelConstructorTableValues, 0 };
#else
    { 1, 0, JSSVGPathSegCurvetoCubicSmoothRelConstructorTableValues, 0 };
#endif

class JSSVGPathSegCurvetoCubicSmoothRelConstructor : public DOMConstructorObject {
public:
    JSSVGPathSegCurvetoCubicSmoothRelConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSSVGPathSegCurvetoCubicSmoothRelConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSSVGPathSegCurvetoCubicSmoothRelPrototype::self(exec, globalObject), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual bool getOwnPropertyDescriptor(ExecState*, const Identifier&, PropertyDescriptor&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, StructureFlags), AnonymousSlotCount); 
    }
    
protected:
    static const unsigned StructureFlags = OverridesGetOwnPropertySlot | ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSSVGPathSegCurvetoCubicSmoothRelConstructor::s_info = { "SVGPathSegCurvetoCubicSmoothRelConstructor", 0, &JSSVGPathSegCurvetoCubicSmoothRelConstructorTable, 0 };

bool JSSVGPathSegCurvetoCubicSmoothRelConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegCurvetoCubicSmoothRelConstructor, DOMObject>(exec, &JSSVGPathSegCurvetoCubicSmoothRelConstructorTable, this, propertyName, slot);
}

bool JSSVGPathSegCurvetoCubicSmoothRelConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegCurvetoCubicSmoothRelConstructor, DOMObject>(exec, &JSSVGPathSegCurvetoCubicSmoothRelConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegCurvetoCubicSmoothRelPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGPathSegCurvetoCubicSmoothRelPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGPathSegCurvetoCubicSmoothRelPrototypeTableValues, 0 };
#else
    { 1, 0, JSSVGPathSegCurvetoCubicSmoothRelPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGPathSegCurvetoCubicSmoothRelPrototype::s_info = { "SVGPathSegCurvetoCubicSmoothRelPrototype", 0, &JSSVGPathSegCurvetoCubicSmoothRelPrototypeTable, 0 };

JSObject* JSSVGPathSegCurvetoCubicSmoothRelPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegCurvetoCubicSmoothRel>(exec, globalObject);
}

const ClassInfo JSSVGPathSegCurvetoCubicSmoothRel::s_info = { "SVGPathSegCurvetoCubicSmoothRel", &JSSVGPathSeg::s_info, &JSSVGPathSegCurvetoCubicSmoothRelTable, 0 };

JSSVGPathSegCurvetoCubicSmoothRel::JSSVGPathSegCurvetoCubicSmoothRel(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathSegCurvetoCubicSmoothRel> impl)
    : JSSVGPathSeg(structure, globalObject, impl)
{
}

JSObject* JSSVGPathSegCurvetoCubicSmoothRel::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGPathSegCurvetoCubicSmoothRelPrototype(JSSVGPathSegCurvetoCubicSmoothRelPrototype::createStructure(JSSVGPathSegPrototype::self(exec, globalObject)));
}

bool JSSVGPathSegCurvetoCubicSmoothRel::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegCurvetoCubicSmoothRel, Base>(exec, &JSSVGPathSegCurvetoCubicSmoothRelTable, this, propertyName, slot);
}

bool JSSVGPathSegCurvetoCubicSmoothRel::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegCurvetoCubicSmoothRel, Base>(exec, &JSSVGPathSegCurvetoCubicSmoothRelTable, this, propertyName, descriptor);
}

JSValue jsSVGPathSegCurvetoCubicSmoothRelX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegCurvetoCubicSmoothRel* castedThis = static_cast<JSSVGPathSegCurvetoCubicSmoothRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoCubicSmoothRel* imp = static_cast<SVGPathSegCurvetoCubicSmoothRel*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->x());
    return result;
}

JSValue jsSVGPathSegCurvetoCubicSmoothRelY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegCurvetoCubicSmoothRel* castedThis = static_cast<JSSVGPathSegCurvetoCubicSmoothRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoCubicSmoothRel* imp = static_cast<SVGPathSegCurvetoCubicSmoothRel*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->y());
    return result;
}

JSValue jsSVGPathSegCurvetoCubicSmoothRelX2(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegCurvetoCubicSmoothRel* castedThis = static_cast<JSSVGPathSegCurvetoCubicSmoothRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoCubicSmoothRel* imp = static_cast<SVGPathSegCurvetoCubicSmoothRel*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->x2());
    return result;
}

JSValue jsSVGPathSegCurvetoCubicSmoothRelY2(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegCurvetoCubicSmoothRel* castedThis = static_cast<JSSVGPathSegCurvetoCubicSmoothRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoCubicSmoothRel* imp = static_cast<SVGPathSegCurvetoCubicSmoothRel*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->y2());
    return result;
}

JSValue jsSVGPathSegCurvetoCubicSmoothRelConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegCurvetoCubicSmoothRel* domObject = static_cast<JSSVGPathSegCurvetoCubicSmoothRel*>(asObject(slotBase));
    return JSSVGPathSegCurvetoCubicSmoothRel::getConstructor(exec, domObject->globalObject());
}
void JSSVGPathSegCurvetoCubicSmoothRel::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGPathSegCurvetoCubicSmoothRel, Base>(exec, propertyName, value, &JSSVGPathSegCurvetoCubicSmoothRelTable, this, slot);
}

void setJSSVGPathSegCurvetoCubicSmoothRelX(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegCurvetoCubicSmoothRel* castedThisObj = static_cast<JSSVGPathSegCurvetoCubicSmoothRel*>(thisObject);
    SVGPathSegCurvetoCubicSmoothRel* imp = static_cast<SVGPathSegCurvetoCubicSmoothRel*>(castedThisObj->impl());
    imp->setX(value.toFloat(exec));
    JSSVGContextCache::propagateSVGDOMChange(castedThisObj, imp->associatedAttributeName());
}

void setJSSVGPathSegCurvetoCubicSmoothRelY(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegCurvetoCubicSmoothRel* castedThisObj = static_cast<JSSVGPathSegCurvetoCubicSmoothRel*>(thisObject);
    SVGPathSegCurvetoCubicSmoothRel* imp = static_cast<SVGPathSegCurvetoCubicSmoothRel*>(castedThisObj->impl());
    imp->setY(value.toFloat(exec));
    JSSVGContextCache::propagateSVGDOMChange(castedThisObj, imp->associatedAttributeName());
}

void setJSSVGPathSegCurvetoCubicSmoothRelX2(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegCurvetoCubicSmoothRel* castedThisObj = static_cast<JSSVGPathSegCurvetoCubicSmoothRel*>(thisObject);
    SVGPathSegCurvetoCubicSmoothRel* imp = static_cast<SVGPathSegCurvetoCubicSmoothRel*>(castedThisObj->impl());
    imp->setX2(value.toFloat(exec));
    JSSVGContextCache::propagateSVGDOMChange(castedThisObj, imp->associatedAttributeName());
}

void setJSSVGPathSegCurvetoCubicSmoothRelY2(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegCurvetoCubicSmoothRel* castedThisObj = static_cast<JSSVGPathSegCurvetoCubicSmoothRel*>(thisObject);
    SVGPathSegCurvetoCubicSmoothRel* imp = static_cast<SVGPathSegCurvetoCubicSmoothRel*>(castedThisObj->impl());
    imp->setY2(value.toFloat(exec));
    JSSVGContextCache::propagateSVGDOMChange(castedThisObj, imp->associatedAttributeName());
}

JSValue JSSVGPathSegCurvetoCubicSmoothRel::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPathSegCurvetoCubicSmoothRelConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
