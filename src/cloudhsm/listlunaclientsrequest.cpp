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

#include "listlunaclientsrequest.h"
#include "listlunaclientsrequest_p.h"
#include "listlunaclientsresponse.h"
#include "cloudhsmrequest_p.h"

namespace AWS {
namespace CloudHSM {

/**
 * @class  ListLunaClientsRequest
 *
 * @brief  Implements CloudHSM ListLunaClients requests.
 *
 * @see    CloudHSMClient::listLunaClients
 */

/**
 * @brief  Constructs a new ListLunaClientsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListLunaClientsRequest::ListLunaClientsRequest(const ListLunaClientsRequest &other)
    : CloudHSMRequest(new ListLunaClientsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListLunaClientsRequest object.
 */
ListLunaClientsRequest::ListLunaClientsRequest()
    : CloudHSMRequest(new ListLunaClientsRequestPrivate(CloudHSMRequest::ListLunaClientsAction, this))
{

}

bool ListLunaClientsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListLunaClientsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListLunaClientsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudHSMClient::send
 */
AwsAbstractResponse * ListLunaClientsRequest::response(QNetworkReply * const reply) const
{
    return new ListLunaClientsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListLunaClientsRequestPrivate
 *
 * @brief  Private implementation for ListLunaClientsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListLunaClientsRequestPrivate object.
 *
 * @param  action  CloudHSM action being performed.
 * @param  q       Pointer to this object's public ListLunaClientsRequest instance.
 */
ListLunaClientsRequestPrivate::ListLunaClientsRequestPrivate(
    const CloudHSMRequest::Action action, ListLunaClientsRequest * const q)
    : ListLunaClientsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListLunaClientsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListLunaClientsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListLunaClientsRequest instance.
 */
ListLunaClientsRequestPrivate::ListLunaClientsRequestPrivate(
    const ListLunaClientsRequestPrivate &other, ListLunaClientsRequest * const q)
    : ListLunaClientsPrivate(other, q)
{

}

} // namespace CloudHSM
} // namespace AWS
