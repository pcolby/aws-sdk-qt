// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startmultiplexrequest.h"
#include "startmultiplexrequest_p.h"
#include "startmultiplexresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::StartMultiplexRequest
 * \brief The StartMultiplexRequest class provides an interface for MediaLive StartMultiplex requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::startMultiplex
 */

/*!
 * Constructs a copy of \a other.
 */
StartMultiplexRequest::StartMultiplexRequest(const StartMultiplexRequest &other)
    : MediaLiveRequest(new StartMultiplexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartMultiplexRequest object.
 */
StartMultiplexRequest::StartMultiplexRequest()
    : MediaLiveRequest(new StartMultiplexRequestPrivate(MediaLiveRequest::StartMultiplexAction, this))
{

}

/*!
 * \reimp
 */
bool StartMultiplexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartMultiplexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartMultiplexRequest::response(QNetworkReply * const reply) const
{
    return new StartMultiplexResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::StartMultiplexRequestPrivate
 * \brief The StartMultiplexRequestPrivate class provides private implementation for StartMultiplexRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a StartMultiplexRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
StartMultiplexRequestPrivate::StartMultiplexRequestPrivate(
    const MediaLiveRequest::Action action, StartMultiplexRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartMultiplexRequest
 * class' copy constructor.
 */
StartMultiplexRequestPrivate::StartMultiplexRequestPrivate(
    const StartMultiplexRequestPrivate &other, StartMultiplexRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
