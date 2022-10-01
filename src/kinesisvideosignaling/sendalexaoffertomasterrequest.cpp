// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendalexaoffertomasterrequest.h"
#include "sendalexaoffertomasterrequest_p.h"
#include "sendalexaoffertomasterresponse.h"
#include "kinesisvideosignalingrequest_p.h"

namespace QtAws {
namespace KinesisVideoSignaling {

/*!
 * \class QtAws::KinesisVideoSignaling::SendAlexaOfferToMasterRequest
 * \brief The SendAlexaOfferToMasterRequest class provides an interface for KinesisVideoSignaling SendAlexaOfferToMaster requests.
 *
 * \inmodule QtAwsKinesisVideoSignaling
 *
 *  Kinesis Video Streams Signaling Service is a intermediate service that establishes a communication channel for
 *  discovering peers, transmitting offers and answers in order to establish peer-to-peer connection in webRTC
 *
 * \sa KinesisVideoSignalingClient::sendAlexaOfferToMaster
 */

/*!
 * Constructs a copy of \a other.
 */
SendAlexaOfferToMasterRequest::SendAlexaOfferToMasterRequest(const SendAlexaOfferToMasterRequest &other)
    : KinesisVideoSignalingRequest(new SendAlexaOfferToMasterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendAlexaOfferToMasterRequest object.
 */
SendAlexaOfferToMasterRequest::SendAlexaOfferToMasterRequest()
    : KinesisVideoSignalingRequest(new SendAlexaOfferToMasterRequestPrivate(KinesisVideoSignalingRequest::SendAlexaOfferToMasterAction, this))
{

}

/*!
 * \reimp
 */
bool SendAlexaOfferToMasterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendAlexaOfferToMasterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendAlexaOfferToMasterRequest::response(QNetworkReply * const reply) const
{
    return new SendAlexaOfferToMasterResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideoSignaling::SendAlexaOfferToMasterRequestPrivate
 * \brief The SendAlexaOfferToMasterRequestPrivate class provides private implementation for SendAlexaOfferToMasterRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoSignaling
 */

/*!
 * Constructs a SendAlexaOfferToMasterRequestPrivate object for KinesisVideoSignaling \a action,
 * with public implementation \a q.
 */
SendAlexaOfferToMasterRequestPrivate::SendAlexaOfferToMasterRequestPrivate(
    const KinesisVideoSignalingRequest::Action action, SendAlexaOfferToMasterRequest * const q)
    : KinesisVideoSignalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendAlexaOfferToMasterRequest
 * class' copy constructor.
 */
SendAlexaOfferToMasterRequestPrivate::SendAlexaOfferToMasterRequestPrivate(
    const SendAlexaOfferToMasterRequestPrivate &other, SendAlexaOfferToMasterRequest * const q)
    : KinesisVideoSignalingRequestPrivate(other, q)
{

}

} // namespace KinesisVideoSignaling
} // namespace QtAws
