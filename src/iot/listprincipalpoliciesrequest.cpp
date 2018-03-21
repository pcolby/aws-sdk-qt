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

#include "listprincipalpoliciesrequest.h"
#include "listprincipalpoliciesrequest_p.h"
#include "listprincipalpoliciesresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  ListPrincipalPoliciesRequest
 *
 * @brief  Implements IoT ListPrincipalPolicies requests.
 *
 * @see    IoTClient::listPrincipalPolicies
 */

/**
 * @brief  Constructs a new ListPrincipalPoliciesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListPrincipalPoliciesRequest::ListPrincipalPoliciesRequest(const ListPrincipalPoliciesRequest &other)
    : IoTRequest(new ListPrincipalPoliciesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListPrincipalPoliciesRequest object.
 */
ListPrincipalPoliciesRequest::ListPrincipalPoliciesRequest()
    : IoTRequest(new ListPrincipalPoliciesRequestPrivate(IoTRequest::ListPrincipalPoliciesAction, this))
{

}

bool ListPrincipalPoliciesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListPrincipalPoliciesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListPrincipalPoliciesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * ListPrincipalPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListPrincipalPoliciesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListPrincipalPoliciesRequestPrivate
 *
 * @brief  Private implementation for ListPrincipalPoliciesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPrincipalPoliciesRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListPrincipalPoliciesRequest instance.
 */
ListPrincipalPoliciesRequestPrivate::ListPrincipalPoliciesRequestPrivate(
    const IoTRequest::Action action, ListPrincipalPoliciesRequest * const q)
    : ListPrincipalPoliciesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListPrincipalPoliciesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListPrincipalPoliciesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListPrincipalPoliciesRequest instance.
 */
ListPrincipalPoliciesRequestPrivate::ListPrincipalPoliciesRequestPrivate(
    const ListPrincipalPoliciesRequestPrivate &other, ListPrincipalPoliciesRequest * const q)
    : ListPrincipalPoliciesPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
