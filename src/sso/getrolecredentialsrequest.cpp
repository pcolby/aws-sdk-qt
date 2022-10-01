// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrolecredentialsrequest.h"
#include "getrolecredentialsrequest_p.h"
#include "getrolecredentialsresponse.h"
#include "ssorequest_p.h"

namespace QtAws {
namespace Sso {

/*!
 * \class QtAws::Sso::GetRoleCredentialsRequest
 * \brief The GetRoleCredentialsRequest class provides an interface for Sso GetRoleCredentials requests.
 *
 * \inmodule QtAwsSso
 *
 *  AWS IAM Identity Center (successor to AWS Single Sign-On) Portal is a web service that makes it easy for you to assign
 *  user access to IAM Identity Center resources such as the AWS access portal. Users can get AWS account applications and
 *  roles assigned to them and get federated into the
 * 
 *  application> <note>
 * 
 *  Although AWS Single Sign-On was renamed, the <code>sso</code> and <code>identitystore</code> API namespaces will
 *  continue to retain their original name for backward compatibility purposes. For more information, see <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html#renamed">IAM Identity Center
 * 
 *  rename</a>> </note>
 * 
 *  This reference guide describes the IAM Identity Center Portal operations that you can call programatically and includes
 *  detailed information on data types and
 * 
 *  errors> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms, such as
 *  Java, Ruby, .Net, iOS, or Android. The SDKs provide a convenient way to create programmatic access to IAM Identity
 *  Center and other AWS services. For more information about the AWS SDKs, including how to download and install them, see
 *  <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
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
 * \class QtAws::Sso::GetRoleCredentialsRequestPrivate
 * \brief The GetRoleCredentialsRequestPrivate class provides private implementation for GetRoleCredentialsRequest.
 * \internal
 *
 * \inmodule QtAwsSso
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

} // namespace Sso
} // namespace QtAws
