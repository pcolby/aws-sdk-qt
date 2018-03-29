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

#include "startfacedetectionrequest.h"
#include "startfacedetectionrequest_p.h"
#include "startfacedetectionresponse.h"
#include "rekognitionrequest_p.h"

namespace AWS {
namespace Rekognition {

/**
 * @class  StartFaceDetectionRequest
 *
 * @brief  Implements Rekognition StartFaceDetection requests.
 *
 * @see    RekognitionClient::startFaceDetection
 */

/**
 * @brief  Constructs a new StartFaceDetectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartFaceDetectionRequest::StartFaceDetectionRequest(const StartFaceDetectionRequest &other)
    : RekognitionRequest(new StartFaceDetectionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartFaceDetectionRequest object.
 */
StartFaceDetectionRequest::StartFaceDetectionRequest()
    : RekognitionRequest(new StartFaceDetectionRequestPrivate(RekognitionRequest::StartFaceDetectionAction, this))
{

}

bool StartFaceDetectionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartFaceDetectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartFaceDetectionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
AwsAbstractResponse * StartFaceDetectionRequest::response(QNetworkReply * const reply) const
{
    return new StartFaceDetectionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartFaceDetectionRequestPrivate
 *
 * @brief  Private implementation for StartFaceDetectionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartFaceDetectionRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public StartFaceDetectionRequest instance.
 */
StartFaceDetectionRequestPrivate::StartFaceDetectionRequestPrivate(
    const RekognitionRequest::Action action, StartFaceDetectionRequest * const q)
    : StartFaceDetectionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartFaceDetectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartFaceDetectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartFaceDetectionRequest instance.
 */
StartFaceDetectionRequestPrivate::StartFaceDetectionRequestPrivate(
    const StartFaceDetectionRequestPrivate &other, StartFaceDetectionRequest * const q)
    : StartFaceDetectionPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace AWS
