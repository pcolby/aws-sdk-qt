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

#include "liststatemachinesrequest.h"
#include "liststatemachinesrequest_p.h"
#include "liststatemachinesresponse.h"
#include "sfnrequest_p.h"

namespace QtAws {
namespace SFN {

/**
 * @class  ListStateMachinesRequest
 *
 * @brief  Implements SFN ListStateMachines requests.
 *
 * @see    SFNClient::listStateMachines
 */

/**
 * @brief  Constructs a new ListStateMachinesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListStateMachinesRequest::ListStateMachinesRequest(const ListStateMachinesRequest &other)
    : SFNRequest(new ListStateMachinesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListStateMachinesRequest object.
 */
ListStateMachinesRequest::ListStateMachinesRequest()
    : SFNRequest(new ListStateMachinesRequestPrivate(SFNRequest::ListStateMachinesAction, this))
{

}

bool ListStateMachinesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListStateMachinesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListStateMachinesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SFNClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStateMachinesRequest::response(QNetworkReply * const reply) const
{
    return new ListStateMachinesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListStateMachinesRequestPrivate
 *
 * @brief  Private implementation for ListStateMachinesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListStateMachinesRequestPrivate object.
 *
 * @param  action  SFN action being performed.
 * @param  q       Pointer to this object's public ListStateMachinesRequest instance.
 */
ListStateMachinesRequestPrivate::ListStateMachinesRequestPrivate(
    const SFNRequest::Action action, ListStateMachinesRequest * const q)
    : SFNRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListStateMachinesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListStateMachinesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListStateMachinesRequest instance.
 */
ListStateMachinesRequestPrivate::ListStateMachinesRequestPrivate(
    const ListStateMachinesRequestPrivate &other, ListStateMachinesRequest * const q)
    : SFNRequestPrivate(other, q)
{

}

} // namespace SFN
} // namespace QtAws
