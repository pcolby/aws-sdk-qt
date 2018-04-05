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

#include "deletependingaggregationrequestrequest.h"
#include "deletependingaggregationrequestrequest_p.h"
#include "deletependingaggregationrequestresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/**
 * @class  DeletePendingAggregationRequestRequest
 *
 * @brief  Implements ConfigService DeletePendingAggregationRequest requests.
 *
 * @see    ConfigServiceClient::deletePendingAggregationRequest
 */

/**
 * @brief  Constructs a new DeletePendingAggregationRequestRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeletePendingAggregationRequestRequest::DeletePendingAggregationRequestRequest(const DeletePendingAggregationRequestRequest &other)
    : ConfigServiceRequest(new DeletePendingAggregationRequestRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeletePendingAggregationRequestRequest object.
 */
DeletePendingAggregationRequestRequest::DeletePendingAggregationRequestRequest()
    : ConfigServiceRequest(new DeletePendingAggregationRequestRequestPrivate(ConfigServiceRequest::DeletePendingAggregationRequestAction, this))
{

}

bool DeletePendingAggregationRequestRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeletePendingAggregationRequestResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeletePendingAggregationRequestResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePendingAggregationRequestRequest::response(QNetworkReply * const reply) const
{
    return new DeletePendingAggregationRequestResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeletePendingAggregationRequestRequestPrivate
 *
 * @brief  Private implementation for DeletePendingAggregationRequestRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeletePendingAggregationRequestRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public DeletePendingAggregationRequestRequest instance.
 */
DeletePendingAggregationRequestRequestPrivate::DeletePendingAggregationRequestRequestPrivate(
    const ConfigServiceRequest::Action action, DeletePendingAggregationRequestRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeletePendingAggregationRequestRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeletePendingAggregationRequestRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeletePendingAggregationRequestRequest instance.
 */
DeletePendingAggregationRequestRequestPrivate::DeletePendingAggregationRequestRequestPrivate(
    const DeletePendingAggregationRequestRequestPrivate &other, DeletePendingAggregationRequestRequest * const q)
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
