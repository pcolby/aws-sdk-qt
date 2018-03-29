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

#include "createmembersrequest.h"
#include "createmembersrequest_p.h"
#include "createmembersresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/**
 * @class  CreateMembersRequest
 *
 * @brief  Implements GuardDuty CreateMembers requests.
 *
 * @see    GuardDutyClient::createMembers
 */

/**
 * @brief  Constructs a new CreateMembersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateMembersRequest::CreateMembersRequest(const CreateMembersRequest &other)
    : GuardDutyRequest(new CreateMembersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateMembersRequest object.
 */
CreateMembersRequest::CreateMembersRequest()
    : GuardDutyRequest(new CreateMembersRequestPrivate(GuardDutyRequest::CreateMembersAction, this))
{

}

bool CreateMembersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateMembersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateMembersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMembersRequest::response(QNetworkReply * const reply) const
{
    return new CreateMembersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateMembersRequestPrivate
 *
 * @brief  Private implementation for CreateMembersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateMembersRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public CreateMembersRequest instance.
 */
CreateMembersRequestPrivate::CreateMembersRequestPrivate(
    const GuardDutyRequest::Action action, CreateMembersRequest * const q)
    : CreateMembersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateMembersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateMembersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateMembersRequest instance.
 */
CreateMembersRequestPrivate::CreateMembersRequestPrivate(
    const CreateMembersRequestPrivate &other, CreateMembersRequest * const q)
    : CreateMembersPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
