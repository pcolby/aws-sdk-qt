// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchstartrequest.h"
#include "batchstartrequest_p.h"
#include "batchstartresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::BatchStartRequest
 * \brief The BatchStartRequest class provides an interface for MediaLive BatchStart requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::batchStart
 */

/*!
 * Constructs a copy of \a other.
 */
BatchStartRequest::BatchStartRequest(const BatchStartRequest &other)
    : MediaLiveRequest(new BatchStartRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchStartRequest object.
 */
BatchStartRequest::BatchStartRequest()
    : MediaLiveRequest(new BatchStartRequestPrivate(MediaLiveRequest::BatchStartAction, this))
{

}

/*!
 * \reimp
 */
bool BatchStartRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchStartResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchStartRequest::response(QNetworkReply * const reply) const
{
    return new BatchStartResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::BatchStartRequestPrivate
 * \brief The BatchStartRequestPrivate class provides private implementation for BatchStartRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a BatchStartRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
BatchStartRequestPrivate::BatchStartRequestPrivate(
    const MediaLiveRequest::Action action, BatchStartRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchStartRequest
 * class' copy constructor.
 */
BatchStartRequestPrivate::BatchStartRequestPrivate(
    const BatchStartRequestPrivate &other, BatchStartRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
