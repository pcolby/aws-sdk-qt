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

#include "getlabeldetectionrequest.h"
#include "getlabeldetectionrequest_p.h"
#include "getlabeldetectionresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/**
 * @class  GetLabelDetectionRequest
 *
 * @brief  Implements Rekognition GetLabelDetection requests.
 *
 * @see    RekognitionClient::getLabelDetection
 */

/**
 * @brief  Constructs a new GetLabelDetectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetLabelDetectionRequest::GetLabelDetectionRequest(const GetLabelDetectionRequest &other)
    : RekognitionRequest(new GetLabelDetectionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetLabelDetectionRequest object.
 */
GetLabelDetectionRequest::GetLabelDetectionRequest()
    : RekognitionRequest(new GetLabelDetectionRequestPrivate(RekognitionRequest::GetLabelDetectionAction, this))
{

}

bool GetLabelDetectionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetLabelDetectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetLabelDetectionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLabelDetectionRequest::response(QNetworkReply * const reply) const
{
    return new GetLabelDetectionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetLabelDetectionRequestPrivate
 *
 * @brief  Private implementation for GetLabelDetectionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLabelDetectionRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public GetLabelDetectionRequest instance.
 */
GetLabelDetectionRequestPrivate::GetLabelDetectionRequestPrivate(
    const RekognitionRequest::Action action, GetLabelDetectionRequest * const q)
    : GetLabelDetectionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetLabelDetectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetLabelDetectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetLabelDetectionRequest instance.
 */
GetLabelDetectionRequestPrivate::GetLabelDetectionRequestPrivate(
    const GetLabelDetectionRequestPrivate &other, GetLabelDetectionRequest * const q)
    : GetLabelDetectionPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
