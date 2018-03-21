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

#include "deletehitrequest.h"
#include "deletehitrequest_p.h"
#include "deletehitresponse.h"
#include "mturkrequest_p.h"

namespace AWS {
namespace MTurk {

/**
 * @class  DeleteHITRequest
 *
 * @brief  Implements MTurk DeleteHIT requests.
 *
 * @see    MTurkClient::deleteHIT
 */

/**
 * @brief  Constructs a new DeleteHITRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteHITRequest::DeleteHITRequest(const DeleteHITRequest &other)
    : MTurkRequest(new DeleteHITRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteHITRequest object.
 */
DeleteHITRequest::DeleteHITRequest()
    : MTurkRequest(new DeleteHITRequestPrivate(MTurkRequest::DeleteHITAction, this))
{

}

bool DeleteHITRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteHITResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteHITResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * DeleteHITRequest::response(QNetworkReply * const reply) const
{
    return new DeleteHITResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteHITRequestPrivate
 *
 * @brief  Private implementation for DeleteHITRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteHITRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public DeleteHITRequest instance.
 */
DeleteHITRequestPrivate::DeleteHITRequestPrivate(
    const MTurkRequest::Action action, DeleteHITRequest * const q)
    : DeleteHITPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteHITRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteHITRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteHITRequest instance.
 */
DeleteHITRequestPrivate::DeleteHITRequestPrivate(
    const DeleteHITRequestPrivate &other, DeleteHITRequest * const q)
    : DeleteHITPrivate(other, q)
{

}

} // namespace MTurk
} // namespace AWS
