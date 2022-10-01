/*
    Copyright 2013-2021 Paul Colby

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

#include "listrolesrequest.h"
#include "listrolesrequest_p.h"
#include "listrolesresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListRolesRequest
 * \brief The ListRolesRequest class provides an interface for Iam ListRoles requests.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
 *
 * \sa IamClient::listRoles
 */

/*!
 * Constructs a copy of \a other.
 */
ListRolesRequest::ListRolesRequest(const ListRolesRequest &other)
    : IamRequest(new ListRolesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRolesRequest object.
 */
ListRolesRequest::ListRolesRequest()
    : IamRequest(new ListRolesRequestPrivate(IamRequest::ListRolesAction, this))
{

}

/*!
 * \reimp
 */
bool ListRolesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRolesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRolesRequest::response(QNetworkReply * const reply) const
{
    return new ListRolesResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListRolesRequestPrivate
 * \brief The ListRolesRequestPrivate class provides private implementation for ListRolesRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListRolesRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListRolesRequestPrivate::ListRolesRequestPrivate(
    const IamRequest::Action action, ListRolesRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRolesRequest
 * class' copy constructor.
 */
ListRolesRequestPrivate::ListRolesRequestPrivate(
    const ListRolesRequestPrivate &other, ListRolesRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
