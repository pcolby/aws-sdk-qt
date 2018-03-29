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

#include "listfindingsrequest.h"
#include "listfindingsrequest_p.h"
#include "listfindingsresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/**
 * @class  ListFindingsRequest
 *
 * @brief  Implements GuardDuty ListFindings requests.
 *
 * @see    GuardDutyClient::listFindings
 */

/**
 * @brief  Constructs a new ListFindingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListFindingsRequest::ListFindingsRequest(const ListFindingsRequest &other)
    : GuardDutyRequest(new ListFindingsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListFindingsRequest object.
 */
ListFindingsRequest::ListFindingsRequest()
    : GuardDutyRequest(new ListFindingsRequestPrivate(GuardDutyRequest::ListFindingsAction, this))
{

}

bool ListFindingsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListFindingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListFindingsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
AwsAbstractResponse * ListFindingsRequest::response(QNetworkReply * const reply) const
{
    return new ListFindingsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListFindingsRequestPrivate
 *
 * @brief  Private implementation for ListFindingsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListFindingsRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public ListFindingsRequest instance.
 */
ListFindingsRequestPrivate::ListFindingsRequestPrivate(
    const GuardDutyRequest::Action action, ListFindingsRequest * const q)
    : ListFindingsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListFindingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListFindingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListFindingsRequest instance.
 */
ListFindingsRequestPrivate::ListFindingsRequestPrivate(
    const ListFindingsRequestPrivate &other, ListFindingsRequest * const q)
    : ListFindingsPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
