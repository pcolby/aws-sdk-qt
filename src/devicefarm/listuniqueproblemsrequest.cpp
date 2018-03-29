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

#include "listuniqueproblemsrequest.h"
#include "listuniqueproblemsrequest_p.h"
#include "listuniqueproblemsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  ListUniqueProblemsRequest
 *
 * @brief  Implements DeviceFarm ListUniqueProblems requests.
 *
 * @see    DeviceFarmClient::listUniqueProblems
 */

/**
 * @brief  Constructs a new ListUniqueProblemsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListUniqueProblemsRequest::ListUniqueProblemsRequest(const ListUniqueProblemsRequest &other)
    : DeviceFarmRequest(new ListUniqueProblemsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListUniqueProblemsRequest object.
 */
ListUniqueProblemsRequest::ListUniqueProblemsRequest()
    : DeviceFarmRequest(new ListUniqueProblemsRequestPrivate(DeviceFarmRequest::ListUniqueProblemsAction, this))
{

}

bool ListUniqueProblemsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListUniqueProblemsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListUniqueProblemsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
AwsAbstractResponse * ListUniqueProblemsRequest::response(QNetworkReply * const reply) const
{
    return new ListUniqueProblemsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListUniqueProblemsRequestPrivate
 *
 * @brief  Private implementation for ListUniqueProblemsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListUniqueProblemsRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public ListUniqueProblemsRequest instance.
 */
ListUniqueProblemsRequestPrivate::ListUniqueProblemsRequestPrivate(
    const DeviceFarmRequest::Action action, ListUniqueProblemsRequest * const q)
    : ListUniqueProblemsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListUniqueProblemsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListUniqueProblemsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListUniqueProblemsRequest instance.
 */
ListUniqueProblemsRequestPrivate::ListUniqueProblemsRequestPrivate(
    const ListUniqueProblemsRequestPrivate &other, ListUniqueProblemsRequest * const q)
    : ListUniqueProblemsPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
