// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startchannelrequest.h"
#include "startchannelrequest_p.h"
#include "startchannelresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::StartChannelRequest
 * \brief The StartChannelRequest class provides an interface for MediaLive StartChannel requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::startChannel
 */

/*!
 * Constructs a copy of \a other.
 */
StartChannelRequest::StartChannelRequest(const StartChannelRequest &other)
    : MediaLiveRequest(new StartChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartChannelRequest object.
 */
StartChannelRequest::StartChannelRequest()
    : MediaLiveRequest(new StartChannelRequestPrivate(MediaLiveRequest::StartChannelAction, this))
{

}

/*!
 * \reimp
 */
bool StartChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartChannelRequest::response(QNetworkReply * const reply) const
{
    return new StartChannelResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::StartChannelRequestPrivate
 * \brief The StartChannelRequestPrivate class provides private implementation for StartChannelRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a StartChannelRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
StartChannelRequestPrivate::StartChannelRequestPrivate(
    const MediaLiveRequest::Action action, StartChannelRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartChannelRequest
 * class' copy constructor.
 */
StartChannelRequestPrivate::StartChannelRequestPrivate(
    const StartChannelRequestPrivate &other, StartChannelRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
