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

#include "disassociatetrackerconsumerrequest.h"
#include "disassociatetrackerconsumerrequest_p.h"
#include "disassociatetrackerconsumerresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::DisassociateTrackerConsumerRequest
 * \brief The DisassociateTrackerConsumerRequest class provides an interface for LocationService DisassociateTrackerConsumer requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::disassociateTrackerConsumer
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateTrackerConsumerRequest::DisassociateTrackerConsumerRequest(const DisassociateTrackerConsumerRequest &other)
    : LocationServiceRequest(new DisassociateTrackerConsumerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateTrackerConsumerRequest object.
 */
DisassociateTrackerConsumerRequest::DisassociateTrackerConsumerRequest()
    : LocationServiceRequest(new DisassociateTrackerConsumerRequestPrivate(LocationServiceRequest::DisassociateTrackerConsumerAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateTrackerConsumerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateTrackerConsumerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateTrackerConsumerRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateTrackerConsumerResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::DisassociateTrackerConsumerRequestPrivate
 * \brief The DisassociateTrackerConsumerRequestPrivate class provides private implementation for DisassociateTrackerConsumerRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a DisassociateTrackerConsumerRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
DisassociateTrackerConsumerRequestPrivate::DisassociateTrackerConsumerRequestPrivate(
    const LocationServiceRequest::Action action, DisassociateTrackerConsumerRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateTrackerConsumerRequest
 * class' copy constructor.
 */
DisassociateTrackerConsumerRequestPrivate::DisassociateTrackerConsumerRequestPrivate(
    const DisassociateTrackerConsumerRequestPrivate &other, DisassociateTrackerConsumerRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
