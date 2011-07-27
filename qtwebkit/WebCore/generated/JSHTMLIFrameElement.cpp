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
#include "JSHTMLIFrameElement.h"

#include "DOMWindow.h"
#include "Document.h"
#include "HTMLIFrameElement.h"
#include "HTMLNames.h"
#include "JSDOMBinding.h"
#include "JSDOMWindow.h"
#include "JSDocument.h"
#include "JSSVGDocument.h"
#include "KURL.h"
#include "SVGDocument.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLIFrameElement);

/* Hash table */

static const HashTableValue JSHTMLIFrameElementTableValues[15] =
{
    { "align", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementAlign), (intptr_t)setJSHTMLIFrameElementAlign },
    { "frameBorder", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementFrameBorder), (intptr_t)setJSHTMLIFrameElementFrameBorder },
    { "height", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementHeight), (intptr_t)setJSHTMLIFrameElementHeight },
    { "longDesc", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementLongDesc), (intptr_t)setJSHTMLIFrameElementLongDesc },
    { "marginHeight", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementMarginHeight), (intptr_t)setJSHTMLIFrameElementMarginHeight },
    { "marginWidth", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementMarginWidth), (intptr_t)setJSHTMLIFrameElementMarginWidth },
    { "name", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementName), (intptr_t)setJSHTMLIFrameElementName },
    { "sandbox", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementSandbox), (intptr_t)setJSHTMLIFrameElementSandbox },
    { "scrolling", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementScrolling), (intptr_t)setJSHTMLIFrameElementScrolling },
    { "src", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementSrc), (intptr_t)setJSHTMLIFrameElementSrc },
    { "width", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementWidth), (intptr_t)setJSHTMLIFrameElementWidth },
    { "contentDocument", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementContentDocument), (intptr_t)0 },
    { "contentWindow", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementContentWindow), (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementConstructor), (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLIFrameElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 16383, JSHTMLIFrameElementTableValues, 0 };
#else
    { 36, 31, JSHTMLIFrameElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSHTMLIFrameElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLIFrameElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLIFrameElementConstructorTableValues, 0 };
#else
    { 1, 0, JSHTMLIFrameElementConstructorTableValues, 0 };
#endif

class JSHTMLIFrameElementConstructor : public DOMConstructorObject {
public:
    JSHTMLIFrameElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSHTMLIFrameElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSHTMLIFrameElementPrototype::self(exec, globalObject), None);
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

const ClassInfo JSHTMLIFrameElementConstructor::s_info = { "HTMLIFrameElementConstructor", 0, &JSHTMLIFrameElementConstructorTable, 0 };

bool JSHTMLIFrameElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLIFrameElementConstructor, DOMObject>(exec, &JSHTMLIFrameElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLIFrameElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLIFrameElementConstructor, DOMObject>(exec, &JSHTMLIFrameElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLIFrameElementPrototypeTableValues[2] =
{
    { "getSVGDocument", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsHTMLIFrameElementPrototypeFunctionGetSVGDocument), (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLIFrameElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLIFrameElementPrototypeTableValues, 0 };
#else
    { 2, 1, JSHTMLIFrameElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSHTMLIFrameElementPrototype::s_info = { "HTMLIFrameElementPrototype", 0, &JSHTMLIFrameElementPrototypeTable, 0 };

JSObject* JSHTMLIFrameElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLIFrameElement>(exec, globalObject);
}

bool JSHTMLIFrameElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSHTMLIFrameElementPrototypeTable, this, propertyName, slot);
}

bool JSHTMLIFrameElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSHTMLIFrameElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSHTMLIFrameElement::s_info = { "HTMLIFrameElement", &JSHTMLElement::s_info, &JSHTMLIFrameElementTable, 0 };

JSHTMLIFrameElement::JSHTMLIFrameElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLIFrameElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

JSObject* JSHTMLIFrameElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLIFrameElementPrototype(JSHTMLIFrameElementPrototype::createStructure(JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLIFrameElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLIFrameElement, Base>(exec, &JSHTMLIFrameElementTable, this, propertyName, slot);
}

bool JSHTMLIFrameElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLIFrameElement, Base>(exec, &JSHTMLIFrameElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLIFrameElementAlign(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(HTMLNames::alignAttr));
    return result;
}

JSValue jsHTMLIFrameElementFrameBorder(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(HTMLNames::frameborderAttr));
    return result;
}

JSValue jsHTMLIFrameElementHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(HTMLNames::heightAttr));
    return result;
}

JSValue jsHTMLIFrameElementLongDesc(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(HTMLNames::longdescAttr));
    return result;
}

JSValue jsHTMLIFrameElementMarginHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(HTMLNames::marginheightAttr));
    return result;
}

JSValue jsHTMLIFrameElementMarginWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(HTMLNames::marginwidthAttr));
    return result;
}

JSValue jsHTMLIFrameElementName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(HTMLNames::nameAttr));
    return result;
}

JSValue jsHTMLIFrameElementSandbox(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(HTMLNames::sandboxAttr));
    return result;
}

JSValue jsHTMLIFrameElementScrolling(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(HTMLNames::scrollingAttr));
    return result;
}

JSValue jsHTMLIFrameElementSrc(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(HTMLNames::srcAttr));
    return result;
}

JSValue jsHTMLIFrameElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(HTMLNames::widthAttr));
    return result;
}

JSValue jsHTMLIFrameElementContentDocument(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    return checkNodeSecurity(exec, imp->contentDocument()) ? toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->contentDocument())) : jsUndefined();
}

JSValue jsHTMLIFrameElementContentWindow(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->contentWindow()));
    return result;
}

JSValue jsHTMLIFrameElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* domObject = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    return JSHTMLIFrameElement::getConstructor(exec, domObject->globalObject());
}
void JSHTMLIFrameElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLIFrameElement, Base>(exec, propertyName, value, &JSHTMLIFrameElementTable, this, slot);
}

void setJSHTMLIFrameElementAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLIFrameElement* castedThisObj = static_cast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThisObj->impl());
    imp->setAttribute(HTMLNames::alignAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLIFrameElementFrameBorder(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLIFrameElement* castedThisObj = static_cast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThisObj->impl());
    imp->setAttribute(HTMLNames::frameborderAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLIFrameElementHeight(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLIFrameElement* castedThisObj = static_cast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThisObj->impl());
    imp->setAttribute(HTMLNames::heightAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLIFrameElementLongDesc(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLIFrameElement* castedThisObj = static_cast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThisObj->impl());
    imp->setAttribute(HTMLNames::longdescAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLIFrameElementMarginHeight(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLIFrameElement* castedThisObj = static_cast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThisObj->impl());
    imp->setAttribute(HTMLNames::marginheightAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLIFrameElementMarginWidth(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLIFrameElement* castedThisObj = static_cast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThisObj->impl());
    imp->setAttribute(HTMLNames::marginwidthAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLIFrameElementName(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLIFrameElement* castedThisObj = static_cast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThisObj->impl());
    imp->setAttribute(HTMLNames::nameAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLIFrameElementSandbox(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLIFrameElement* castedThisObj = static_cast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThisObj->impl());
    imp->setAttribute(HTMLNames::sandboxAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLIFrameElementScrolling(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLIFrameElement* castedThisObj = static_cast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThisObj->impl());
    imp->setAttribute(HTMLNames::scrollingAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLIFrameElementSrc(ExecState* exec, JSObject* thisObject, JSValue value)
{
    static_cast<JSHTMLIFrameElement*>(thisObject)->setSrc(exec, value);
}

void setJSHTMLIFrameElementWidth(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLIFrameElement* castedThisObj = static_cast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThisObj->impl());
    imp->setAttribute(HTMLNames::widthAttr, valueToStringWithNullCheck(exec, value));
}

JSValue JSHTMLIFrameElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLIFrameElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSValue JSC_HOST_CALL jsHTMLIFrameElementPrototypeFunctionGetSVGDocument(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSHTMLIFrameElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLIFrameElement* castedThisObj = static_cast<JSHTMLIFrameElement*>(asObject(thisValue));
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    if (!checkNodeSecurity(exec, imp->getSVGDocument(ec)))
        return jsUndefined();


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), WTF::getPtr(imp->getSVGDocument(ec)));
    setDOMException(exec, ec);
    return result;
}


}
