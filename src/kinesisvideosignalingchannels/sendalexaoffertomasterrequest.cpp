/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "sendalexaoffertomasterrequest.h"
#include "sendalexaoffertomasterrequest_p.h"
#include "sendalexaoffertomasterresponse.h"
#include "kinesisvideosignalingchannelsrequest_p.h"

namespace QtAws {
namespace KinesisVideoSignalingChannels {

/*!
 * \class QtAws::KinesisVideoSignalingChannels::SendAlexaOfferToMasterRequest
 * \brief The SendAlexaOfferToMasterRequest class provides an interface for KinesisVideoSignalingChannels SendAlexaOfferToMaster requests.
 *
 * \inmodule QtAwsKinesisVideoSignalingChannels
 *
 *  Kinesis Video Streams Signaling Service is a intermediate service that establishes a communication channel for
 *  discovering peers, transmitting offers and answers in order to establish peer-to-peer connection in webRTC
 *
 * \sa KinesisVideoSignalingChannelsClient::sendAlexaOfferToMaster
 */

/*!
 * Constructs a copy of \a other.
 */
SendAlexaOfferToMasterRequest::SendAlexaOfferToMasterRequest(const SendAlexaOfferToMasterRequest &other)
    : KinesisVideoSignalingChannelsRequest(new SendAlexaOfferToMasterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendAlexaOfferToMasterRequest object.
 */
SendAlexaOfferToMasterRequest::SendAlexaOfferToMasterRequest()
    : KinesisVideoSignalingChannelsRequest(new SendAlexaOfferToMasterRequestPrivate(KinesisVideoSignalingChannelsRequest::SendAlexaOfferToMasterAction, this))
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
 * \class QtAws::KinesisVideoSignalingChannels::SendAlexaOfferToMasterRequestPrivate
 * \brief The SendAlexaOfferToMasterRequestPrivate class provides private implementation for SendAlexaOfferToMasterRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoSignalingChannels
 */

/*!
 * Constructs a SendAlexaOfferToMasterRequestPrivate object for KinesisVideoSignalingChannels \a action,
 * with public implementation \a q.
 */
SendAlexaOfferToMasterRequestPrivate::SendAlexaOfferToMasterRequestPrivate(
    const KinesisVideoSignalingChannelsRequest::Action action, SendAlexaOfferToMasterRequest * const q)
    : KinesisVideoSignalingChannelsRequestPrivate(action, q)
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
    : KinesisVideoSignalingChannelsRequestPrivate(other, q)
{

}

} // namespace KinesisVideoSignalingChannels
} // namespace QtAws
