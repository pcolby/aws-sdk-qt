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

#include "listpolicyversionsrequest.h"
#include "listpolicyversionsrequest_p.h"
#include "listpolicyversionsresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  ListPolicyVersionsRequest
 *
 * @brief  Implements IoT ListPolicyVersions requests.
 *
 * @see    IoTClient::listPolicyVersions
 */

/**
 * @brief  Constructs a new ListPolicyVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListPolicyVersionsRequest::ListPolicyVersionsRequest(const ListPolicyVersionsRequest &other)
    : IoTRequest(new ListPolicyVersionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListPolicyVersionsRequest object.
 */
ListPolicyVersionsRequest::ListPolicyVersionsRequest()
    : IoTRequest(new ListPolicyVersionsRequestPrivate(IoTRequest::ListPolicyVersionsAction, this))
{

}

bool ListPolicyVersionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListPolicyVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListPolicyVersionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * ListPolicyVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListPolicyVersionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListPolicyVersionsRequestPrivate
 *
 * @brief  Private implementation for ListPolicyVersionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPolicyVersionsRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListPolicyVersionsRequest instance.
 */
ListPolicyVersionsRequestPrivate::ListPolicyVersionsRequestPrivate(
    const IoTRequest::Action action, ListPolicyVersionsRequest * const q)
    : ListPolicyVersionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListPolicyVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListPolicyVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListPolicyVersionsRequest instance.
 */
ListPolicyVersionsRequestPrivate::ListPolicyVersionsRequestPrivate(
    const ListPolicyVersionsRequestPrivate &other, ListPolicyVersionsRequest * const q)
    : ListPolicyVersionsPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
