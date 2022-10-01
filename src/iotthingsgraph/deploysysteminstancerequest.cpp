// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deploysysteminstancerequest.h"
#include "deploysysteminstancerequest_p.h"
#include "deploysysteminstanceresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::DeploySystemInstanceRequest
 * \brief The DeploySystemInstanceRequest class provides an interface for IoTThingsGraph DeploySystemInstance requests.
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
 * \sa IoTThingsGraphClient::deploySystemInstance
 */

/*!
 * Constructs a copy of \a other.
 */
DeploySystemInstanceRequest::DeploySystemInstanceRequest(const DeploySystemInstanceRequest &other)
    : IoTThingsGraphRequest(new DeploySystemInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeploySystemInstanceRequest object.
 */
DeploySystemInstanceRequest::DeploySystemInstanceRequest()
    : IoTThingsGraphRequest(new DeploySystemInstanceRequestPrivate(IoTThingsGraphRequest::DeploySystemInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool DeploySystemInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeploySystemInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeploySystemInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DeploySystemInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::DeploySystemInstanceRequestPrivate
 * \brief The DeploySystemInstanceRequestPrivate class provides private implementation for DeploySystemInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a DeploySystemInstanceRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
DeploySystemInstanceRequestPrivate::DeploySystemInstanceRequestPrivate(
    const IoTThingsGraphRequest::Action action, DeploySystemInstanceRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeploySystemInstanceRequest
 * class' copy constructor.
 */
DeploySystemInstanceRequestPrivate::DeploySystemInstanceRequestPrivate(
    const DeploySystemInstanceRequestPrivate &other, DeploySystemInstanceRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
