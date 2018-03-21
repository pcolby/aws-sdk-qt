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

#include "disableloggingrequest.h"
#include "disableloggingrequest_p.h"
#include "disableloggingresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  DisableLoggingRequest
 *
 * @brief  Implements Redshift DisableLogging requests.
 *
 * @see    RedshiftClient::disableLogging
 */

/**
 * @brief  Constructs a new DisableLoggingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisableLoggingResponse::DisableLoggingResponse(

/**
 * @brief  Constructs a new DisableLoggingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisableLoggingRequest::DisableLoggingRequest(const DisableLoggingRequest &other)
    : RedshiftRequest(new DisableLoggingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisableLoggingRequest object.
 */
DisableLoggingRequest::DisableLoggingRequest()
    : RedshiftRequest(new DisableLoggingRequestPrivate(RedshiftRequest::DisableLoggingAction, this))
{

}

bool DisableLoggingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisableLoggingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisableLoggingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * DisableLoggingRequest::response(QNetworkReply * const reply) const
{
    return new DisableLoggingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisableLoggingRequestPrivate
 *
 * @brief  Private implementation for DisableLoggingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableLoggingRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DisableLoggingRequest instance.
 */
DisableLoggingRequestPrivate::DisableLoggingRequestPrivate(
    const RedshiftRequest::Action action, DisableLoggingRequest * const q)
    : DisableLoggingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisableLoggingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisableLoggingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisableLoggingRequest instance.
 */
DisableLoggingRequestPrivate::DisableLoggingRequestPrivate(
    const DisableLoggingRequestPrivate &other, DisableLoggingRequest * const q)
    : DisableLoggingPrivate(other, q)
{

}
