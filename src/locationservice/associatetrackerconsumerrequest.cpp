/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "associatetrackerconsumerrequest.h"
#include "associatetrackerconsumerrequest_p.h"
#include "associatetrackerconsumerresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::AssociateTrackerConsumerRequest
 * \brief The AssociateTrackerConsumerRequest class provides an interface for LocationService AssociateTrackerConsumer requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::associateTrackerConsumer
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateTrackerConsumerRequest::AssociateTrackerConsumerRequest(const AssociateTrackerConsumerRequest &other)
    : LocationServiceRequest(new AssociateTrackerConsumerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateTrackerConsumerRequest object.
 */
AssociateTrackerConsumerRequest::AssociateTrackerConsumerRequest()
    : LocationServiceRequest(new AssociateTrackerConsumerRequestPrivate(LocationServiceRequest::AssociateTrackerConsumerAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateTrackerConsumerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateTrackerConsumerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateTrackerConsumerRequest::response(QNetworkReply * const reply) const
{
    return new AssociateTrackerConsumerResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::AssociateTrackerConsumerRequestPrivate
 * \brief The AssociateTrackerConsumerRequestPrivate class provides private implementation for AssociateTrackerConsumerRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a AssociateTrackerConsumerRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
AssociateTrackerConsumerRequestPrivate::AssociateTrackerConsumerRequestPrivate(
    const LocationServiceRequest::Action action, AssociateTrackerConsumerRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateTrackerConsumerRequest
 * class' copy constructor.
 */
AssociateTrackerConsumerRequestPrivate::AssociateTrackerConsumerRequestPrivate(
    const AssociateTrackerConsumerRequestPrivate &other, AssociateTrackerConsumerRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
