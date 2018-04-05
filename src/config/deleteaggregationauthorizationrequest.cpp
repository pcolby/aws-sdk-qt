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

#include "deleteaggregationauthorizationrequest.h"
#include "deleteaggregationauthorizationrequest_p.h"
#include "deleteaggregationauthorizationresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/**
 * @class  DeleteAggregationAuthorizationRequest
 *
 * @brief  Implements ConfigService DeleteAggregationAuthorization requests.
 *
 * @see    ConfigServiceClient::deleteAggregationAuthorization
 */

/**
 * @brief  Constructs a new DeleteAggregationAuthorizationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteAggregationAuthorizationRequest::DeleteAggregationAuthorizationRequest(const DeleteAggregationAuthorizationRequest &other)
    : ConfigServiceRequest(new DeleteAggregationAuthorizationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteAggregationAuthorizationRequest object.
 */
DeleteAggregationAuthorizationRequest::DeleteAggregationAuthorizationRequest()
    : ConfigServiceRequest(new DeleteAggregationAuthorizationRequestPrivate(ConfigServiceRequest::DeleteAggregationAuthorizationAction, this))
{

}

bool DeleteAggregationAuthorizationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteAggregationAuthorizationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteAggregationAuthorizationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAggregationAuthorizationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAggregationAuthorizationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteAggregationAuthorizationRequestPrivate
 *
 * @brief  Private implementation for DeleteAggregationAuthorizationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAggregationAuthorizationRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public DeleteAggregationAuthorizationRequest instance.
 */
DeleteAggregationAuthorizationRequestPrivate::DeleteAggregationAuthorizationRequestPrivate(
    const ConfigServiceRequest::Action action, DeleteAggregationAuthorizationRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAggregationAuthorizationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteAggregationAuthorizationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteAggregationAuthorizationRequest instance.
 */
DeleteAggregationAuthorizationRequestPrivate::DeleteAggregationAuthorizationRequestPrivate(
    const DeleteAggregationAuthorizationRequestPrivate &other, DeleteAggregationAuthorizationRequest * const q)
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
