// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsignalingchannelrequest.h"
#include "createsignalingchannelrequest_p.h"
#include "createsignalingchannelresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::CreateSignalingChannelRequest
 * \brief The CreateSignalingChannelRequest class provides an interface for KinesisVideo CreateSignalingChannel requests.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::createSignalingChannel
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSignalingChannelRequest::CreateSignalingChannelRequest(const CreateSignalingChannelRequest &other)
    : KinesisVideoRequest(new CreateSignalingChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSignalingChannelRequest object.
 */
CreateSignalingChannelRequest::CreateSignalingChannelRequest()
    : KinesisVideoRequest(new CreateSignalingChannelRequestPrivate(KinesisVideoRequest::CreateSignalingChannelAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSignalingChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSignalingChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSignalingChannelRequest::response(QNetworkReply * const reply) const
{
    return new CreateSignalingChannelResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideo::CreateSignalingChannelRequestPrivate
 * \brief The CreateSignalingChannelRequestPrivate class provides private implementation for CreateSignalingChannelRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a CreateSignalingChannelRequestPrivate object for KinesisVideo \a action,
 * with public implementation \a q.
 */
CreateSignalingChannelRequestPrivate::CreateSignalingChannelRequestPrivate(
    const KinesisVideoRequest::Action action, CreateSignalingChannelRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSignalingChannelRequest
 * class' copy constructor.
 */
CreateSignalingChannelRequestPrivate::CreateSignalingChannelRequestPrivate(
    const CreateSignalingChannelRequestPrivate &other, CreateSignalingChannelRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
