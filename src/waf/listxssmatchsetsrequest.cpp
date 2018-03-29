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

#include "listxssmatchsetsrequest.h"
#include "listxssmatchsetsrequest_p.h"
#include "listxssmatchsetsresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/**
 * @class  ListXssMatchSetsRequest
 *
 * @brief  Implements WAF ListXssMatchSets requests.
 *
 * @see    WAFClient::listXssMatchSets
 */

/**
 * @brief  Constructs a new ListXssMatchSetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListXssMatchSetsRequest::ListXssMatchSetsRequest(const ListXssMatchSetsRequest &other)
    : WAFRequest(new ListXssMatchSetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListXssMatchSetsRequest object.
 */
ListXssMatchSetsRequest::ListXssMatchSetsRequest()
    : WAFRequest(new ListXssMatchSetsRequestPrivate(WAFRequest::ListXssMatchSetsAction, this))
{

}

bool ListXssMatchSetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListXssMatchSetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListXssMatchSetsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFClient::send
 */
QtAws::Core::AwsAbstractResponse * ListXssMatchSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListXssMatchSetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListXssMatchSetsRequestPrivate
 *
 * @brief  Private implementation for ListXssMatchSetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListXssMatchSetsRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public ListXssMatchSetsRequest instance.
 */
ListXssMatchSetsRequestPrivate::ListXssMatchSetsRequestPrivate(
    const WAFRequest::Action action, ListXssMatchSetsRequest * const q)
    : ListXssMatchSetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListXssMatchSetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListXssMatchSetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListXssMatchSetsRequest instance.
 */
ListXssMatchSetsRequestPrivate::ListXssMatchSetsRequestPrivate(
    const ListXssMatchSetsRequestPrivate &other, ListXssMatchSetsRequest * const q)
    : ListXssMatchSetsPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
