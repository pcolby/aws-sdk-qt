// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsysteminstancerequest.h"
#include "getsysteminstancerequest_p.h"
#include "getsysteminstanceresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::GetSystemInstanceRequest
 * \brief The GetSystemInstanceRequest class provides an interface for IoTThingsGraph GetSystemInstance requests.
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
 * \sa IoTThingsGraphClient::getSystemInstance
 */

/*!
 * Constructs a copy of \a other.
 */
GetSystemInstanceRequest::GetSystemInstanceRequest(const GetSystemInstanceRequest &other)
    : IoTThingsGraphRequest(new GetSystemInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSystemInstanceRequest object.
 */
GetSystemInstanceRequest::GetSystemInstanceRequest()
    : IoTThingsGraphRequest(new GetSystemInstanceRequestPrivate(IoTThingsGraphRequest::GetSystemInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool GetSystemInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSystemInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSystemInstanceRequest::response(QNetworkReply * const reply) const
{
    return new GetSystemInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::GetSystemInstanceRequestPrivate
 * \brief The GetSystemInstanceRequestPrivate class provides private implementation for GetSystemInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a GetSystemInstanceRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
GetSystemInstanceRequestPrivate::GetSystemInstanceRequestPrivate(
    const IoTThingsGraphRequest::Action action, GetSystemInstanceRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSystemInstanceRequest
 * class' copy constructor.
 */
GetSystemInstanceRequestPrivate::GetSystemInstanceRequestPrivate(
    const GetSystemInstanceRequestPrivate &other, GetSystemInstanceRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
