// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatechannelrequest.h"
#include "updatechannelrequest_p.h"
#include "updatechannelresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateChannelRequest
 * \brief The UpdateChannelRequest class provides an interface for MediaLive UpdateChannel requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::updateChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateChannelRequest::UpdateChannelRequest(const UpdateChannelRequest &other)
    : MediaLiveRequest(new UpdateChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateChannelRequest object.
 */
UpdateChannelRequest::UpdateChannelRequest()
    : MediaLiveRequest(new UpdateChannelRequestPrivate(MediaLiveRequest::UpdateChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateChannelResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::UpdateChannelRequestPrivate
 * \brief The UpdateChannelRequestPrivate class provides private implementation for UpdateChannelRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a UpdateChannelRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
UpdateChannelRequestPrivate::UpdateChannelRequestPrivate(
    const MediaLiveRequest::Action action, UpdateChannelRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateChannelRequest
 * class' copy constructor.
 */
UpdateChannelRequestPrivate::UpdateChannelRequestPrivate(
    const UpdateChannelRequestPrivate &other, UpdateChannelRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
