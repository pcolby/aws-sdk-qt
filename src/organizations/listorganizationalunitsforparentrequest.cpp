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

#include "listorganizationalunitsforparentrequest.h"
#include "listorganizationalunitsforparentrequest_p.h"
#include "listorganizationalunitsforparentresponse.h"
#include "organizationsrequest_p.h"

namespace AWS {
namespace Organizations {

/**
 * @class  ListOrganizationalUnitsForParentRequest
 *
 * @brief  Implements Organizations ListOrganizationalUnitsForParent requests.
 *
 * @see    OrganizationsClient::listOrganizationalUnitsForParent
 */

/**
 * @brief  Constructs a new ListOrganizationalUnitsForParentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListOrganizationalUnitsForParentResponse::ListOrganizationalUnitsForParentResponse(

/**
 * @brief  Constructs a new ListOrganizationalUnitsForParentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListOrganizationalUnitsForParentRequest::ListOrganizationalUnitsForParentRequest(const ListOrganizationalUnitsForParentRequest &other)
    : OrganizationsRequest(new ListOrganizationalUnitsForParentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListOrganizationalUnitsForParentRequest object.
 */
ListOrganizationalUnitsForParentRequest::ListOrganizationalUnitsForParentRequest()
    : OrganizationsRequest(new ListOrganizationalUnitsForParentRequestPrivate(OrganizationsRequest::ListOrganizationalUnitsForParentAction, this))
{

}

bool ListOrganizationalUnitsForParentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListOrganizationalUnitsForParentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListOrganizationalUnitsForParentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * ListOrganizationalUnitsForParentRequest::response(QNetworkReply * const reply) const
{
    return new ListOrganizationalUnitsForParentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListOrganizationalUnitsForParentRequestPrivate
 *
 * @brief  Private implementation for ListOrganizationalUnitsForParentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListOrganizationalUnitsForParentRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public ListOrganizationalUnitsForParentRequest instance.
 */
ListOrganizationalUnitsForParentRequestPrivate::ListOrganizationalUnitsForParentRequestPrivate(
    const OrganizationsRequest::Action action, ListOrganizationalUnitsForParentRequest * const q)
    : ListOrganizationalUnitsForParentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListOrganizationalUnitsForParentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListOrganizationalUnitsForParentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListOrganizationalUnitsForParentRequest instance.
 */
ListOrganizationalUnitsForParentRequestPrivate::ListOrganizationalUnitsForParentRequestPrivate(
    const ListOrganizationalUnitsForParentRequestPrivate &other, ListOrganizationalUnitsForParentRequest * const q)
    : ListOrganizationalUnitsForParentPrivate(other, q)
{

}
