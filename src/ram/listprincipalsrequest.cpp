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

#include "listprincipalsrequest.h"
#include "listprincipalsrequest_p.h"
#include "listprincipalsresponse.h"
#include "ramrequest_p.h"

namespace QtAws {
namespace RAM {

/*!
 * \class QtAws::RAM::ListPrincipalsRequest
 * \brief The ListPrincipalsRequest class provides an interface for RAM ListPrincipals requests.
 *
 * \inmodule QtAwsRAM
 *
 *  Use AWS Resource Access Manager to share AWS resources between AWS accounts. To share a resource, you create a resource
 *  share, associate the resource with the resource share, and specify the principals that can access the resource. The
 *  following principals are
 * 
 *  supported> <ul> <li>
 * 
 *  The ID of an AWS
 * 
 *  accoun> </li> <li>
 * 
 *  The Amazon Resource Name (ARN) of an OU from AWS
 * 
 *  Organization> </li> <li>
 * 
 *  The Amazon Resource Name (ARN) of an organization from AWS
 * 
 *  Organization> </li> </ul>
 * 
 *  If you specify an AWS account that doesn't exist in the same organization as the account that owns the resource share,
 *  the owner of the specified account receives an invitation to accept the resource share. After the owner accepts the
 *  invitation, they can access the resources in the resource share. An administrator of the specified account can use IAM
 *  policies to restrict access resources in the resource
 *
 * \sa RamClient::listPrincipals
 */

/*!
 * Constructs a copy of \a other.
 */
ListPrincipalsRequest::ListPrincipalsRequest(const ListPrincipalsRequest &other)
    : RamRequest(new ListPrincipalsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPrincipalsRequest object.
 */
ListPrincipalsRequest::ListPrincipalsRequest()
    : RamRequest(new ListPrincipalsRequestPrivate(RamRequest::ListPrincipalsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPrincipalsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPrincipalsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPrincipalsRequest::response(QNetworkReply * const reply) const
{
    return new ListPrincipalsResponse(*this, reply);
}

/*!
 * \class QtAws::RAM::ListPrincipalsRequestPrivate
 * \brief The ListPrincipalsRequestPrivate class provides private implementation for ListPrincipalsRequest.
 * \internal
 *
 * \inmodule QtAwsRAM
 */

/*!
 * Constructs a ListPrincipalsRequestPrivate object for Ram \a action,
 * with public implementation \a q.
 */
ListPrincipalsRequestPrivate::ListPrincipalsRequestPrivate(
    const RamRequest::Action action, ListPrincipalsRequest * const q)
    : RamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPrincipalsRequest
 * class' copy constructor.
 */
ListPrincipalsRequestPrivate::ListPrincipalsRequestPrivate(
    const ListPrincipalsRequestPrivate &other, ListPrincipalsRequest * const q)
    : RamRequestPrivate(other, q)
{

}

} // namespace RAM
} // namespace QtAws
