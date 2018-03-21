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

#include "setvisibletoallusersrequest.h"
#include "setvisibletoallusersrequest_p.h"
#include "setvisibletoallusersresponse.h"
#include "emrrequest_p.h"

namespace AWS {
namespace EMR {

/**
 * @class  SetVisibleToAllUsersRequest
 *
 * @brief  Implements EMR SetVisibleToAllUsers requests.
 *
 * @see    EMRClient::setVisibleToAllUsers
 */

/**
 * @brief  Constructs a new SetVisibleToAllUsersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetVisibleToAllUsersResponse::SetVisibleToAllUsersResponse(

/**
 * @brief  Constructs a new SetVisibleToAllUsersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetVisibleToAllUsersRequest::SetVisibleToAllUsersRequest(const SetVisibleToAllUsersRequest &other)
    : EMRRequest(new SetVisibleToAllUsersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetVisibleToAllUsersRequest object.
 */
SetVisibleToAllUsersRequest::SetVisibleToAllUsersRequest()
    : EMRRequest(new SetVisibleToAllUsersRequestPrivate(EMRRequest::SetVisibleToAllUsersAction, this))
{

}

bool SetVisibleToAllUsersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetVisibleToAllUsersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetVisibleToAllUsersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EMRClient::send
 */
AwsAbstractResponse * SetVisibleToAllUsersRequest::response(QNetworkReply * const reply) const
{
    return new SetVisibleToAllUsersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetVisibleToAllUsersRequestPrivate
 *
 * @brief  Private implementation for SetVisibleToAllUsersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetVisibleToAllUsersRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public SetVisibleToAllUsersRequest instance.
 */
SetVisibleToAllUsersRequestPrivate::SetVisibleToAllUsersRequestPrivate(
    const EMRRequest::Action action, SetVisibleToAllUsersRequest * const q)
    : SetVisibleToAllUsersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetVisibleToAllUsersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetVisibleToAllUsersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetVisibleToAllUsersRequest instance.
 */
SetVisibleToAllUsersRequestPrivate::SetVisibleToAllUsersRequestPrivate(
    const SetVisibleToAllUsersRequestPrivate &other, SetVisibleToAllUsersRequest * const q)
    : SetVisibleToAllUsersPrivate(other, q)
{

}
