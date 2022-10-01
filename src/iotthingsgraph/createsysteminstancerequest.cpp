// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsysteminstancerequest.h"
#include "createsysteminstancerequest_p.h"
#include "createsysteminstanceresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::CreateSystemInstanceRequest
 * \brief The CreateSystemInstanceRequest class provides an interface for IoTThingsGraph CreateSystemInstance requests.
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
 * \sa IoTThingsGraphClient::createSystemInstance
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSystemInstanceRequest::CreateSystemInstanceRequest(const CreateSystemInstanceRequest &other)
    : IoTThingsGraphRequest(new CreateSystemInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSystemInstanceRequest object.
 */
CreateSystemInstanceRequest::CreateSystemInstanceRequest()
    : IoTThingsGraphRequest(new CreateSystemInstanceRequestPrivate(IoTThingsGraphRequest::CreateSystemInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSystemInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSystemInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSystemInstanceRequest::response(QNetworkReply * const reply) const
{
    return new CreateSystemInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::CreateSystemInstanceRequestPrivate
 * \brief The CreateSystemInstanceRequestPrivate class provides private implementation for CreateSystemInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a CreateSystemInstanceRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
CreateSystemInstanceRequestPrivate::CreateSystemInstanceRequestPrivate(
    const IoTThingsGraphRequest::Action action, CreateSystemInstanceRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSystemInstanceRequest
 * class' copy constructor.
 */
CreateSystemInstanceRequestPrivate::CreateSystemInstanceRequestPrivate(
    const CreateSystemInstanceRequestPrivate &other, CreateSystemInstanceRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
