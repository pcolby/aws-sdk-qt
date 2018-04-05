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

#include "deleteconfigurationaggregatorrequest.h"
#include "deleteconfigurationaggregatorrequest_p.h"
#include "deleteconfigurationaggregatorresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/**
 * @class  DeleteConfigurationAggregatorRequest
 *
 * @brief  Implements ConfigService DeleteConfigurationAggregator requests.
 *
 * @see    ConfigServiceClient::deleteConfigurationAggregator
 */

/**
 * @brief  Constructs a new DeleteConfigurationAggregatorRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteConfigurationAggregatorRequest::DeleteConfigurationAggregatorRequest(const DeleteConfigurationAggregatorRequest &other)
    : ConfigServiceRequest(new DeleteConfigurationAggregatorRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteConfigurationAggregatorRequest object.
 */
DeleteConfigurationAggregatorRequest::DeleteConfigurationAggregatorRequest()
    : ConfigServiceRequest(new DeleteConfigurationAggregatorRequestPrivate(ConfigServiceRequest::DeleteConfigurationAggregatorAction, this))
{

}

bool DeleteConfigurationAggregatorRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteConfigurationAggregatorResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteConfigurationAggregatorResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteConfigurationAggregatorRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConfigurationAggregatorResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteConfigurationAggregatorRequestPrivate
 *
 * @brief  Private implementation for DeleteConfigurationAggregatorRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConfigurationAggregatorRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public DeleteConfigurationAggregatorRequest instance.
 */
DeleteConfigurationAggregatorRequestPrivate::DeleteConfigurationAggregatorRequestPrivate(
    const ConfigServiceRequest::Action action, DeleteConfigurationAggregatorRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConfigurationAggregatorRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteConfigurationAggregatorRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteConfigurationAggregatorRequest instance.
 */
DeleteConfigurationAggregatorRequestPrivate::DeleteConfigurationAggregatorRequestPrivate(
    const DeleteConfigurationAggregatorRequestPrivate &other, DeleteConfigurationAggregatorRequest * const q)
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
