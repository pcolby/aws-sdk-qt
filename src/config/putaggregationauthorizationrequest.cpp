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

#include "putaggregationauthorizationrequest.h"
#include "putaggregationauthorizationrequest_p.h"
#include "putaggregationauthorizationresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/**
 * @class  PutAggregationAuthorizationRequest
 *
 * @brief  Implements ConfigService PutAggregationAuthorization requests.
 *
 * @see    ConfigServiceClient::putAggregationAuthorization
 */

/**
 * @brief  Constructs a new PutAggregationAuthorizationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutAggregationAuthorizationRequest::PutAggregationAuthorizationRequest(const PutAggregationAuthorizationRequest &other)
    : ConfigServiceRequest(new PutAggregationAuthorizationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutAggregationAuthorizationRequest object.
 */
PutAggregationAuthorizationRequest::PutAggregationAuthorizationRequest()
    : ConfigServiceRequest(new PutAggregationAuthorizationRequestPrivate(ConfigServiceRequest::PutAggregationAuthorizationAction, this))
{

}

bool PutAggregationAuthorizationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutAggregationAuthorizationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutAggregationAuthorizationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * PutAggregationAuthorizationRequest::response(QNetworkReply * const reply) const
{
    return new PutAggregationAuthorizationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutAggregationAuthorizationRequestPrivate
 *
 * @brief  Private implementation for PutAggregationAuthorizationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutAggregationAuthorizationRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public PutAggregationAuthorizationRequest instance.
 */
PutAggregationAuthorizationRequestPrivate::PutAggregationAuthorizationRequestPrivate(
    const ConfigServiceRequest::Action action, PutAggregationAuthorizationRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutAggregationAuthorizationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutAggregationAuthorizationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutAggregationAuthorizationRequest instance.
 */
PutAggregationAuthorizationRequestPrivate::PutAggregationAuthorizationRequestPrivate(
    const PutAggregationAuthorizationRequestPrivate &other, PutAggregationAuthorizationRequest * const q)
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
