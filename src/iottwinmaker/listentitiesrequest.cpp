// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listentitiesrequest.h"
#include "listentitiesrequest_p.h"
#include "listentitiesresponse.h"
#include "iottwinmakerrequest_p.h"

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::ListEntitiesRequest
 * \brief The ListEntitiesRequest class provides an interface for IoTTwinMaker ListEntities requests.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::listEntities
 */

/*!
 * Constructs a copy of \a other.
 */
ListEntitiesRequest::ListEntitiesRequest(const ListEntitiesRequest &other)
    : IoTTwinMakerRequest(new ListEntitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEntitiesRequest object.
 */
ListEntitiesRequest::ListEntitiesRequest()
    : IoTTwinMakerRequest(new ListEntitiesRequestPrivate(IoTTwinMakerRequest::ListEntitiesAction, this))
{

}

/*!
 * \reimp
 */
bool ListEntitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEntitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEntitiesRequest::response(QNetworkReply * const reply) const
{
    return new ListEntitiesResponse(*this, reply);
}

/*!
 * \class QtAws::IoTTwinMaker::ListEntitiesRequestPrivate
 * \brief The ListEntitiesRequestPrivate class provides private implementation for ListEntitiesRequest.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a ListEntitiesRequestPrivate object for IoTTwinMaker \a action,
 * with public implementation \a q.
 */
ListEntitiesRequestPrivate::ListEntitiesRequestPrivate(
    const IoTTwinMakerRequest::Action action, ListEntitiesRequest * const q)
    : IoTTwinMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEntitiesRequest
 * class' copy constructor.
 */
ListEntitiesRequestPrivate::ListEntitiesRequestPrivate(
    const ListEntitiesRequestPrivate &other, ListEntitiesRequest * const q)
    : IoTTwinMakerRequestPrivate(other, q)
{

}

} // namespace IoTTwinMaker
} // namespace QtAws
