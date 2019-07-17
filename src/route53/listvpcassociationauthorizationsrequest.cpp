/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listvpcassociationauthorizationsrequest.h"
#include "listvpcassociationauthorizationsrequest_p.h"
#include "listvpcassociationauthorizationsresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListVPCAssociationAuthorizationsRequest
 * \brief The ListVPCAssociationAuthorizationsRequest class provides an interface for Route53 ListVPCAssociationAuthorizations requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::listVPCAssociationAuthorizations
 */

/*!
 * Constructs a copy of \a other.
 */
ListVPCAssociationAuthorizationsRequest::ListVPCAssociationAuthorizationsRequest(const ListVPCAssociationAuthorizationsRequest &other)
    : Route53Request(new ListVPCAssociationAuthorizationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListVPCAssociationAuthorizationsRequest object.
 */
ListVPCAssociationAuthorizationsRequest::ListVPCAssociationAuthorizationsRequest()
    : Route53Request(new ListVPCAssociationAuthorizationsRequestPrivate(Route53Request::ListVPCAssociationAuthorizationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListVPCAssociationAuthorizationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListVPCAssociationAuthorizationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListVPCAssociationAuthorizationsRequest::response(QNetworkReply * const reply) const
{
    return new ListVPCAssociationAuthorizationsResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ListVPCAssociationAuthorizationsRequestPrivate
 * \brief The ListVPCAssociationAuthorizationsRequestPrivate class provides private implementation for ListVPCAssociationAuthorizationsRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListVPCAssociationAuthorizationsRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
ListVPCAssociationAuthorizationsRequestPrivate::ListVPCAssociationAuthorizationsRequestPrivate(
    const Route53Request::Action action, ListVPCAssociationAuthorizationsRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListVPCAssociationAuthorizationsRequest
 * class' copy constructor.
 */
ListVPCAssociationAuthorizationsRequestPrivate::ListVPCAssociationAuthorizationsRequestPrivate(
    const ListVPCAssociationAuthorizationsRequestPrivate &other, ListVPCAssociationAuthorizationsRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
