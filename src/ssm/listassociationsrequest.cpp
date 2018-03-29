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

#include "listassociationsrequest.h"
#include "listassociationsrequest_p.h"
#include "listassociationsresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  ListAssociationsRequest
 *
 * @brief  Implements SSM ListAssociations requests.
 *
 * @see    SSMClient::listAssociations
 */

/**
 * @brief  Constructs a new ListAssociationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListAssociationsRequest::ListAssociationsRequest(const ListAssociationsRequest &other)
    : SSMRequest(new ListAssociationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListAssociationsRequest object.
 */
ListAssociationsRequest::ListAssociationsRequest()
    : SSMRequest(new ListAssociationsRequestPrivate(SSMRequest::ListAssociationsAction, this))
{

}

bool ListAssociationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListAssociationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListAssociationsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAssociationsRequest::response(QNetworkReply * const reply) const
{
    return new ListAssociationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListAssociationsRequestPrivate
 *
 * @brief  Private implementation for ListAssociationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAssociationsRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public ListAssociationsRequest instance.
 */
ListAssociationsRequestPrivate::ListAssociationsRequestPrivate(
    const SSMRequest::Action action, ListAssociationsRequest * const q)
    : ListAssociationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListAssociationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListAssociationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListAssociationsRequest instance.
 */
ListAssociationsRequestPrivate::ListAssociationsRequestPrivate(
    const ListAssociationsRequestPrivate &other, ListAssociationsRequest * const q)
    : ListAssociationsPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
