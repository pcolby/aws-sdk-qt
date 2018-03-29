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

#include "listinstancefleetsrequest.h"
#include "listinstancefleetsrequest_p.h"
#include "listinstancefleetsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/**
 * @class  ListInstanceFleetsRequest
 *
 * @brief  Implements EMR ListInstanceFleets requests.
 *
 * @see    EMRClient::listInstanceFleets
 */

/**
 * @brief  Constructs a new ListInstanceFleetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListInstanceFleetsRequest::ListInstanceFleetsRequest(const ListInstanceFleetsRequest &other)
    : EMRRequest(new ListInstanceFleetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListInstanceFleetsRequest object.
 */
ListInstanceFleetsRequest::ListInstanceFleetsRequest()
    : EMRRequest(new ListInstanceFleetsRequestPrivate(EMRRequest::ListInstanceFleetsAction, this))
{

}

bool ListInstanceFleetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListInstanceFleetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListInstanceFleetsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EMRClient::send
 */
AwsAbstractResponse * ListInstanceFleetsRequest::response(QNetworkReply * const reply) const
{
    return new ListInstanceFleetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListInstanceFleetsRequestPrivate
 *
 * @brief  Private implementation for ListInstanceFleetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListInstanceFleetsRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public ListInstanceFleetsRequest instance.
 */
ListInstanceFleetsRequestPrivate::ListInstanceFleetsRequestPrivate(
    const EMRRequest::Action action, ListInstanceFleetsRequest * const q)
    : ListInstanceFleetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListInstanceFleetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListInstanceFleetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListInstanceFleetsRequest instance.
 */
ListInstanceFleetsRequestPrivate::ListInstanceFleetsRequestPrivate(
    const ListInstanceFleetsRequestPrivate &other, ListInstanceFleetsRequest * const q)
    : ListInstanceFleetsPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
