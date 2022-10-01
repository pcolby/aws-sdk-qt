// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatechannelclassrequest.h"
#include "updatechannelclassrequest_p.h"
#include "updatechannelclassresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateChannelClassRequest
 * \brief The UpdateChannelClassRequest class provides an interface for MediaLive UpdateChannelClass requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::updateChannelClass
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateChannelClassRequest::UpdateChannelClassRequest(const UpdateChannelClassRequest &other)
    : MediaLiveRequest(new UpdateChannelClassRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateChannelClassRequest object.
 */
UpdateChannelClassRequest::UpdateChannelClassRequest()
    : MediaLiveRequest(new UpdateChannelClassRequestPrivate(MediaLiveRequest::UpdateChannelClassAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateChannelClassRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateChannelClassResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateChannelClassRequest::response(QNetworkReply * const reply) const
{
    return new UpdateChannelClassResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::UpdateChannelClassRequestPrivate
 * \brief The UpdateChannelClassRequestPrivate class provides private implementation for UpdateChannelClassRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a UpdateChannelClassRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
UpdateChannelClassRequestPrivate::UpdateChannelClassRequestPrivate(
    const MediaLiveRequest::Action action, UpdateChannelClassRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateChannelClassRequest
 * class' copy constructor.
 */
UpdateChannelClassRequestPrivate::UpdateChannelClassRequestPrivate(
    const UpdateChannelClassRequestPrivate &other, UpdateChannelClassRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
