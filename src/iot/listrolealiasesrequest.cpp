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

#include "listrolealiasesrequest.h"
#include "listrolealiasesrequest_p.h"
#include "listrolealiasesresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  ListRoleAliasesRequest
 *
 * @brief  Implements IoT ListRoleAliases requests.
 *
 * @see    IoTClient::listRoleAliases
 */

/**
 * @brief  Constructs a new ListRoleAliasesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRoleAliasesResponse::ListRoleAliasesResponse(

/**
 * @brief  Constructs a new ListRoleAliasesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListRoleAliasesRequest::ListRoleAliasesRequest(const ListRoleAliasesRequest &other)
    : IoTRequest(new ListRoleAliasesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListRoleAliasesRequest object.
 */
ListRoleAliasesRequest::ListRoleAliasesRequest()
    : IoTRequest(new ListRoleAliasesRequestPrivate(IoTRequest::ListRoleAliasesAction, this))
{

}

bool ListRoleAliasesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListRoleAliasesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListRoleAliasesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * ListRoleAliasesRequest::response(QNetworkReply * const reply) const
{
    return new ListRoleAliasesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListRoleAliasesRequestPrivate
 *
 * @brief  Private implementation for ListRoleAliasesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRoleAliasesRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListRoleAliasesRequest instance.
 */
ListRoleAliasesRequestPrivate::ListRoleAliasesRequestPrivate(
    const IoTRequest::Action action, ListRoleAliasesRequest * const q)
    : ListRoleAliasesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListRoleAliasesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListRoleAliasesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListRoleAliasesRequest instance.
 */
ListRoleAliasesRequestPrivate::ListRoleAliasesRequestPrivate(
    const ListRoleAliasesRequestPrivate &other, ListRoleAliasesRequest * const q)
    : ListRoleAliasesPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
