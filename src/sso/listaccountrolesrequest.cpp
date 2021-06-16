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

#include "listaccountrolesrequest.h"
#include "listaccountrolesrequest_p.h"
#include "listaccountrolesresponse.h"
#include "ssorequest_p.h"

namespace QtAws {
namespace SSO {

/*!
 * \class QtAws::SSO::ListAccountRolesRequest
 * \brief The ListAccountRolesRequest class provides an interface for SSO ListAccountRoles requests.
 *
 * \inmodule QtAwsSSO
 *
 *  AWS Single Sign-On Portal is a web service that makes it easy for you to assign user access to AWS SSO resources such as
 *  the user portal. Users can get AWS account applications and roles assigned to them and get federated into the
 * 
 *  application>
 * 
 *  For general information about AWS SSO, see <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html">What is AWS Single Sign-On?</a> in the
 *  <i>AWS SSO User
 * 
 *  Guide</i>>
 * 
 *  This API reference guide describes the AWS SSO Portal operations that you can call programatically and includes detailed
 *  information on data types and
 * 
 *  errors> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms, such as
 *  Java, Ruby, .Net, iOS, or Android. The SDKs provide a convenient way to create programmatic access to AWS SSO and other
 *  AWS services. For more information about the AWS SDKs, including how to download and install them, see <a
 *  href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *
 * \sa SsoClient::listAccountRoles
 */

/*!
 * Constructs a copy of \a other.
 */
ListAccountRolesRequest::ListAccountRolesRequest(const ListAccountRolesRequest &other)
    : SsoRequest(new ListAccountRolesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAccountRolesRequest object.
 */
ListAccountRolesRequest::ListAccountRolesRequest()
    : SsoRequest(new ListAccountRolesRequestPrivate(SsoRequest::ListAccountRolesAction, this))
{

}

/*!
 * \reimp
 */
bool ListAccountRolesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAccountRolesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAccountRolesRequest::response(QNetworkReply * const reply) const
{
    return new ListAccountRolesResponse(*this, reply);
}

/*!
 * \class QtAws::SSO::ListAccountRolesRequestPrivate
 * \brief The ListAccountRolesRequestPrivate class provides private implementation for ListAccountRolesRequest.
 * \internal
 *
 * \inmodule QtAwsSSO
 */

/*!
 * Constructs a ListAccountRolesRequestPrivate object for Sso \a action,
 * with public implementation \a q.
 */
ListAccountRolesRequestPrivate::ListAccountRolesRequestPrivate(
    const SsoRequest::Action action, ListAccountRolesRequest * const q)
    : SsoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAccountRolesRequest
 * class' copy constructor.
 */
ListAccountRolesRequestPrivate::ListAccountRolesRequestPrivate(
    const ListAccountRolesRequestPrivate &other, ListAccountRolesRequest * const q)
    : SsoRequestPrivate(other, q)
{

}

} // namespace SSO
} // namespace QtAws
