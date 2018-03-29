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

#include "deletehealthcheckrequest.h"
#include "deletehealthcheckrequest_p.h"
#include "deletehealthcheckresponse.h"
#include "route53request_p.h"

namespace AWS {
namespace Route53 {

/**
 * @class  DeleteHealthCheckRequest
 *
 * @brief  Implements Route53 DeleteHealthCheck requests.
 *
 * @see    Route53Client::deleteHealthCheck
 */

/**
 * @brief  Constructs a new DeleteHealthCheckRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteHealthCheckRequest::DeleteHealthCheckRequest(const DeleteHealthCheckRequest &other)
    : Route53Request(new DeleteHealthCheckRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteHealthCheckRequest object.
 */
DeleteHealthCheckRequest::DeleteHealthCheckRequest()
    : Route53Request(new DeleteHealthCheckRequestPrivate(Route53Request::DeleteHealthCheckAction, this))
{

}

bool DeleteHealthCheckRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteHealthCheckResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteHealthCheckResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * DeleteHealthCheckRequest::response(QNetworkReply * const reply) const
{
    return new DeleteHealthCheckResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteHealthCheckRequestPrivate
 *
 * @brief  Private implementation for DeleteHealthCheckRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteHealthCheckRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public DeleteHealthCheckRequest instance.
 */
DeleteHealthCheckRequestPrivate::DeleteHealthCheckRequestPrivate(
    const Route53Request::Action action, DeleteHealthCheckRequest * const q)
    : DeleteHealthCheckPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteHealthCheckRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteHealthCheckRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteHealthCheckRequest instance.
 */
DeleteHealthCheckRequestPrivate::DeleteHealthCheckRequestPrivate(
    const DeleteHealthCheckRequestPrivate &other, DeleteHealthCheckRequest * const q)
    : DeleteHealthCheckPrivate(other, q)
{

}

} // namespace Route53
} // namespace AWS
