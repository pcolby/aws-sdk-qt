// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
