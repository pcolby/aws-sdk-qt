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

#include "detectentitiesrequest.h"
#include "detectentitiesrequest_p.h"
#include "detectentitiesresponse.h"
#include "comprehendrequest_p.h"

namespace AWS {
namespace Comprehend {

/**
 * @class  DetectEntitiesRequest
 *
 * @brief  Implements Comprehend DetectEntities requests.
 *
 * @see    ComprehendClient::detectEntities
 */

/**
 * @brief  Constructs a new DetectEntitiesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetectEntitiesRequest::DetectEntitiesRequest(const DetectEntitiesRequest &other)
    : ComprehendRequest(new DetectEntitiesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DetectEntitiesRequest object.
 */
DetectEntitiesRequest::DetectEntitiesRequest()
    : ComprehendRequest(new DetectEntitiesRequestPrivate(ComprehendRequest::DetectEntitiesAction, this))
{

}

bool DetectEntitiesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DetectEntitiesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetectEntitiesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ComprehendClient::send
 */
AwsAbstractResponse * DetectEntitiesRequest::response(QNetworkReply * const reply) const
{
    return new DetectEntitiesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DetectEntitiesRequestPrivate
 *
 * @brief  Private implementation for DetectEntitiesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetectEntitiesRequestPrivate object.
 *
 * @param  action  Comprehend action being performed.
 * @param  q       Pointer to this object's public DetectEntitiesRequest instance.
 */
DetectEntitiesRequestPrivate::DetectEntitiesRequestPrivate(
    const ComprehendRequest::Action action, DetectEntitiesRequest * const q)
    : DetectEntitiesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DetectEntitiesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetectEntitiesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetectEntitiesRequest instance.
 */
DetectEntitiesRequestPrivate::DetectEntitiesRequestPrivate(
    const DetectEntitiesRequestPrivate &other, DetectEntitiesRequest * const q)
    : DetectEntitiesPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace AWS
