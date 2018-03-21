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

#include "detectlabelsrequest.h"
#include "detectlabelsrequest_p.h"
#include "detectlabelsresponse.h"
#include "rekognitionrequest_p.h"

namespace AWS {
namespace Rekognition {

/**
 * @class  DetectLabelsRequest
 *
 * @brief  Implements Rekognition DetectLabels requests.
 *
 * @see    RekognitionClient::detectLabels
 */

/**
 * @brief  Constructs a new DetectLabelsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetectLabelsResponse::DetectLabelsResponse(

/**
 * @brief  Constructs a new DetectLabelsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetectLabelsRequest::DetectLabelsRequest(const DetectLabelsRequest &other)
    : RekognitionRequest(new DetectLabelsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DetectLabelsRequest object.
 */
DetectLabelsRequest::DetectLabelsRequest()
    : RekognitionRequest(new DetectLabelsRequestPrivate(RekognitionRequest::DetectLabelsAction, this))
{

}

bool DetectLabelsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DetectLabelsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetectLabelsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
AwsAbstractResponse * DetectLabelsRequest::response(QNetworkReply * const reply) const
{
    return new DetectLabelsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DetectLabelsRequestPrivate
 *
 * @brief  Private implementation for DetectLabelsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetectLabelsRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public DetectLabelsRequest instance.
 */
DetectLabelsRequestPrivate::DetectLabelsRequestPrivate(
    const RekognitionRequest::Action action, DetectLabelsRequest * const q)
    : DetectLabelsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DetectLabelsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetectLabelsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetectLabelsRequest instance.
 */
DetectLabelsRequestPrivate::DetectLabelsRequestPrivate(
    const DetectLabelsRequestPrivate &other, DetectLabelsRequest * const q)
    : DetectLabelsPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace AWS
