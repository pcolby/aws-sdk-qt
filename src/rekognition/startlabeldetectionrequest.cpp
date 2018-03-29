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

#include "startlabeldetectionrequest.h"
#include "startlabeldetectionrequest_p.h"
#include "startlabeldetectionresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/**
 * @class  StartLabelDetectionRequest
 *
 * @brief  Implements Rekognition StartLabelDetection requests.
 *
 * @see    RekognitionClient::startLabelDetection
 */

/**
 * @brief  Constructs a new StartLabelDetectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartLabelDetectionRequest::StartLabelDetectionRequest(const StartLabelDetectionRequest &other)
    : RekognitionRequest(new StartLabelDetectionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartLabelDetectionRequest object.
 */
StartLabelDetectionRequest::StartLabelDetectionRequest()
    : RekognitionRequest(new StartLabelDetectionRequestPrivate(RekognitionRequest::StartLabelDetectionAction, this))
{

}

bool StartLabelDetectionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartLabelDetectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartLabelDetectionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
QtAws::Core::AwsAbstractResponse * StartLabelDetectionRequest::response(QNetworkReply * const reply) const
{
    return new StartLabelDetectionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartLabelDetectionRequestPrivate
 *
 * @brief  Private implementation for StartLabelDetectionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartLabelDetectionRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public StartLabelDetectionRequest instance.
 */
StartLabelDetectionRequestPrivate::StartLabelDetectionRequestPrivate(
    const RekognitionRequest::Action action, StartLabelDetectionRequest * const q)
    : StartLabelDetectionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartLabelDetectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartLabelDetectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartLabelDetectionRequest instance.
 */
StartLabelDetectionRequestPrivate::StartLabelDetectionRequestPrivate(
    const StartLabelDetectionRequestPrivate &other, StartLabelDetectionRequest * const q)
    : StartLabelDetectionPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
