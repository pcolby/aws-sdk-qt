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

#include "updatehittypeofhitrequest.h"
#include "updatehittypeofhitrequest_p.h"
#include "updatehittypeofhitresponse.h"
#include "mturkrequest_p.h"

namespace AWS {
namespace MTurk {

/**
 * @class  UpdateHITTypeOfHITRequest
 *
 * @brief  Implements MTurk UpdateHITTypeOfHIT requests.
 *
 * @see    MTurkClient::updateHITTypeOfHIT
 */

/**
 * @brief  Constructs a new UpdateHITTypeOfHITRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateHITTypeOfHITRequest::UpdateHITTypeOfHITRequest(const UpdateHITTypeOfHITRequest &other)
    : MTurkRequest(new UpdateHITTypeOfHITRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateHITTypeOfHITRequest object.
 */
UpdateHITTypeOfHITRequest::UpdateHITTypeOfHITRequest()
    : MTurkRequest(new UpdateHITTypeOfHITRequestPrivate(MTurkRequest::UpdateHITTypeOfHITAction, this))
{

}

bool UpdateHITTypeOfHITRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateHITTypeOfHITResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateHITTypeOfHITResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * UpdateHITTypeOfHITRequest::response(QNetworkReply * const reply) const
{
    return new UpdateHITTypeOfHITResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateHITTypeOfHITRequestPrivate
 *
 * @brief  Private implementation for UpdateHITTypeOfHITRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateHITTypeOfHITRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public UpdateHITTypeOfHITRequest instance.
 */
UpdateHITTypeOfHITRequestPrivate::UpdateHITTypeOfHITRequestPrivate(
    const MTurkRequest::Action action, UpdateHITTypeOfHITRequest * const q)
    : UpdateHITTypeOfHITPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateHITTypeOfHITRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateHITTypeOfHITRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateHITTypeOfHITRequest instance.
 */
UpdateHITTypeOfHITRequestPrivate::UpdateHITTypeOfHITRequestPrivate(
    const UpdateHITTypeOfHITRequestPrivate &other, UpdateHITTypeOfHITRequest * const q)
    : UpdateHITTypeOfHITPrivate(other, q)
{

}

} // namespace MTurk
} // namespace AWS
