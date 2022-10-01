// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "geticeserverconfigrequest.h"
#include "geticeserverconfigrequest_p.h"
#include "geticeserverconfigresponse.h"
#include "kinesisvideosignalingrequest_p.h"

namespace QtAws {
namespace KinesisVideoSignaling {

/*!
 * \class QtAws::KinesisVideoSignaling::GetIceServerConfigRequest
 * \brief The GetIceServerConfigRequest class provides an interface for KinesisVideoSignaling GetIceServerConfig requests.
 *
 * \inmodule QtAwsKinesisVideoSignaling
 *
 *  Kinesis Video Streams Signaling Service is a intermediate service that establishes a communication channel for
 *  discovering peers, transmitting offers and answers in order to establish peer-to-peer connection in webRTC
 *
 * \sa KinesisVideoSignalingClient::getIceServerConfig
 */

/*!
 * Constructs a copy of \a other.
 */
GetIceServerConfigRequest::GetIceServerConfigRequest(const GetIceServerConfigRequest &other)
    : KinesisVideoSignalingRequest(new GetIceServerConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIceServerConfigRequest object.
 */
GetIceServerConfigRequest::GetIceServerConfigRequest()
    : KinesisVideoSignalingRequest(new GetIceServerConfigRequestPrivate(KinesisVideoSignalingRequest::GetIceServerConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetIceServerConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIceServerConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIceServerConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetIceServerConfigResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideoSignaling::GetIceServerConfigRequestPrivate
 * \brief The GetIceServerConfigRequestPrivate class provides private implementation for GetIceServerConfigRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoSignaling
 */

/*!
 * Constructs a GetIceServerConfigRequestPrivate object for KinesisVideoSignaling \a action,
 * with public implementation \a q.
 */
GetIceServerConfigRequestPrivate::GetIceServerConfigRequestPrivate(
    const KinesisVideoSignalingRequest::Action action, GetIceServerConfigRequest * const q)
    : KinesisVideoSignalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIceServerConfigRequest
 * class' copy constructor.
 */
GetIceServerConfigRequestPrivate::GetIceServerConfigRequestPrivate(
    const GetIceServerConfigRequestPrivate &other, GetIceServerConfigRequest * const q)
    : KinesisVideoSignalingRequestPrivate(other, q)
{

}

} // namespace KinesisVideoSignaling
} // namespace QtAws
