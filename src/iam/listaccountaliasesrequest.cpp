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

#include "listaccountaliasesrequest.h"
#include "listaccountaliasesrequest_p.h"
#include "listaccountaliasesresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  ListAccountAliasesRequest
 *
 * @brief  Implements IAM ListAccountAliases requests.
 *
 * @see    IAMClient::listAccountAliases
 */

/**
 * @brief  Constructs a new ListAccountAliasesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListAccountAliasesRequest::ListAccountAliasesRequest(const ListAccountAliasesRequest &other)
    : IAMRequest(new ListAccountAliasesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListAccountAliasesRequest object.
 */
ListAccountAliasesRequest::ListAccountAliasesRequest()
    : IAMRequest(new ListAccountAliasesRequestPrivate(IAMRequest::ListAccountAliasesAction, this))
{

}

bool ListAccountAliasesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListAccountAliasesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListAccountAliasesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAccountAliasesRequest::response(QNetworkReply * const reply) const
{
    return new ListAccountAliasesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListAccountAliasesRequestPrivate
 *
 * @brief  Private implementation for ListAccountAliasesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAccountAliasesRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public ListAccountAliasesRequest instance.
 */
ListAccountAliasesRequestPrivate::ListAccountAliasesRequestPrivate(
    const IAMRequest::Action action, ListAccountAliasesRequest * const q)
    : ListAccountAliasesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListAccountAliasesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListAccountAliasesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListAccountAliasesRequest instance.
 */
ListAccountAliasesRequestPrivate::ListAccountAliasesRequestPrivate(
    const ListAccountAliasesRequestPrivate &other, ListAccountAliasesRequest * const q)
    : ListAccountAliasesPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
