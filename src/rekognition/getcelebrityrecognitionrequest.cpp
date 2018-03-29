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

#include "getcelebrityrecognitionrequest.h"
#include "getcelebrityrecognitionrequest_p.h"
#include "getcelebrityrecognitionresponse.h"
#include "rekognitionrequest_p.h"

namespace AWS {
namespace Rekognition {

/**
 * @class  GetCelebrityRecognitionRequest
 *
 * @brief  Implements Rekognition GetCelebrityRecognition requests.
 *
 * @see    RekognitionClient::getCelebrityRecognition
 */

/**
 * @brief  Constructs a new GetCelebrityRecognitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCelebrityRecognitionRequest::GetCelebrityRecognitionRequest(const GetCelebrityRecognitionRequest &other)
    : RekognitionRequest(new GetCelebrityRecognitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetCelebrityRecognitionRequest object.
 */
GetCelebrityRecognitionRequest::GetCelebrityRecognitionRequest()
    : RekognitionRequest(new GetCelebrityRecognitionRequestPrivate(RekognitionRequest::GetCelebrityRecognitionAction, this))
{

}

bool GetCelebrityRecognitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetCelebrityRecognitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCelebrityRecognitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
AwsAbstractResponse * GetCelebrityRecognitionRequest::response(QNetworkReply * const reply) const
{
    return new GetCelebrityRecognitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetCelebrityRecognitionRequestPrivate
 *
 * @brief  Private implementation for GetCelebrityRecognitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCelebrityRecognitionRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public GetCelebrityRecognitionRequest instance.
 */
GetCelebrityRecognitionRequestPrivate::GetCelebrityRecognitionRequestPrivate(
    const RekognitionRequest::Action action, GetCelebrityRecognitionRequest * const q)
    : GetCelebrityRecognitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetCelebrityRecognitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCelebrityRecognitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCelebrityRecognitionRequest instance.
 */
GetCelebrityRecognitionRequestPrivate::GetCelebrityRecognitionRequestPrivate(
    const GetCelebrityRecognitionRequestPrivate &other, GetCelebrityRecognitionRequest * const q)
    : GetCelebrityRecognitionPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace AWS
