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

#include "listpolicyprincipalsrequest.h"
#include "listpolicyprincipalsrequest_p.h"
#include "listpolicyprincipalsresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  ListPolicyPrincipalsRequest
 *
 * @brief  Implements IoT ListPolicyPrincipals requests.
 *
 * @see    IoTClient::listPolicyPrincipals
 */

/**
 * @brief  Constructs a new ListPolicyPrincipalsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListPolicyPrincipalsRequest::ListPolicyPrincipalsRequest(const ListPolicyPrincipalsRequest &other)
    : IoTRequest(new ListPolicyPrincipalsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListPolicyPrincipalsRequest object.
 */
ListPolicyPrincipalsRequest::ListPolicyPrincipalsRequest()
    : IoTRequest(new ListPolicyPrincipalsRequestPrivate(IoTRequest::ListPolicyPrincipalsAction, this))
{

}

bool ListPolicyPrincipalsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListPolicyPrincipalsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListPolicyPrincipalsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * ListPolicyPrincipalsRequest::response(QNetworkReply * const reply) const
{
    return new ListPolicyPrincipalsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListPolicyPrincipalsRequestPrivate
 *
 * @brief  Private implementation for ListPolicyPrincipalsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPolicyPrincipalsRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListPolicyPrincipalsRequest instance.
 */
ListPolicyPrincipalsRequestPrivate::ListPolicyPrincipalsRequestPrivate(
    const IoTRequest::Action action, ListPolicyPrincipalsRequest * const q)
    : ListPolicyPrincipalsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListPolicyPrincipalsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListPolicyPrincipalsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListPolicyPrincipalsRequest instance.
 */
ListPolicyPrincipalsRequestPrivate::ListPolicyPrincipalsRequestPrivate(
    const ListPolicyPrincipalsRequestPrivate &other, ListPolicyPrincipalsRequest * const q)
    : ListPolicyPrincipalsPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
