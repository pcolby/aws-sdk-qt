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

#include "cancelcontactrequest.h"
#include "cancelcontactrequest_p.h"
#include "cancelcontactresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::CancelContactRequest
 * \brief The CancelContactRequest class provides an interface for GroundStation CancelContact requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::cancelContact
 */

/*!
 * Constructs a copy of \a other.
 */
CancelContactRequest::CancelContactRequest(const CancelContactRequest &other)
    : GroundStationRequest(new CancelContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelContactRequest object.
 */
CancelContactRequest::CancelContactRequest()
    : GroundStationRequest(new CancelContactRequestPrivate(GroundStationRequest::CancelContactAction, this))
{

}

/*!
 * \reimp
 */
bool CancelContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelContactRequest::response(QNetworkReply * const reply) const
{
    return new CancelContactResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::CancelContactRequestPrivate
 * \brief The CancelContactRequestPrivate class provides private implementation for CancelContactRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a CancelContactRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
CancelContactRequestPrivate::CancelContactRequestPrivate(
    const GroundStationRequest::Action action, CancelContactRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelContactRequest
 * class' copy constructor.
 */
CancelContactRequestPrivate::CancelContactRequestPrivate(
    const CancelContactRequestPrivate &other, CancelContactRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
