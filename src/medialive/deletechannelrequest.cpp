// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletechannelrequest.h"
#include "deletechannelrequest_p.h"
#include "deletechannelresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DeleteChannelRequest
 * \brief The DeleteChannelRequest class provides an interface for MediaLive DeleteChannel requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::deleteChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteChannelRequest::DeleteChannelRequest(const DeleteChannelRequest &other)
    : MediaLiveRequest(new DeleteChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteChannelRequest object.
 */
DeleteChannelRequest::DeleteChannelRequest()
    : MediaLiveRequest(new DeleteChannelRequestPrivate(MediaLiveRequest::DeleteChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteChannelResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::DeleteChannelRequestPrivate
 * \brief The DeleteChannelRequestPrivate class provides private implementation for DeleteChannelRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DeleteChannelRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
DeleteChannelRequestPrivate::DeleteChannelRequestPrivate(
    const MediaLiveRequest::Action action, DeleteChannelRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteChannelRequest
 * class' copy constructor.
 */
DeleteChannelRequestPrivate::DeleteChannelRequestPrivate(
    const DeleteChannelRequestPrivate &other, DeleteChannelRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
