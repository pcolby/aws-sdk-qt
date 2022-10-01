// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatetrackerconsumerrequest.h"
#include "associatetrackerconsumerrequest_p.h"
#include "associatetrackerconsumerresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::AssociateTrackerConsumerRequest
 * \brief The AssociateTrackerConsumerRequest class provides an interface for Location AssociateTrackerConsumer requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::associateTrackerConsumer
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateTrackerConsumerRequest::AssociateTrackerConsumerRequest(const AssociateTrackerConsumerRequest &other)
    : LocationRequest(new AssociateTrackerConsumerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateTrackerConsumerRequest object.
 */
AssociateTrackerConsumerRequest::AssociateTrackerConsumerRequest()
    : LocationRequest(new AssociateTrackerConsumerRequestPrivate(LocationRequest::AssociateTrackerConsumerAction, this))
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
 * \class QtAws::Location::AssociateTrackerConsumerRequestPrivate
 * \brief The AssociateTrackerConsumerRequestPrivate class provides private implementation for AssociateTrackerConsumerRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a AssociateTrackerConsumerRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
AssociateTrackerConsumerRequestPrivate::AssociateTrackerConsumerRequestPrivate(
    const LocationRequest::Action action, AssociateTrackerConsumerRequest * const q)
    : LocationRequestPrivate(action, q)
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
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
