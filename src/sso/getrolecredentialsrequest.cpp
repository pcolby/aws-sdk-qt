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

#include "getrolecredentialsrequest.h"
#include "getrolecredentialsrequest_p.h"
#include "getrolecredentialsresponse.h"
#include "ssorequest_p.h"

namespace QtAws {
namespace SSO {

/*!
 * \class QtAws::SSO::GetRoleCredentialsRequest
 * \brief The GetRoleCredentialsRequest class provides an interface for SSO GetRoleCredentials requests.
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
 * \sa SsoClient::getRoleCredentials
 */

/*!
 * Constructs a copy of \a other.
 */
GetRoleCredentialsRequest::GetRoleCredentialsRequest(const GetRoleCredentialsRequest &other)
    : SsoRequest(new GetRoleCredentialsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRoleCredentialsRequest object.
 */
GetRoleCredentialsRequest::GetRoleCredentialsRequest()
    : SsoRequest(new GetRoleCredentialsRequestPrivate(SsoRequest::GetRoleCredentialsAction, this))
{

}

/*!
 * \reimp
 */
bool GetRoleCredentialsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRoleCredentialsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRoleCredentialsRequest::response(QNetworkReply * const reply) const
{
    return new GetRoleCredentialsResponse(*this, reply);
}

/*!
 * \class QtAws::SSO::GetRoleCredentialsRequestPrivate
 * \brief The GetRoleCredentialsRequestPrivate class provides private implementation for GetRoleCredentialsRequest.
 * \internal
 *
 * \inmodule QtAwsSSO
 */

/*!
 * Constructs a GetRoleCredentialsRequestPrivate object for Sso \a action,
 * with public implementation \a q.
 */
GetRoleCredentialsRequestPrivate::GetRoleCredentialsRequestPrivate(
    const SsoRequest::Action action, GetRoleCredentialsRequest * const q)
    : SsoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRoleCredentialsRequest
 * class' copy constructor.
 */
GetRoleCredentialsRequestPrivate::GetRoleCredentialsRequestPrivate(
    const GetRoleCredentialsRequestPrivate &other, GetRoleCredentialsRequest * const q)
    : SsoRequestPrivate(other, q)
{

}

} // namespace SSO
} // namespace QtAws
