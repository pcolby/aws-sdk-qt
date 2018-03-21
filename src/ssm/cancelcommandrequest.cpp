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

#include "cancelcommandrequest.h"
#include "cancelcommandrequest_p.h"
#include "cancelcommandresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  CancelCommandRequest
 *
 * @brief  Implements SSM CancelCommand requests.
 *
 * @see    SSMClient::cancelCommand
 */

/**
 * @brief  Constructs a new CancelCommandResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelCommandResponse::CancelCommandResponse(

/**
 * @brief  Constructs a new CancelCommandRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CancelCommandRequest::CancelCommandRequest(const CancelCommandRequest &other)
    : SSMRequest(new CancelCommandRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CancelCommandRequest object.
 */
CancelCommandRequest::CancelCommandRequest()
    : SSMRequest(new CancelCommandRequestPrivate(SSMRequest::CancelCommandAction, this))
{

}

bool CancelCommandRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CancelCommandResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CancelCommandResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * CancelCommandRequest::response(QNetworkReply * const reply) const
{
    return new CancelCommandResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CancelCommandRequestPrivate
 *
 * @brief  Private implementation for CancelCommandRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelCommandRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public CancelCommandRequest instance.
 */
CancelCommandRequestPrivate::CancelCommandRequestPrivate(
    const SSMRequest::Action action, CancelCommandRequest * const q)
    : CancelCommandPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CancelCommandRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CancelCommandRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CancelCommandRequest instance.
 */
CancelCommandRequestPrivate::CancelCommandRequestPrivate(
    const CancelCommandRequestPrivate &other, CancelCommandRequest * const q)
    : CancelCommandPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
