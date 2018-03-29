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

#include "getqueryloggingconfigrequest.h"
#include "getqueryloggingconfigrequest_p.h"
#include "getqueryloggingconfigresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/**
 * @class  GetQueryLoggingConfigRequest
 *
 * @brief  Implements Route53 GetQueryLoggingConfig requests.
 *
 * @see    Route53Client::getQueryLoggingConfig
 */

/**
 * @brief  Constructs a new GetQueryLoggingConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetQueryLoggingConfigRequest::GetQueryLoggingConfigRequest(const GetQueryLoggingConfigRequest &other)
    : Route53Request(new GetQueryLoggingConfigRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetQueryLoggingConfigRequest object.
 */
GetQueryLoggingConfigRequest::GetQueryLoggingConfigRequest()
    : Route53Request(new GetQueryLoggingConfigRequestPrivate(Route53Request::GetQueryLoggingConfigAction, this))
{

}

bool GetQueryLoggingConfigRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetQueryLoggingConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetQueryLoggingConfigResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * GetQueryLoggingConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetQueryLoggingConfigResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetQueryLoggingConfigRequestPrivate
 *
 * @brief  Private implementation for GetQueryLoggingConfigRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetQueryLoggingConfigRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public GetQueryLoggingConfigRequest instance.
 */
GetQueryLoggingConfigRequestPrivate::GetQueryLoggingConfigRequestPrivate(
    const Route53Request::Action action, GetQueryLoggingConfigRequest * const q)
    : GetQueryLoggingConfigPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetQueryLoggingConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetQueryLoggingConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetQueryLoggingConfigRequest instance.
 */
GetQueryLoggingConfigRequestPrivate::GetQueryLoggingConfigRequestPrivate(
    const GetQueryLoggingConfigRequestPrivate &other, GetQueryLoggingConfigRequest * const q)
    : GetQueryLoggingConfigPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
