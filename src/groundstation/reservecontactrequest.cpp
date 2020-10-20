/*
    Copyright 2013-2020 Paul Colby

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

#include "reservecontactrequest.h"
#include "reservecontactrequest_p.h"
#include "reservecontactresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::ReserveContactRequest
 * \brief The ReserveContactRequest class provides an interface for GroundStation ReserveContact requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::reserveContact
 */

/*!
 * Constructs a copy of \a other.
 */
ReserveContactRequest::ReserveContactRequest(const ReserveContactRequest &other)
    : GroundStationRequest(new ReserveContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ReserveContactRequest object.
 */
ReserveContactRequest::ReserveContactRequest()
    : GroundStationRequest(new ReserveContactRequestPrivate(GroundStationRequest::ReserveContactAction, this))
{

}

/*!
 * \reimp
 */
bool ReserveContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ReserveContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ReserveContactRequest::response(QNetworkReply * const reply) const
{
    return new ReserveContactResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::ReserveContactRequestPrivate
 * \brief The ReserveContactRequestPrivate class provides private implementation for ReserveContactRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a ReserveContactRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
ReserveContactRequestPrivate::ReserveContactRequestPrivate(
    const GroundStationRequest::Action action, ReserveContactRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ReserveContactRequest
 * class' copy constructor.
 */
ReserveContactRequestPrivate::ReserveContactRequestPrivate(
    const ReserveContactRequestPrivate &other, ReserveContactRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
