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

#include "listresourcesforwebaclrequest.h"
#include "listresourcesforwebaclrequest_p.h"
#include "listresourcesforwebaclresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  ListResourcesForWebACLRequest
 *
 * @brief  Implements WAFRegional ListResourcesForWebACL requests.
 *
 * @see    WAFRegionalClient::listResourcesForWebACL
 */

/**
 * @brief  Constructs a new ListResourcesForWebACLResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListResourcesForWebACLResponse::ListResourcesForWebACLResponse(

/**
 * @brief  Constructs a new ListResourcesForWebACLRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListResourcesForWebACLRequest::ListResourcesForWebACLRequest(const ListResourcesForWebACLRequest &other)
    : WAFRegionalRequest(new ListResourcesForWebACLRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListResourcesForWebACLRequest object.
 */
ListResourcesForWebACLRequest::ListResourcesForWebACLRequest()
    : WAFRegionalRequest(new ListResourcesForWebACLRequestPrivate(WAFRegionalRequest::ListResourcesForWebACLAction, this))
{

}

bool ListResourcesForWebACLRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListResourcesForWebACLResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListResourcesForWebACLResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * ListResourcesForWebACLRequest::response(QNetworkReply * const reply) const
{
    return new ListResourcesForWebACLResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListResourcesForWebACLRequestPrivate
 *
 * @brief  Private implementation for ListResourcesForWebACLRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListResourcesForWebACLRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public ListResourcesForWebACLRequest instance.
 */
ListResourcesForWebACLRequestPrivate::ListResourcesForWebACLRequestPrivate(
    const WAFRegionalRequest::Action action, ListResourcesForWebACLRequest * const q)
    : ListResourcesForWebACLPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListResourcesForWebACLRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListResourcesForWebACLRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListResourcesForWebACLRequest instance.
 */
ListResourcesForWebACLRequestPrivate::ListResourcesForWebACLRequestPrivate(
    const ListResourcesForWebACLRequestPrivate &other, ListResourcesForWebACLRequest * const q)
    : ListResourcesForWebACLPrivate(other, q)
{

}
