/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletequeryloggingconfigrequest.h"
#include "deletequeryloggingconfigrequest_p.h"
#include "deletequeryloggingconfigresponse.h"
#include "route53request_p.h"

namespace AWS {
namespace Route53 {

/**
 * @class  DeleteQueryLoggingConfigRequest
 *
 * @brief  Implements Route53 DeleteQueryLoggingConfig requests.
 *
 * @see    Route53Client::deleteQueryLoggingConfig
 */

/**
 * @brief  Constructs a new DeleteQueryLoggingConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteQueryLoggingConfigResponse::DeleteQueryLoggingConfigResponse(

/**
 * @brief  Constructs a new DeleteQueryLoggingConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteQueryLoggingConfigRequest::DeleteQueryLoggingConfigRequest(const DeleteQueryLoggingConfigRequest &other)
    : Route53Request(new DeleteQueryLoggingConfigRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteQueryLoggingConfigRequest object.
 */
DeleteQueryLoggingConfigRequest::DeleteQueryLoggingConfigRequest()
    : Route53Request(new DeleteQueryLoggingConfigRequestPrivate(Route53Request::DeleteQueryLoggingConfigAction, this))
{

}

bool DeleteQueryLoggingConfigRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteQueryLoggingConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteQueryLoggingConfigResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * DeleteQueryLoggingConfigRequest::response(QNetworkReply * const reply) const
{
    return new DeleteQueryLoggingConfigResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteQueryLoggingConfigRequestPrivate
 *
 * @brief  Private implementation for DeleteQueryLoggingConfigRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteQueryLoggingConfigRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public DeleteQueryLoggingConfigRequest instance.
 */
DeleteQueryLoggingConfigRequestPrivate::DeleteQueryLoggingConfigRequestPrivate(
    const Route53Request::Action action, DeleteQueryLoggingConfigRequest * const q)
    : DeleteQueryLoggingConfigPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteQueryLoggingConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteQueryLoggingConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteQueryLoggingConfigRequest instance.
 */
DeleteQueryLoggingConfigRequestPrivate::DeleteQueryLoggingConfigRequestPrivate(
    const DeleteQueryLoggingConfigRequestPrivate &other, DeleteQueryLoggingConfigRequest * const q)
    : DeleteQueryLoggingConfigPrivate(other, q)
{

}

} // namespace Route53
} // namespace AWS
