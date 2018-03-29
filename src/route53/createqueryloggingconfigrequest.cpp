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

#include "createqueryloggingconfigrequest.h"
#include "createqueryloggingconfigrequest_p.h"
#include "createqueryloggingconfigresponse.h"
#include "route53request_p.h"

namespace AWS {
namespace Route53 {

/**
 * @class  CreateQueryLoggingConfigRequest
 *
 * @brief  Implements Route53 CreateQueryLoggingConfig requests.
 *
 * @see    Route53Client::createQueryLoggingConfig
 */

/**
 * @brief  Constructs a new CreateQueryLoggingConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateQueryLoggingConfigRequest::CreateQueryLoggingConfigRequest(const CreateQueryLoggingConfigRequest &other)
    : Route53Request(new CreateQueryLoggingConfigRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateQueryLoggingConfigRequest object.
 */
CreateQueryLoggingConfigRequest::CreateQueryLoggingConfigRequest()
    : Route53Request(new CreateQueryLoggingConfigRequestPrivate(Route53Request::CreateQueryLoggingConfigAction, this))
{

}

bool CreateQueryLoggingConfigRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateQueryLoggingConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateQueryLoggingConfigResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * CreateQueryLoggingConfigRequest::response(QNetworkReply * const reply) const
{
    return new CreateQueryLoggingConfigResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateQueryLoggingConfigRequestPrivate
 *
 * @brief  Private implementation for CreateQueryLoggingConfigRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateQueryLoggingConfigRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public CreateQueryLoggingConfigRequest instance.
 */
CreateQueryLoggingConfigRequestPrivate::CreateQueryLoggingConfigRequestPrivate(
    const Route53Request::Action action, CreateQueryLoggingConfigRequest * const q)
    : CreateQueryLoggingConfigPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateQueryLoggingConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateQueryLoggingConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateQueryLoggingConfigRequest instance.
 */
CreateQueryLoggingConfigRequestPrivate::CreateQueryLoggingConfigRequestPrivate(
    const CreateQueryLoggingConfigRequestPrivate &other, CreateQueryLoggingConfigRequest * const q)
    : CreateQueryLoggingConfigPrivate(other, q)
{

}

} // namespace Route53
} // namespace AWS
