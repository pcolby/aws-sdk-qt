// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchstoprequest.h"
#include "batchstoprequest_p.h"
#include "batchstopresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::BatchStopRequest
 * \brief The BatchStopRequest class provides an interface for MediaLive BatchStop requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::batchStop
 */

/*!
 * Constructs a copy of \a other.
 */
BatchStopRequest::BatchStopRequest(const BatchStopRequest &other)
    : MediaLiveRequest(new BatchStopRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchStopRequest object.
 */
BatchStopRequest::BatchStopRequest()
    : MediaLiveRequest(new BatchStopRequestPrivate(MediaLiveRequest::BatchStopAction, this))
{

}

/*!
 * \reimp
 */
bool BatchStopRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchStopResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchStopRequest::response(QNetworkReply * const reply) const
{
    return new BatchStopResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::BatchStopRequestPrivate
 * \brief The BatchStopRequestPrivate class provides private implementation for BatchStopRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a BatchStopRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
BatchStopRequestPrivate::BatchStopRequestPrivate(
    const MediaLiveRequest::Action action, BatchStopRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchStopRequest
 * class' copy constructor.
 */
BatchStopRequestPrivate::BatchStopRequestPrivate(
    const BatchStopRequestPrivate &other, BatchStopRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
