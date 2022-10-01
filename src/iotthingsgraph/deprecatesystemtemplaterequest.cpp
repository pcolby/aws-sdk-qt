// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deprecatesystemtemplaterequest.h"
#include "deprecatesystemtemplaterequest_p.h"
#include "deprecatesystemtemplateresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::DeprecateSystemTemplateRequest
 * \brief The DeprecateSystemTemplateRequest class provides an interface for IoTThingsGraph DeprecateSystemTemplate requests.
 *
 * \inmodule QtAwsIoTThingsGraph
 *
 *  <fullname>AWS IoT Things Graph</fullname>
 * 
 *  AWS IoT Things Graph provides an integrated set of tools that enable developers to connect devices and services that use
 *  different standards, such as units of measure and communication protocols. AWS IoT Things Graph makes it possible to
 *  build IoT applications with little to no code by connecting devices and services and defining how they interact at an
 *  abstract
 * 
 *  level>
 * 
 *  For more information about how AWS IoT Things Graph works, see the <a
 *  href="https://docs.aws.amazon.com/thingsgraph/latest/ug/iot-tg-whatis.html">User
 * 
 *  Guide</a>>
 * 
 *  The AWS IoT Things Graph service is
 *
 * \sa IoTThingsGraphClient::deprecateSystemTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeprecateSystemTemplateRequest::DeprecateSystemTemplateRequest(const DeprecateSystemTemplateRequest &other)
    : IoTThingsGraphRequest(new DeprecateSystemTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeprecateSystemTemplateRequest object.
 */
DeprecateSystemTemplateRequest::DeprecateSystemTemplateRequest()
    : IoTThingsGraphRequest(new DeprecateSystemTemplateRequestPrivate(IoTThingsGraphRequest::DeprecateSystemTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeprecateSystemTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeprecateSystemTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeprecateSystemTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeprecateSystemTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::DeprecateSystemTemplateRequestPrivate
 * \brief The DeprecateSystemTemplateRequestPrivate class provides private implementation for DeprecateSystemTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a DeprecateSystemTemplateRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
DeprecateSystemTemplateRequestPrivate::DeprecateSystemTemplateRequestPrivate(
    const IoTThingsGraphRequest::Action action, DeprecateSystemTemplateRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeprecateSystemTemplateRequest
 * class' copy constructor.
 */
DeprecateSystemTemplateRequestPrivate::DeprecateSystemTemplateRequestPrivate(
    const DeprecateSystemTemplateRequestPrivate &other, DeprecateSystemTemplateRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
