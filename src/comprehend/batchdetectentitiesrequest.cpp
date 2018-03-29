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

#include "batchdetectentitiesrequest.h"
#include "batchdetectentitiesrequest_p.h"
#include "batchdetectentitiesresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/**
 * @class  BatchDetectEntitiesRequest
 *
 * @brief  Implements Comprehend BatchDetectEntities requests.
 *
 * @see    ComprehendClient::batchDetectEntities
 */

/**
 * @brief  Constructs a new BatchDetectEntitiesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchDetectEntitiesRequest::BatchDetectEntitiesRequest(const BatchDetectEntitiesRequest &other)
    : ComprehendRequest(new BatchDetectEntitiesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchDetectEntitiesRequest object.
 */
BatchDetectEntitiesRequest::BatchDetectEntitiesRequest()
    : ComprehendRequest(new BatchDetectEntitiesRequestPrivate(ComprehendRequest::BatchDetectEntitiesAction, this))
{

}

bool BatchDetectEntitiesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchDetectEntitiesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchDetectEntitiesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ComprehendClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDetectEntitiesRequest::response(QNetworkReply * const reply) const
{
    return new BatchDetectEntitiesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchDetectEntitiesRequestPrivate
 *
 * @brief  Private implementation for BatchDetectEntitiesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchDetectEntitiesRequestPrivate object.
 *
 * @param  action  Comprehend action being performed.
 * @param  q       Pointer to this object's public BatchDetectEntitiesRequest instance.
 */
BatchDetectEntitiesRequestPrivate::BatchDetectEntitiesRequestPrivate(
    const ComprehendRequest::Action action, BatchDetectEntitiesRequest * const q)
    : BatchDetectEntitiesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchDetectEntitiesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchDetectEntitiesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchDetectEntitiesRequest instance.
 */
BatchDetectEntitiesRequestPrivate::BatchDetectEntitiesRequestPrivate(
    const BatchDetectEntitiesRequestPrivate &other, BatchDetectEntitiesRequest * const q)
    : BatchDetectEntitiesPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
