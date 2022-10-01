// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsystemtemplaterequest.h"
#include "getsystemtemplaterequest_p.h"
#include "getsystemtemplateresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::GetSystemTemplateRequest
 * \brief The GetSystemTemplateRequest class provides an interface for IoTThingsGraph GetSystemTemplate requests.
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
 * \sa IoTThingsGraphClient::getSystemTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GetSystemTemplateRequest::GetSystemTemplateRequest(const GetSystemTemplateRequest &other)
    : IoTThingsGraphRequest(new GetSystemTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSystemTemplateRequest object.
 */
GetSystemTemplateRequest::GetSystemTemplateRequest()
    : IoTThingsGraphRequest(new GetSystemTemplateRequestPrivate(IoTThingsGraphRequest::GetSystemTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool GetSystemTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSystemTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSystemTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GetSystemTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::GetSystemTemplateRequestPrivate
 * \brief The GetSystemTemplateRequestPrivate class provides private implementation for GetSystemTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a GetSystemTemplateRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
GetSystemTemplateRequestPrivate::GetSystemTemplateRequestPrivate(
    const IoTThingsGraphRequest::Action action, GetSystemTemplateRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSystemTemplateRequest
 * class' copy constructor.
 */
GetSystemTemplateRequestPrivate::GetSystemTemplateRequestPrivate(
    const GetSystemTemplateRequestPrivate &other, GetSystemTemplateRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
