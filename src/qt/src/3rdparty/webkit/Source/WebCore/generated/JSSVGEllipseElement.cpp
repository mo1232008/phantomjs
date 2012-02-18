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

#include "JSSVGEllipseElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "ExceptionCode.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGAnimatedTransformList.h"
#include "JSSVGElement.h"
#include "JSSVGMatrix.h"
#include "JSSVGRect.h"
#include "JSSVGStringList.h"
#include "KURL.h"
#include "SVGElement.h"
#include "SVGEllipseElement.h"
#include "SVGMatrix.h"
#include "SVGRect.h"
#include "SVGStringList.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGEllipseElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGEllipseElementTableValues[17] =
{
    { "cx", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementCx), (intptr_t)0 THUNK_GENERATOR(0) },
    { "cy", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementCy), (intptr_t)0 THUNK_GENERATOR(0) },
    { "rx", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementRx), (intptr_t)0 THUNK_GENERATOR(0) },
    { "ry", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementRy), (intptr_t)0 THUNK_GENERATOR(0) },
    { "requiredFeatures", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementRequiredFeatures), (intptr_t)0 THUNK_GENERATOR(0) },
    { "requiredExtensions", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementRequiredExtensions), (intptr_t)0 THUNK_GENERATOR(0) },
    { "systemLanguage", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementSystemLanguage), (intptr_t)0 THUNK_GENERATOR(0) },
    { "xmllang", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementXmllang), (intptr_t)setJSSVGEllipseElementXmllang THUNK_GENERATOR(0) },
    { "xmlspace", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementXmlspace), (intptr_t)setJSSVGEllipseElementXmlspace THUNK_GENERATOR(0) },
    { "externalResourcesRequired", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementExternalResourcesRequired), (intptr_t)0 THUNK_GENERATOR(0) },
    { "className", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementClassName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "style", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementStyle), (intptr_t)0 THUNK_GENERATOR(0) },
    { "transform", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementTransform), (intptr_t)0 THUNK_GENERATOR(0) },
    { "nearestViewportElement", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementNearestViewportElement), (intptr_t)0 THUNK_GENERATOR(0) },
    { "farthestViewportElement", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementFarthestViewportElement), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGEllipseElementTable = { 36, 31, JSSVGEllipseElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGEllipseElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGEllipseElementConstructorTable = { 1, 0, JSSVGEllipseElementConstructorTableValues, 0 };
class JSSVGEllipseElementConstructor : public DOMConstructorObject {
public:
    JSSVGEllipseElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSSVGEllipseElementConstructor::s_info = { "SVGEllipseElementConstructor", &DOMConstructorObject::s_info, &JSSVGEllipseElementConstructorTable, 0 };

JSSVGEllipseElementConstructor::JSSVGEllipseElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGEllipseElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGEllipseElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGEllipseElementConstructor, JSDOMWrapper>(exec, &JSSVGEllipseElementConstructorTable, this, propertyName, slot);
}

bool JSSVGEllipseElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGEllipseElementConstructor, JSDOMWrapper>(exec, &JSSVGEllipseElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGEllipseElementPrototypeTableValues[7] =
{
    { "hasExtension", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGEllipseElementPrototypeFunctionHasExtension), (intptr_t)1 THUNK_GENERATOR(0) },
    { "getPresentationAttribute", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGEllipseElementPrototypeFunctionGetPresentationAttribute), (intptr_t)1 THUNK_GENERATOR(0) },
    { "getBBox", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGEllipseElementPrototypeFunctionGetBBox), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getCTM", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGEllipseElementPrototypeFunctionGetCTM), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getScreenCTM", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGEllipseElementPrototypeFunctionGetScreenCTM), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getTransformToElement", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGEllipseElementPrototypeFunctionGetTransformToElement), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGEllipseElementPrototypeTable = { 17, 15, JSSVGEllipseElementPrototypeTableValues, 0 };
const ClassInfo JSSVGEllipseElementPrototype::s_info = { "SVGEllipseElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGEllipseElementPrototypeTable, 0 };

JSObject* JSSVGEllipseElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGEllipseElement>(exec, globalObject);
}

bool JSSVGEllipseElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGEllipseElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGEllipseElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGEllipseElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGEllipseElement::s_info = { "SVGEllipseElement", &JSSVGElement::s_info, &JSSVGEllipseElementTable, 0 };

JSSVGEllipseElement::JSSVGEllipseElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGEllipseElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGEllipseElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGEllipseElementPrototype(exec->globalData(), globalObject, JSSVGEllipseElementPrototype::createStructure(exec->globalData(), JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGEllipseElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGEllipseElement, Base>(exec, &JSSVGEllipseElementTable, this, propertyName, slot);
}

bool JSSVGEllipseElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGEllipseElement, Base>(exec, &JSSVGEllipseElementTable, this, propertyName, descriptor);
}

JSValue jsSVGEllipseElementCx(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGEllipseElement* castedThis = static_cast<JSSVGEllipseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGEllipseElement* imp = static_cast<SVGEllipseElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->cxAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGEllipseElementCy(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGEllipseElement* castedThis = static_cast<JSSVGEllipseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGEllipseElement* imp = static_cast<SVGEllipseElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->cyAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGEllipseElementRx(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGEllipseElement* castedThis = static_cast<JSSVGEllipseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGEllipseElement* imp = static_cast<SVGEllipseElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->rxAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGEllipseElementRy(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGEllipseElement* castedThis = static_cast<JSSVGEllipseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGEllipseElement* imp = static_cast<SVGEllipseElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->ryAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGEllipseElementRequiredFeatures(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGEllipseElement* castedThis = static_cast<JSSVGEllipseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGEllipseElement* imp = static_cast<SVGEllipseElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(GetOwnerElementForType<SVGEllipseElement, IsDerivedFromSVGElement<SVGEllipseElement>::value>::ownerElement(imp), imp->requiredFeatures())));
    return result;
}


JSValue jsSVGEllipseElementRequiredExtensions(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGEllipseElement* castedThis = static_cast<JSSVGEllipseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGEllipseElement* imp = static_cast<SVGEllipseElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(GetOwnerElementForType<SVGEllipseElement, IsDerivedFromSVGElement<SVGEllipseElement>::value>::ownerElement(imp), imp->requiredExtensions())));
    return result;
}


JSValue jsSVGEllipseElementSystemLanguage(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGEllipseElement* castedThis = static_cast<JSSVGEllipseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGEllipseElement* imp = static_cast<SVGEllipseElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(GetOwnerElementForType<SVGEllipseElement, IsDerivedFromSVGElement<SVGEllipseElement>::value>::ownerElement(imp), imp->systemLanguage())));
    return result;
}


JSValue jsSVGEllipseElementXmllang(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGEllipseElement* castedThis = static_cast<JSSVGEllipseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGEllipseElement* imp = static_cast<SVGEllipseElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->xmllang());
    return result;
}


JSValue jsSVGEllipseElementXmlspace(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGEllipseElement* castedThis = static_cast<JSSVGEllipseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGEllipseElement* imp = static_cast<SVGEllipseElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->xmlspace());
    return result;
}


JSValue jsSVGEllipseElementExternalResourcesRequired(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGEllipseElement* castedThis = static_cast<JSSVGEllipseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGEllipseElement* imp = static_cast<SVGEllipseElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGEllipseElementClassName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGEllipseElement* castedThis = static_cast<JSSVGEllipseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGEllipseElement* imp = static_cast<SVGEllipseElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGEllipseElementStyle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGEllipseElement* castedThis = static_cast<JSSVGEllipseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGEllipseElement* imp = static_cast<SVGEllipseElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}


JSValue jsSVGEllipseElementTransform(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGEllipseElement* castedThis = static_cast<JSSVGEllipseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGEllipseElement* imp = static_cast<SVGEllipseElement*>(castedThis->impl());
    RefPtr<SVGAnimatedTransformList> obj = imp->transformAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGEllipseElementNearestViewportElement(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGEllipseElement* castedThis = static_cast<JSSVGEllipseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGEllipseElement* imp = static_cast<SVGEllipseElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->nearestViewportElement()));
    return result;
}


JSValue jsSVGEllipseElementFarthestViewportElement(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGEllipseElement* castedThis = static_cast<JSSVGEllipseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGEllipseElement* imp = static_cast<SVGEllipseElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->farthestViewportElement()));
    return result;
}


JSValue jsSVGEllipseElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGEllipseElement* domObject = static_cast<JSSVGEllipseElement*>(asObject(slotBase));
    return JSSVGEllipseElement::getConstructor(exec, domObject->globalObject());
}

void JSSVGEllipseElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGEllipseElement, Base>(exec, propertyName, value, &JSSVGEllipseElementTable, this, slot);
}

void setJSSVGEllipseElementXmllang(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGEllipseElement* castedThis = static_cast<JSSVGEllipseElement*>(thisObject);
    SVGEllipseElement* imp = static_cast<SVGEllipseElement*>(castedThis->impl());
    imp->setXmllang(ustringToString(value.toString(exec)));
}


void setJSSVGEllipseElementXmlspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGEllipseElement* castedThis = static_cast<JSSVGEllipseElement*>(thisObject);
    SVGEllipseElement* imp = static_cast<SVGEllipseElement*>(castedThis->impl());
    imp->setXmlspace(ustringToString(value.toString(exec)));
}


JSValue JSSVGEllipseElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGEllipseElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGEllipseElementPrototypeFunctionHasExtension(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGEllipseElement::s_info))
        return throwVMTypeError(exec);
    JSSVGEllipseElement* castedThis = static_cast<JSSVGEllipseElement*>(asObject(thisValue));
    SVGEllipseElement* imp = static_cast<SVGEllipseElement*>(castedThis->impl());
    const String& extension(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsBoolean(imp->hasExtension(extension));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGEllipseElementPrototypeFunctionGetPresentationAttribute(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGEllipseElement::s_info))
        return throwVMTypeError(exec);
    JSSVGEllipseElement* castedThis = static_cast<JSSVGEllipseElement*>(asObject(thisValue));
    SVGEllipseElement* imp = static_cast<SVGEllipseElement*>(castedThis->impl());
    const String& name(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGEllipseElementPrototypeFunctionGetBBox(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGEllipseElement::s_info))
        return throwVMTypeError(exec);
    JSSVGEllipseElement* castedThis = static_cast<JSSVGEllipseElement*>(asObject(thisValue));
    SVGEllipseElement* imp = static_cast<SVGEllipseElement*>(castedThis->impl());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<FloatRect>::create(imp->getBBox())));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGEllipseElementPrototypeFunctionGetCTM(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGEllipseElement::s_info))
        return throwVMTypeError(exec);
    JSSVGEllipseElement* castedThis = static_cast<JSSVGEllipseElement*>(asObject(thisValue));
    SVGEllipseElement* imp = static_cast<SVGEllipseElement*>(castedThis->impl());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(imp->getCTM())));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGEllipseElementPrototypeFunctionGetScreenCTM(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGEllipseElement::s_info))
        return throwVMTypeError(exec);
    JSSVGEllipseElement* castedThis = static_cast<JSSVGEllipseElement*>(asObject(thisValue));
    SVGEllipseElement* imp = static_cast<SVGEllipseElement*>(castedThis->impl());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(imp->getScreenCTM())));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGEllipseElementPrototypeFunctionGetTransformToElement(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGEllipseElement::s_info))
        return throwVMTypeError(exec);
    JSSVGEllipseElement* castedThis = static_cast<JSSVGEllipseElement*>(asObject(thisValue));
    SVGEllipseElement* imp = static_cast<SVGEllipseElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    SVGElement* element(toSVGElement(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(imp->getTransformToElement(element, ec))));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}


}

#endif // ENABLE(SVG)
