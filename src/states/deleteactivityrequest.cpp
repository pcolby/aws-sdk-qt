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

#include "deleteactivityrequest.h"
#include "deleteactivityrequest_p.h"
#include "deleteactivityresponse.h"
#include "sfnrequest_p.h"

namespace QtAws {
namespace SFN {

/**
 * @class  DeleteActivityRequest
 *
 * @brief  Implements SFN DeleteActivity requests.
 *
 * @see    SFNClient::deleteActivity
 */

/**
 * @brief  Constructs a new DeleteActivityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteActivityRequest::DeleteActivityRequest(const DeleteActivityRequest &other)
    : SFNRequest(new DeleteActivityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteActivityRequest object.
 */
DeleteActivityRequest::DeleteActivityRequest()
    : SFNRequest(new DeleteActivityRequestPrivate(SFNRequest::DeleteActivityAction, this))
{

}

bool DeleteActivityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteActivityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteActivityResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SFNClient::send
 */
AwsAbstractResponse * DeleteActivityRequest::response(QNetworkReply * const reply) const
{
    return new DeleteActivityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteActivityRequestPrivate
 *
 * @brief  Private implementation for DeleteActivityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteActivityRequestPrivate object.
 *
 * @param  action  SFN action being performed.
 * @param  q       Pointer to this object's public DeleteActivityRequest instance.
 */
DeleteActivityRequestPrivate::DeleteActivityRequestPrivate(
    const SFNRequest::Action action, DeleteActivityRequest * const q)
    : DeleteActivityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteActivityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteActivityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteActivityRequest instance.
 */
DeleteActivityRequestPrivate::DeleteActivityRequestPrivate(
    const DeleteActivityRequestPrivate &other, DeleteActivityRequest * const q)
    : DeleteActivityPrivate(other, q)
{

}

} // namespace SFN
} // namespace QtAws
