// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
