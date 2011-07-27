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

#include "JSSVGTransform.h"

#include "JSSVGMatrix.h"
#include "SVGTransform.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGTransform);

/* Hash table */

static const HashTableValue JSSVGTransformTableValues[5] =
{
    { "type", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformType), (intptr_t)0 },
    { "matrix", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformMatrix), (intptr_t)0 },
    { "angle", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformAngle), (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformConstructor), (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGTransformTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 31, JSSVGTransformTableValues, 0 };
#else
    { 9, 7, JSSVGTransformTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSSVGTransformConstructorTableValues[8] =
{
    { "SVG_TRANSFORM_UNKNOWN", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_UNKNOWN), (intptr_t)0 },
    { "SVG_TRANSFORM_MATRIX", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_MATRIX), (intptr_t)0 },
    { "SVG_TRANSFORM_TRANSLATE", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_TRANSLATE), (intptr_t)0 },
    { "SVG_TRANSFORM_SCALE", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_SCALE), (intptr_t)0 },
    { "SVG_TRANSFORM_ROTATE", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_ROTATE), (intptr_t)0 },
    { "SVG_TRANSFORM_SKEWX", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_SKEWX), (intptr_t)0 },
    { "SVG_TRANSFORM_SKEWY", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_SKEWY), (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGTransformConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 127, JSSVGTransformConstructorTableValues, 0 };
#else
    { 18, 15, JSSVGTransformConstructorTableValues, 0 };
#endif

class JSSVGTransformConstructor : public DOMConstructorObject {
public:
    JSSVGTransformConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSSVGTransformConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSSVGTransformPrototype::self(exec, globalObject), None);
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

const ClassInfo JSSVGTransformConstructor::s_info = { "SVGTransformConstructor", 0, &JSSVGTransformConstructorTable, 0 };

bool JSSVGTransformConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGTransformConstructor, DOMObject>(exec, &JSSVGTransformConstructorTable, this, propertyName, slot);
}

bool JSSVGTransformConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGTransformConstructor, DOMObject>(exec, &JSSVGTransformConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGTransformPrototypeTableValues[14] =
{
    { "SVG_TRANSFORM_UNKNOWN", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_UNKNOWN), (intptr_t)0 },
    { "SVG_TRANSFORM_MATRIX", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_MATRIX), (intptr_t)0 },
    { "SVG_TRANSFORM_TRANSLATE", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_TRANSLATE), (intptr_t)0 },
    { "SVG_TRANSFORM_SCALE", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_SCALE), (intptr_t)0 },
    { "SVG_TRANSFORM_ROTATE", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_ROTATE), (intptr_t)0 },
    { "SVG_TRANSFORM_SKEWX", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_SKEWX), (intptr_t)0 },
    { "SVG_TRANSFORM_SKEWY", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_SKEWY), (intptr_t)0 },
    { "setMatrix", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsSVGTransformPrototypeFunctionSetMatrix), (intptr_t)1 },
    { "setTranslate", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsSVGTransformPrototypeFunctionSetTranslate), (intptr_t)2 },
    { "setScale", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsSVGTransformPrototypeFunctionSetScale), (intptr_t)2 },
    { "setRotate", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsSVGTransformPrototypeFunctionSetRotate), (intptr_t)3 },
    { "setSkewX", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsSVGTransformPrototypeFunctionSetSkewX), (intptr_t)1 },
    { "setSkewY", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsSVGTransformPrototypeFunctionSetSkewY), (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGTransformPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 127, JSSVGTransformPrototypeTableValues, 0 };
#else
    { 34, 31, JSSVGTransformPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGTransformPrototype::s_info = { "SVGTransformPrototype", 0, &JSSVGTransformPrototypeTable, 0 };

JSObject* JSSVGTransformPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGTransform>(exec, globalObject);
}

bool JSSVGTransformPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSSVGTransformPrototype, JSObject>(exec, &JSSVGTransformPrototypeTable, this, propertyName, slot);
}

bool JSSVGTransformPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticPropertyDescriptor<JSSVGTransformPrototype, JSObject>(exec, &JSSVGTransformPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGTransform::s_info = { "SVGTransform", 0, &JSSVGTransformTable, 0 };

JSSVGTransform::JSSVGTransform(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<JSSVGPODTypeWrapper<SVGTransform> > impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSSVGTransform::~JSSVGTransform()
{
    forgetDOMObject(this, impl());
    JSSVGContextCache::forgetWrapper(this);
}

JSObject* JSSVGTransform::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGTransformPrototype(JSSVGTransformPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSSVGTransform::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGTransform, Base>(exec, &JSSVGTransformTable, this, propertyName, slot);
}

bool JSSVGTransform::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGTransform, Base>(exec, &JSSVGTransformTable, this, propertyName, descriptor);
}

JSValue jsSVGTransformType(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTransform* castedThis = static_cast<JSSVGTransform*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTransform imp(*castedThis->impl());
    JSValue result =  jsNumber(exec, imp.type());
    return result;
}

JSValue jsSVGTransformMatrix(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTransform* castedThis = static_cast<JSSVGTransform*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTransform imp(*castedThis->impl());
    JSValue result =  toJS(exec, castedThis->globalObject(), JSSVGStaticPODTypeWrapperWithPODTypeParent<AffineTransform, SVGTransform>::create(imp.matrix(), castedThis->impl()).get(), JSSVGContextCache::svgContextForDOMObject(castedThis));
    return result;
}

JSValue jsSVGTransformAngle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTransform* castedThis = static_cast<JSSVGTransform*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTransform imp(*castedThis->impl());
    JSValue result =  jsNumber(exec, imp.angle());
    return result;
}

JSValue jsSVGTransformConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTransform* domObject = static_cast<JSSVGTransform*>(asObject(slotBase));
    return JSSVGTransform::getConstructor(exec, domObject->globalObject());
}
JSValue JSSVGTransform::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGTransformConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSValue JSC_HOST_CALL jsSVGTransformPrototypeFunctionSetMatrix(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGTransform::s_info))
        return throwError(exec, TypeError);
    JSSVGTransform* castedThisObj = static_cast<JSSVGTransform*>(asObject(thisValue));
    JSSVGPODTypeWrapper<SVGTransform> * imp = static_cast<JSSVGPODTypeWrapper<SVGTransform> *>(castedThisObj->impl());
    SVGTransform podImp(*imp);
    AffineTransform matrix = toSVGMatrix(args.at(0));

    podImp.setMatrix(matrix);
    imp->commitChange(podImp, castedThisObj);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsSVGTransformPrototypeFunctionSetTranslate(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGTransform::s_info))
        return throwError(exec, TypeError);
    JSSVGTransform* castedThisObj = static_cast<JSSVGTransform*>(asObject(thisValue));
    JSSVGPODTypeWrapper<SVGTransform> * imp = static_cast<JSSVGPODTypeWrapper<SVGTransform> *>(castedThisObj->impl());
    SVGTransform podImp(*imp);
    float tx = args.at(0).toFloat(exec);
    float ty = args.at(1).toFloat(exec);

    podImp.setTranslate(tx, ty);
    imp->commitChange(podImp, castedThisObj);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsSVGTransformPrototypeFunctionSetScale(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGTransform::s_info))
        return throwError(exec, TypeError);
    JSSVGTransform* castedThisObj = static_cast<JSSVGTransform*>(asObject(thisValue));
    JSSVGPODTypeWrapper<SVGTransform> * imp = static_cast<JSSVGPODTypeWrapper<SVGTransform> *>(castedThisObj->impl());
    SVGTransform podImp(*imp);
    float sx = args.at(0).toFloat(exec);
    float sy = args.at(1).toFloat(exec);

    podImp.setScale(sx, sy);
    imp->commitChange(podImp, castedThisObj);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsSVGTransformPrototypeFunctionSetRotate(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGTransform::s_info))
        return throwError(exec, TypeError);
    JSSVGTransform* castedThisObj = static_cast<JSSVGTransform*>(asObject(thisValue));
    JSSVGPODTypeWrapper<SVGTransform> * imp = static_cast<JSSVGPODTypeWrapper<SVGTransform> *>(castedThisObj->impl());
    SVGTransform podImp(*imp);
    float angle = args.at(0).toFloat(exec);
    float cx = args.at(1).toFloat(exec);
    float cy = args.at(2).toFloat(exec);

    podImp.setRotate(angle, cx, cy);
    imp->commitChange(podImp, castedThisObj);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsSVGTransformPrototypeFunctionSetSkewX(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGTransform::s_info))
        return throwError(exec, TypeError);
    JSSVGTransform* castedThisObj = static_cast<JSSVGTransform*>(asObject(thisValue));
    JSSVGPODTypeWrapper<SVGTransform> * imp = static_cast<JSSVGPODTypeWrapper<SVGTransform> *>(castedThisObj->impl());
    SVGTransform podImp(*imp);
    float angle = args.at(0).toFloat(exec);

    podImp.setSkewX(angle);
    imp->commitChange(podImp, castedThisObj);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsSVGTransformPrototypeFunctionSetSkewY(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGTransform::s_info))
        return throwError(exec, TypeError);
    JSSVGTransform* castedThisObj = static_cast<JSSVGTransform*>(asObject(thisValue));
    JSSVGPODTypeWrapper<SVGTransform> * imp = static_cast<JSSVGPODTypeWrapper<SVGTransform> *>(castedThisObj->impl());
    SVGTransform podImp(*imp);
    float angle = args.at(0).toFloat(exec);

    podImp.setSkewY(angle);
    imp->commitChange(podImp, castedThisObj);
    return jsUndefined();
}

// Constant getters

JSValue jsSVGTransformSVG_TRANSFORM_UNKNOWN(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(0));
}

JSValue jsSVGTransformSVG_TRANSFORM_MATRIX(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(1));
}

JSValue jsSVGTransformSVG_TRANSFORM_TRANSLATE(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(2));
}

JSValue jsSVGTransformSVG_TRANSFORM_SCALE(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(3));
}

JSValue jsSVGTransformSVG_TRANSFORM_ROTATE(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(4));
}

JSValue jsSVGTransformSVG_TRANSFORM_SKEWX(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(5));
}

JSValue jsSVGTransformSVG_TRANSFORM_SKEWY(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(6));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, JSSVGPODTypeWrapper<SVGTransform>* object, SVGElement* context)
{
    return getDOMObjectWrapper<JSSVGTransform, JSSVGPODTypeWrapper<SVGTransform> >(exec, globalObject, object, context);
}
SVGTransform toSVGTransform(JSC::JSValue value)
{
    return value.inherits(&JSSVGTransform::s_info) ? (SVGTransform) *static_cast<JSSVGTransform*>(asObject(value))->impl() : SVGTransform();
}

}

#endif // ENABLE(SVG)
