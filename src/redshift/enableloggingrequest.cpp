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

#include "enableloggingrequest.h"
#include "enableloggingrequest_p.h"
#include "enableloggingresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  EnableLoggingRequest
 *
 * @brief  Implements Redshift EnableLogging requests.
 *
 * @see    RedshiftClient::enableLogging
 */

/**
 * @brief  Constructs a new EnableLoggingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableLoggingResponse::EnableLoggingResponse(

/**
 * @brief  Constructs a new EnableLoggingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnableLoggingRequest::EnableLoggingRequest(const EnableLoggingRequest &other)
    : RedshiftRequest(new EnableLoggingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new EnableLoggingRequest object.
 */
EnableLoggingRequest::EnableLoggingRequest()
    : RedshiftRequest(new EnableLoggingRequestPrivate(RedshiftRequest::EnableLoggingAction, this))
{

}

bool EnableLoggingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an EnableLoggingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnableLoggingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * EnableLoggingRequest::response(QNetworkReply * const reply) const
{
    return new EnableLoggingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  EnableLoggingRequestPrivate
 *
 * @brief  Private implementation for EnableLoggingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableLoggingRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public EnableLoggingRequest instance.
 */
EnableLoggingRequestPrivate::EnableLoggingRequestPrivate(
    const RedshiftRequest::Action action, EnableLoggingRequest * const q)
    : EnableLoggingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EnableLoggingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnableLoggingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnableLoggingRequest instance.
 */
EnableLoggingRequestPrivate::EnableLoggingRequestPrivate(
    const EnableLoggingRequestPrivate &other, EnableLoggingRequest * const q)
    : EnableLoggingPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
