// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "dissociateentityfromthingrequest.h"
#include "dissociateentityfromthingrequest_p.h"
#include "dissociateentityfromthingresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::DissociateEntityFromThingRequest
 * \brief The DissociateEntityFromThingRequest class provides an interface for IoTThingsGraph DissociateEntityFromThing requests.
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
 * \sa IoTThingsGraphClient::dissociateEntityFromThing
 */

/*!
 * Constructs a copy of \a other.
 */
DissociateEntityFromThingRequest::DissociateEntityFromThingRequest(const DissociateEntityFromThingRequest &other)
    : IoTThingsGraphRequest(new DissociateEntityFromThingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DissociateEntityFromThingRequest object.
 */
DissociateEntityFromThingRequest::DissociateEntityFromThingRequest()
    : IoTThingsGraphRequest(new DissociateEntityFromThingRequestPrivate(IoTThingsGraphRequest::DissociateEntityFromThingAction, this))
{

}

/*!
 * \reimp
 */
bool DissociateEntityFromThingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DissociateEntityFromThingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DissociateEntityFromThingRequest::response(QNetworkReply * const reply) const
{
    return new DissociateEntityFromThingResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::DissociateEntityFromThingRequestPrivate
 * \brief The DissociateEntityFromThingRequestPrivate class provides private implementation for DissociateEntityFromThingRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a DissociateEntityFromThingRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
DissociateEntityFromThingRequestPrivate::DissociateEntityFromThingRequestPrivate(
    const IoTThingsGraphRequest::Action action, DissociateEntityFromThingRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DissociateEntityFromThingRequest
 * class' copy constructor.
 */
DissociateEntityFromThingRequestPrivate::DissociateEntityFromThingRequestPrivate(
    const DissociateEntityFromThingRequestPrivate &other, DissociateEntityFromThingRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
