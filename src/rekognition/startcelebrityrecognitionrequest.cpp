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

#include "startcelebrityrecognitionrequest.h"
#include "startcelebrityrecognitionrequest_p.h"
#include "startcelebrityrecognitionresponse.h"
#include "rekognitionrequest_p.h"

namespace AWS {
namespace Rekognition {

/**
 * @class  StartCelebrityRecognitionRequest
 *
 * @brief  Implements Rekognition StartCelebrityRecognition requests.
 *
 * @see    RekognitionClient::startCelebrityRecognition
 */

/**
 * @brief  Constructs a new StartCelebrityRecognitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartCelebrityRecognitionRequest::StartCelebrityRecognitionRequest(const StartCelebrityRecognitionRequest &other)
    : RekognitionRequest(new StartCelebrityRecognitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartCelebrityRecognitionRequest object.
 */
StartCelebrityRecognitionRequest::StartCelebrityRecognitionRequest()
    : RekognitionRequest(new StartCelebrityRecognitionRequestPrivate(RekognitionRequest::StartCelebrityRecognitionAction, this))
{

}

bool StartCelebrityRecognitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartCelebrityRecognitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartCelebrityRecognitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
AwsAbstractResponse * StartCelebrityRecognitionRequest::response(QNetworkReply * const reply) const
{
    return new StartCelebrityRecognitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartCelebrityRecognitionRequestPrivate
 *
 * @brief  Private implementation for StartCelebrityRecognitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartCelebrityRecognitionRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public StartCelebrityRecognitionRequest instance.
 */
StartCelebrityRecognitionRequestPrivate::StartCelebrityRecognitionRequestPrivate(
    const RekognitionRequest::Action action, StartCelebrityRecognitionRequest * const q)
    : StartCelebrityRecognitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartCelebrityRecognitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartCelebrityRecognitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartCelebrityRecognitionRequest instance.
 */
StartCelebrityRecognitionRequestPrivate::StartCelebrityRecognitionRequestPrivate(
    const StartCelebrityRecognitionRequestPrivate &other, StartCelebrityRecognitionRequest * const q)
    : StartCelebrityRecognitionPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace AWS
