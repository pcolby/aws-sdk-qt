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

#include "putconfigurationaggregatorrequest.h"
#include "putconfigurationaggregatorrequest_p.h"
#include "putconfigurationaggregatorresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/**
 * @class  PutConfigurationAggregatorRequest
 *
 * @brief  Implements ConfigService PutConfigurationAggregator requests.
 *
 * @see    ConfigServiceClient::putConfigurationAggregator
 */

/**
 * @brief  Constructs a new PutConfigurationAggregatorRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutConfigurationAggregatorRequest::PutConfigurationAggregatorRequest(const PutConfigurationAggregatorRequest &other)
    : ConfigServiceRequest(new PutConfigurationAggregatorRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutConfigurationAggregatorRequest object.
 */
PutConfigurationAggregatorRequest::PutConfigurationAggregatorRequest()
    : ConfigServiceRequest(new PutConfigurationAggregatorRequestPrivate(ConfigServiceRequest::PutConfigurationAggregatorAction, this))
{

}

bool PutConfigurationAggregatorRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutConfigurationAggregatorResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutConfigurationAggregatorResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * PutConfigurationAggregatorRequest::response(QNetworkReply * const reply) const
{
    return new PutConfigurationAggregatorResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutConfigurationAggregatorRequestPrivate
 *
 * @brief  Private implementation for PutConfigurationAggregatorRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutConfigurationAggregatorRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public PutConfigurationAggregatorRequest instance.
 */
PutConfigurationAggregatorRequestPrivate::PutConfigurationAggregatorRequestPrivate(
    const ConfigServiceRequest::Action action, PutConfigurationAggregatorRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutConfigurationAggregatorRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutConfigurationAggregatorRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutConfigurationAggregatorRequest instance.
 */
PutConfigurationAggregatorRequestPrivate::PutConfigurationAggregatorRequestPrivate(
    const PutConfigurationAggregatorRequestPrivate &other, PutConfigurationAggregatorRequest * const q)
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
