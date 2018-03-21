/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "startpersontrackingrequest.h"
#include "startpersontrackingrequest_p.h"
#include "startpersontrackingresponse.h"
#include "rekognitionrequest_p.h"

namespace AWS {
namespace Rekognition {

/**
 * @class  StartPersonTrackingRequest
 *
 * @brief  Implements Rekognition StartPersonTracking requests.
 *
 * @see    RekognitionClient::startPersonTracking
 */

/**
 * @brief  Constructs a new StartPersonTrackingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartPersonTrackingResponse::StartPersonTrackingResponse(

/**
 * @brief  Constructs a new StartPersonTrackingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartPersonTrackingRequest::StartPersonTrackingRequest(const StartPersonTrackingRequest &other)
    : RekognitionRequest(new StartPersonTrackingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartPersonTrackingRequest object.
 */
StartPersonTrackingRequest::StartPersonTrackingRequest()
    : RekognitionRequest(new StartPersonTrackingRequestPrivate(RekognitionRequest::StartPersonTrackingAction, this))
{

}

bool StartPersonTrackingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartPersonTrackingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartPersonTrackingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
AwsAbstractResponse * StartPersonTrackingRequest::response(QNetworkReply * const reply) const
{
    return new StartPersonTrackingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartPersonTrackingRequestPrivate
 *
 * @brief  Private implementation for StartPersonTrackingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartPersonTrackingRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public StartPersonTrackingRequest instance.
 */
StartPersonTrackingRequestPrivate::StartPersonTrackingRequestPrivate(
    const RekognitionRequest::Action action, StartPersonTrackingRequest * const q)
    : StartPersonTrackingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartPersonTrackingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartPersonTrackingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartPersonTrackingRequest instance.
 */
StartPersonTrackingRequestPrivate::StartPersonTrackingRequestPrivate(
    const StartPersonTrackingRequestPrivate &other, StartPersonTrackingRequest * const q)
    : StartPersonTrackingPrivate(other, q)
{

}
