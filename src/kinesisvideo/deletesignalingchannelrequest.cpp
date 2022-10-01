// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesignalingchannelrequest.h"
#include "deletesignalingchannelrequest_p.h"
#include "deletesignalingchannelresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::DeleteSignalingChannelRequest
 * \brief The DeleteSignalingChannelRequest class provides an interface for KinesisVideo DeleteSignalingChannel requests.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::deleteSignalingChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSignalingChannelRequest::DeleteSignalingChannelRequest(const DeleteSignalingChannelRequest &other)
    : KinesisVideoRequest(new DeleteSignalingChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSignalingChannelRequest object.
 */
DeleteSignalingChannelRequest::DeleteSignalingChannelRequest()
    : KinesisVideoRequest(new DeleteSignalingChannelRequestPrivate(KinesisVideoRequest::DeleteSignalingChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSignalingChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSignalingChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSignalingChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSignalingChannelResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideo::DeleteSignalingChannelRequestPrivate
 * \brief The DeleteSignalingChannelRequestPrivate class provides private implementation for DeleteSignalingChannelRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a DeleteSignalingChannelRequestPrivate object for KinesisVideo \a action,
 * with public implementation \a q.
 */
DeleteSignalingChannelRequestPrivate::DeleteSignalingChannelRequestPrivate(
    const KinesisVideoRequest::Action action, DeleteSignalingChannelRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSignalingChannelRequest
 * class' copy constructor.
 */
DeleteSignalingChannelRequestPrivate::DeleteSignalingChannelRequestPrivate(
    const DeleteSignalingChannelRequestPrivate &other, DeleteSignalingChannelRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
