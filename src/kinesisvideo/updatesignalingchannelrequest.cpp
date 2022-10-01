// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesignalingchannelrequest.h"
#include "updatesignalingchannelrequest_p.h"
#include "updatesignalingchannelresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::UpdateSignalingChannelRequest
 * \brief The UpdateSignalingChannelRequest class provides an interface for KinesisVideo UpdateSignalingChannel requests.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::updateSignalingChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSignalingChannelRequest::UpdateSignalingChannelRequest(const UpdateSignalingChannelRequest &other)
    : KinesisVideoRequest(new UpdateSignalingChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSignalingChannelRequest object.
 */
UpdateSignalingChannelRequest::UpdateSignalingChannelRequest()
    : KinesisVideoRequest(new UpdateSignalingChannelRequestPrivate(KinesisVideoRequest::UpdateSignalingChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSignalingChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSignalingChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSignalingChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSignalingChannelResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideo::UpdateSignalingChannelRequestPrivate
 * \brief The UpdateSignalingChannelRequestPrivate class provides private implementation for UpdateSignalingChannelRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a UpdateSignalingChannelRequestPrivate object for KinesisVideo \a action,
 * with public implementation \a q.
 */
UpdateSignalingChannelRequestPrivate::UpdateSignalingChannelRequestPrivate(
    const KinesisVideoRequest::Action action, UpdateSignalingChannelRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSignalingChannelRequest
 * class' copy constructor.
 */
UpdateSignalingChannelRequestPrivate::UpdateSignalingChannelRequestPrivate(
    const UpdateSignalingChannelRequestPrivate &other, UpdateSignalingChannelRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
