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

#include "getfacesearchrequest.h"
#include "getfacesearchrequest_p.h"
#include "getfacesearchresponse.h"
#include "rekognitionrequest_p.h"

namespace AWS {
namespace Rekognition {

/**
 * @class  GetFaceSearchRequest
 *
 * @brief  Implements Rekognition GetFaceSearch requests.
 *
 * @see    RekognitionClient::getFaceSearch
 */

/**
 * @brief  Constructs a new GetFaceSearchResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetFaceSearchResponse::GetFaceSearchResponse(

/**
 * @brief  Constructs a new GetFaceSearchRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetFaceSearchRequest::GetFaceSearchRequest(const GetFaceSearchRequest &other)
    : RekognitionRequest(new GetFaceSearchRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetFaceSearchRequest object.
 */
GetFaceSearchRequest::GetFaceSearchRequest()
    : RekognitionRequest(new GetFaceSearchRequestPrivate(RekognitionRequest::GetFaceSearchAction, this))
{

}

bool GetFaceSearchRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetFaceSearchResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetFaceSearchResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
AwsAbstractResponse * GetFaceSearchRequest::response(QNetworkReply * const reply) const
{
    return new GetFaceSearchResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetFaceSearchRequestPrivate
 *
 * @brief  Private implementation for GetFaceSearchRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetFaceSearchRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public GetFaceSearchRequest instance.
 */
GetFaceSearchRequestPrivate::GetFaceSearchRequestPrivate(
    const RekognitionRequest::Action action, GetFaceSearchRequest * const q)
    : GetFaceSearchPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetFaceSearchRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetFaceSearchRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetFaceSearchRequest instance.
 */
GetFaceSearchRequestPrivate::GetFaceSearchRequestPrivate(
    const GetFaceSearchRequestPrivate &other, GetFaceSearchRequest * const q)
    : GetFaceSearchPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace AWS
