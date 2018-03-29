/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getpersontrackingrequest.h"
#include "getpersontrackingrequest_p.h"
#include "getpersontrackingresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/**
 * @class  GetPersonTrackingRequest
 *
 * @brief  Implements Rekognition GetPersonTracking requests.
 *
 * @see    RekognitionClient::getPersonTracking
 */

/**
 * @brief  Constructs a new GetPersonTrackingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetPersonTrackingRequest::GetPersonTrackingRequest(const GetPersonTrackingRequest &other)
    : RekognitionRequest(new GetPersonTrackingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetPersonTrackingRequest object.
 */
GetPersonTrackingRequest::GetPersonTrackingRequest()
    : RekognitionRequest(new GetPersonTrackingRequestPrivate(RekognitionRequest::GetPersonTrackingAction, this))
{

}

bool GetPersonTrackingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetPersonTrackingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetPersonTrackingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
AwsAbstractResponse * GetPersonTrackingRequest::response(QNetworkReply * const reply) const
{
    return new GetPersonTrackingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetPersonTrackingRequestPrivate
 *
 * @brief  Private implementation for GetPersonTrackingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPersonTrackingRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public GetPersonTrackingRequest instance.
 */
GetPersonTrackingRequestPrivate::GetPersonTrackingRequestPrivate(
    const RekognitionRequest::Action action, GetPersonTrackingRequest * const q)
    : GetPersonTrackingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetPersonTrackingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetPersonTrackingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetPersonTrackingRequest instance.
 */
GetPersonTrackingRequestPrivate::GetPersonTrackingRequestPrivate(
    const GetPersonTrackingRequestPrivate &other, GetPersonTrackingRequest * const q)
    : GetPersonTrackingPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
