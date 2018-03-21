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

#include "getcelebrityinforequest.h"
#include "getcelebrityinforequest_p.h"
#include "getcelebrityinforesponse.h"
#include "rekognitionrequest_p.h"

namespace AWS {
namespace Rekognition {

/**
 * @class  GetCelebrityInfoRequest
 *
 * @brief  Implements Rekognition GetCelebrityInfo requests.
 *
 * @see    RekognitionClient::getCelebrityInfo
 */

/**
 * @brief  Constructs a new GetCelebrityInfoResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCelebrityInfoResponse::GetCelebrityInfoResponse(

/**
 * @brief  Constructs a new GetCelebrityInfoRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCelebrityInfoRequest::GetCelebrityInfoRequest(const GetCelebrityInfoRequest &other)
    : RekognitionRequest(new GetCelebrityInfoRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetCelebrityInfoRequest object.
 */
GetCelebrityInfoRequest::GetCelebrityInfoRequest()
    : RekognitionRequest(new GetCelebrityInfoRequestPrivate(RekognitionRequest::GetCelebrityInfoAction, this))
{

}

bool GetCelebrityInfoRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetCelebrityInfoResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCelebrityInfoResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
AwsAbstractResponse * GetCelebrityInfoRequest::response(QNetworkReply * const reply) const
{
    return new GetCelebrityInfoResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetCelebrityInfoRequestPrivate
 *
 * @brief  Private implementation for GetCelebrityInfoRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCelebrityInfoRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public GetCelebrityInfoRequest instance.
 */
GetCelebrityInfoRequestPrivate::GetCelebrityInfoRequestPrivate(
    const RekognitionRequest::Action action, GetCelebrityInfoRequest * const q)
    : GetCelebrityInfoPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetCelebrityInfoRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCelebrityInfoRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCelebrityInfoRequest instance.
 */
GetCelebrityInfoRequestPrivate::GetCelebrityInfoRequestPrivate(
    const GetCelebrityInfoRequestPrivate &other, GetCelebrityInfoRequest * const q)
    : GetCelebrityInfoPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace AWS
