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

#include "listorganizationsrequest.h"
#include "listorganizationsrequest_p.h"
#include "listorganizationsresponse.h"
#include "workmailrequest_p.h"

namespace QtAws {
namespace WorkMail {

/**
 * @class  ListOrganizationsRequest
 *
 * @brief  Implements WorkMail ListOrganizations requests.
 *
 * @see    WorkMailClient::listOrganizations
 */

/**
 * @brief  Constructs a new ListOrganizationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListOrganizationsRequest::ListOrganizationsRequest(const ListOrganizationsRequest &other)
    : WorkMailRequest(new ListOrganizationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListOrganizationsRequest object.
 */
ListOrganizationsRequest::ListOrganizationsRequest()
    : WorkMailRequest(new ListOrganizationsRequestPrivate(WorkMailRequest::ListOrganizationsAction, this))
{

}

bool ListOrganizationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListOrganizationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListOrganizationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkMailClient::send
 */
AwsAbstractResponse * ListOrganizationsRequest::response(QNetworkReply * const reply) const
{
    return new ListOrganizationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListOrganizationsRequestPrivate
 *
 * @brief  Private implementation for ListOrganizationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListOrganizationsRequestPrivate object.
 *
 * @param  action  WorkMail action being performed.
 * @param  q       Pointer to this object's public ListOrganizationsRequest instance.
 */
ListOrganizationsRequestPrivate::ListOrganizationsRequestPrivate(
    const WorkMailRequest::Action action, ListOrganizationsRequest * const q)
    : ListOrganizationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListOrganizationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListOrganizationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListOrganizationsRequest instance.
 */
ListOrganizationsRequestPrivate::ListOrganizationsRequestPrivate(
    const ListOrganizationsRequestPrivate &other, ListOrganizationsRequest * const q)
    : ListOrganizationsPrivate(other, q)
{

}

} // namespace WorkMail
} // namespace QtAws
