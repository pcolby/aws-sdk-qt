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
