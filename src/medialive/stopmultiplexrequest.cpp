// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopmultiplexrequest.h"
#include "stopmultiplexrequest_p.h"
#include "stopmultiplexresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::StopMultiplexRequest
 * \brief The StopMultiplexRequest class provides an interface for MediaLive StopMultiplex requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::stopMultiplex
 */

/*!
 * Constructs a copy of \a other.
 */
StopMultiplexRequest::StopMultiplexRequest(const StopMultiplexRequest &other)
    : MediaLiveRequest(new StopMultiplexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopMultiplexRequest object.
 */
StopMultiplexRequest::StopMultiplexRequest()
    : MediaLiveRequest(new StopMultiplexRequestPrivate(MediaLiveRequest::StopMultiplexAction, this))
{

}

/*!
 * \reimp
 */
bool StopMultiplexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopMultiplexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopMultiplexRequest::response(QNetworkReply * const reply) const
{
    return new StopMultiplexResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::StopMultiplexRequestPrivate
 * \brief The StopMultiplexRequestPrivate class provides private implementation for StopMultiplexRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a StopMultiplexRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
StopMultiplexRequestPrivate::StopMultiplexRequestPrivate(
    const MediaLiveRequest::Action action, StopMultiplexRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopMultiplexRequest
 * class' copy constructor.
 */
StopMultiplexRequestPrivate::StopMultiplexRequestPrivate(
    const StopMultiplexRequestPrivate &other, StopMultiplexRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
