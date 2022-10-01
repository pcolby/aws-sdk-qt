// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatetrackerconsumerrequest.h"
#include "disassociatetrackerconsumerrequest_p.h"
#include "disassociatetrackerconsumerresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::DisassociateTrackerConsumerRequest
 * \brief The DisassociateTrackerConsumerRequest class provides an interface for Location DisassociateTrackerConsumer requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::disassociateTrackerConsumer
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateTrackerConsumerRequest::DisassociateTrackerConsumerRequest(const DisassociateTrackerConsumerRequest &other)
    : LocationRequest(new DisassociateTrackerConsumerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateTrackerConsumerRequest object.
 */
DisassociateTrackerConsumerRequest::DisassociateTrackerConsumerRequest()
    : LocationRequest(new DisassociateTrackerConsumerRequestPrivate(LocationRequest::DisassociateTrackerConsumerAction, this))
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
 * \class QtAws::Location::DisassociateTrackerConsumerRequestPrivate
 * \brief The DisassociateTrackerConsumerRequestPrivate class provides private implementation for DisassociateTrackerConsumerRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a DisassociateTrackerConsumerRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
DisassociateTrackerConsumerRequestPrivate::DisassociateTrackerConsumerRequestPrivate(
    const LocationRequest::Action action, DisassociateTrackerConsumerRequest * const q)
    : LocationRequestPrivate(action, q)
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
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
