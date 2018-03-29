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

#include "listrulespackagesrequest.h"
#include "listrulespackagesrequest_p.h"
#include "listrulespackagesresponse.h"
#include "inspectorrequest_p.h"

namespace AWS {
namespace Inspector {

/**
 * @class  ListRulesPackagesRequest
 *
 * @brief  Implements Inspector ListRulesPackages requests.
 *
 * @see    InspectorClient::listRulesPackages
 */

/**
 * @brief  Constructs a new ListRulesPackagesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListRulesPackagesRequest::ListRulesPackagesRequest(const ListRulesPackagesRequest &other)
    : InspectorRequest(new ListRulesPackagesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListRulesPackagesRequest object.
 */
ListRulesPackagesRequest::ListRulesPackagesRequest()
    : InspectorRequest(new ListRulesPackagesRequestPrivate(InspectorRequest::ListRulesPackagesAction, this))
{

}

bool ListRulesPackagesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListRulesPackagesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListRulesPackagesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  InspectorClient::send
 */
AwsAbstractResponse * ListRulesPackagesRequest::response(QNetworkReply * const reply) const
{
    return new ListRulesPackagesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListRulesPackagesRequestPrivate
 *
 * @brief  Private implementation for ListRulesPackagesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRulesPackagesRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public ListRulesPackagesRequest instance.
 */
ListRulesPackagesRequestPrivate::ListRulesPackagesRequestPrivate(
    const InspectorRequest::Action action, ListRulesPackagesRequest * const q)
    : ListRulesPackagesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListRulesPackagesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListRulesPackagesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListRulesPackagesRequest instance.
 */
ListRulesPackagesRequestPrivate::ListRulesPackagesRequestPrivate(
    const ListRulesPackagesRequestPrivate &other, ListRulesPackagesRequest * const q)
    : ListRulesPackagesPrivate(other, q)
{

}

} // namespace Inspector
} // namespace AWS
