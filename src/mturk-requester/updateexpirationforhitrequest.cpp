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

#include "updateexpirationforhitrequest.h"
#include "updateexpirationforhitrequest_p.h"
#include "updateexpirationforhitresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/**
 * @class  UpdateExpirationForHITRequest
 *
 * @brief  Implements MTurk UpdateExpirationForHIT requests.
 *
 * @see    MTurkClient::updateExpirationForHIT
 */

/**
 * @brief  Constructs a new UpdateExpirationForHITRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateExpirationForHITRequest::UpdateExpirationForHITRequest(const UpdateExpirationForHITRequest &other)
    : MTurkRequest(new UpdateExpirationForHITRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateExpirationForHITRequest object.
 */
UpdateExpirationForHITRequest::UpdateExpirationForHITRequest()
    : MTurkRequest(new UpdateExpirationForHITRequestPrivate(MTurkRequest::UpdateExpirationForHITAction, this))
{

}

bool UpdateExpirationForHITRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateExpirationForHITResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateExpirationForHITResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * UpdateExpirationForHITRequest::response(QNetworkReply * const reply) const
{
    return new UpdateExpirationForHITResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateExpirationForHITRequestPrivate
 *
 * @brief  Private implementation for UpdateExpirationForHITRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateExpirationForHITRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public UpdateExpirationForHITRequest instance.
 */
UpdateExpirationForHITRequestPrivate::UpdateExpirationForHITRequestPrivate(
    const MTurkRequest::Action action, UpdateExpirationForHITRequest * const q)
    : UpdateExpirationForHITPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateExpirationForHITRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateExpirationForHITRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateExpirationForHITRequest instance.
 */
UpdateExpirationForHITRequestPrivate::UpdateExpirationForHITRequestPrivate(
    const UpdateExpirationForHITRequestPrivate &other, UpdateExpirationForHITRequest * const q)
    : UpdateExpirationForHITPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
