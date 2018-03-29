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

#include "listvpcassociationauthorizationsrequest.h"
#include "listvpcassociationauthorizationsrequest_p.h"
#include "listvpcassociationauthorizationsresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/**
 * @class  ListVPCAssociationAuthorizationsRequest
 *
 * @brief  Implements Route53 ListVPCAssociationAuthorizations requests.
 *
 * @see    Route53Client::listVPCAssociationAuthorizations
 */

/**
 * @brief  Constructs a new ListVPCAssociationAuthorizationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListVPCAssociationAuthorizationsRequest::ListVPCAssociationAuthorizationsRequest(const ListVPCAssociationAuthorizationsRequest &other)
    : Route53Request(new ListVPCAssociationAuthorizationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListVPCAssociationAuthorizationsRequest object.
 */
ListVPCAssociationAuthorizationsRequest::ListVPCAssociationAuthorizationsRequest()
    : Route53Request(new ListVPCAssociationAuthorizationsRequestPrivate(Route53Request::ListVPCAssociationAuthorizationsAction, this))
{

}

bool ListVPCAssociationAuthorizationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListVPCAssociationAuthorizationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListVPCAssociationAuthorizationsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * ListVPCAssociationAuthorizationsRequest::response(QNetworkReply * const reply) const
{
    return new ListVPCAssociationAuthorizationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListVPCAssociationAuthorizationsRequestPrivate
 *
 * @brief  Private implementation for ListVPCAssociationAuthorizationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListVPCAssociationAuthorizationsRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public ListVPCAssociationAuthorizationsRequest instance.
 */
ListVPCAssociationAuthorizationsRequestPrivate::ListVPCAssociationAuthorizationsRequestPrivate(
    const Route53Request::Action action, ListVPCAssociationAuthorizationsRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListVPCAssociationAuthorizationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListVPCAssociationAuthorizationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListVPCAssociationAuthorizationsRequest instance.
 */
ListVPCAssociationAuthorizationsRequestPrivate::ListVPCAssociationAuthorizationsRequestPrivate(
    const ListVPCAssociationAuthorizationsRequestPrivate &other, ListVPCAssociationAuthorizationsRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
