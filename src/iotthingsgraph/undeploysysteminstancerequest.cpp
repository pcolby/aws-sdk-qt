// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "undeploysysteminstancerequest.h"
#include "undeploysysteminstancerequest_p.h"
#include "undeploysysteminstanceresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::UndeploySystemInstanceRequest
 * \brief The UndeploySystemInstanceRequest class provides an interface for IoTThingsGraph UndeploySystemInstance requests.
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
 * \sa IoTThingsGraphClient::undeploySystemInstance
 */

/*!
 * Constructs a copy of \a other.
 */
UndeploySystemInstanceRequest::UndeploySystemInstanceRequest(const UndeploySystemInstanceRequest &other)
    : IoTThingsGraphRequest(new UndeploySystemInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UndeploySystemInstanceRequest object.
 */
UndeploySystemInstanceRequest::UndeploySystemInstanceRequest()
    : IoTThingsGraphRequest(new UndeploySystemInstanceRequestPrivate(IoTThingsGraphRequest::UndeploySystemInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool UndeploySystemInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UndeploySystemInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UndeploySystemInstanceRequest::response(QNetworkReply * const reply) const
{
    return new UndeploySystemInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::UndeploySystemInstanceRequestPrivate
 * \brief The UndeploySystemInstanceRequestPrivate class provides private implementation for UndeploySystemInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a UndeploySystemInstanceRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
UndeploySystemInstanceRequestPrivate::UndeploySystemInstanceRequestPrivate(
    const IoTThingsGraphRequest::Action action, UndeploySystemInstanceRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UndeploySystemInstanceRequest
 * class' copy constructor.
 */
UndeploySystemInstanceRequestPrivate::UndeploySystemInstanceRequestPrivate(
    const UndeploySystemInstanceRequestPrivate &other, UndeploySystemInstanceRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
