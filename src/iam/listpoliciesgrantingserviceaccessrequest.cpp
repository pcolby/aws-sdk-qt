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

#include "listpoliciesgrantingserviceaccessrequest.h"
#include "listpoliciesgrantingserviceaccessrequest_p.h"
#include "listpoliciesgrantingserviceaccessresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListPoliciesGrantingServiceAccessRequest
 * \brief The ListPoliciesGrantingServiceAccessRequest class provides an interface for Iam ListPoliciesGrantingServiceAccess requests.
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
 * \sa IamClient::listPoliciesGrantingServiceAccess
 */

/*!
 * Constructs a copy of \a other.
 */
ListPoliciesGrantingServiceAccessRequest::ListPoliciesGrantingServiceAccessRequest(const ListPoliciesGrantingServiceAccessRequest &other)
    : IamRequest(new ListPoliciesGrantingServiceAccessRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPoliciesGrantingServiceAccessRequest object.
 */
ListPoliciesGrantingServiceAccessRequest::ListPoliciesGrantingServiceAccessRequest()
    : IamRequest(new ListPoliciesGrantingServiceAccessRequestPrivate(IamRequest::ListPoliciesGrantingServiceAccessAction, this))
{

}

/*!
 * \reimp
 */
bool ListPoliciesGrantingServiceAccessRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPoliciesGrantingServiceAccessResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPoliciesGrantingServiceAccessRequest::response(QNetworkReply * const reply) const
{
    return new ListPoliciesGrantingServiceAccessResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListPoliciesGrantingServiceAccessRequestPrivate
 * \brief The ListPoliciesGrantingServiceAccessRequestPrivate class provides private implementation for ListPoliciesGrantingServiceAccessRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListPoliciesGrantingServiceAccessRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListPoliciesGrantingServiceAccessRequestPrivate::ListPoliciesGrantingServiceAccessRequestPrivate(
    const IamRequest::Action action, ListPoliciesGrantingServiceAccessRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPoliciesGrantingServiceAccessRequest
 * class' copy constructor.
 */
ListPoliciesGrantingServiceAccessRequestPrivate::ListPoliciesGrantingServiceAccessRequestPrivate(
    const ListPoliciesGrantingServiceAccessRequestPrivate &other, ListPoliciesGrantingServiceAccessRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
