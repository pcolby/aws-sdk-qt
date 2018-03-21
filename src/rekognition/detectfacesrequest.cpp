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

#include "detectfacesrequest.h"
#include "detectfacesrequest_p.h"
#include "detectfacesresponse.h"
#include "rekognitionrequest_p.h"

namespace AWS {
namespace Rekognition {

/**
 * @class  DetectFacesRequest
 *
 * @brief  Implements Rekognition DetectFaces requests.
 *
 * @see    RekognitionClient::detectFaces
 */

/**
 * @brief  Constructs a new DetectFacesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetectFacesResponse::DetectFacesResponse(

/**
 * @brief  Constructs a new DetectFacesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetectFacesRequest::DetectFacesRequest(const DetectFacesRequest &other)
    : RekognitionRequest(new DetectFacesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DetectFacesRequest object.
 */
DetectFacesRequest::DetectFacesRequest()
    : RekognitionRequest(new DetectFacesRequestPrivate(RekognitionRequest::DetectFacesAction, this))
{

}

bool DetectFacesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DetectFacesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetectFacesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
AwsAbstractResponse * DetectFacesRequest::response(QNetworkReply * const reply) const
{
    return new DetectFacesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DetectFacesRequestPrivate
 *
 * @brief  Private implementation for DetectFacesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetectFacesRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public DetectFacesRequest instance.
 */
DetectFacesRequestPrivate::DetectFacesRequestPrivate(
    const RekognitionRequest::Action action, DetectFacesRequest * const q)
    : DetectFacesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DetectFacesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetectFacesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetectFacesRequest instance.
 */
DetectFacesRequestPrivate::DetectFacesRequestPrivate(
    const DetectFacesRequestPrivate &other, DetectFacesRequest * const q)
    : DetectFacesPrivate(other, q)
{

}
