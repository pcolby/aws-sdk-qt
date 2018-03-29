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

#include "deletefacesrequest.h"
#include "deletefacesrequest_p.h"
#include "deletefacesresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/**
 * @class  DeleteFacesRequest
 *
 * @brief  Implements Rekognition DeleteFaces requests.
 *
 * @see    RekognitionClient::deleteFaces
 */

/**
 * @brief  Constructs a new DeleteFacesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteFacesRequest::DeleteFacesRequest(const DeleteFacesRequest &other)
    : RekognitionRequest(new DeleteFacesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteFacesRequest object.
 */
DeleteFacesRequest::DeleteFacesRequest()
    : RekognitionRequest(new DeleteFacesRequestPrivate(RekognitionRequest::DeleteFacesAction, this))
{

}

bool DeleteFacesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteFacesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteFacesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFacesRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFacesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteFacesRequestPrivate
 *
 * @brief  Private implementation for DeleteFacesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFacesRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public DeleteFacesRequest instance.
 */
DeleteFacesRequestPrivate::DeleteFacesRequestPrivate(
    const RekognitionRequest::Action action, DeleteFacesRequest * const q)
    : DeleteFacesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFacesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteFacesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteFacesRequest instance.
 */
DeleteFacesRequestPrivate::DeleteFacesRequestPrivate(
    const DeleteFacesRequestPrivate &other, DeleteFacesRequest * const q)
    : DeleteFacesPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
