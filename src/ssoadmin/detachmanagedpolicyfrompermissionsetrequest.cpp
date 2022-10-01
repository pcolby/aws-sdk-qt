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

#include "detachmanagedpolicyfrompermissionsetrequest.h"
#include "detachmanagedpolicyfrompermissionsetrequest_p.h"
#include "detachmanagedpolicyfrompermissionsetresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SsoAdmin {

/*!
 * \class QtAws::SsoAdmin::DetachManagedPolicyFromPermissionSetRequest
 * \brief The DetachManagedPolicyFromPermissionSetRequest class provides an interface for SsoAdmin DetachManagedPolicyFromPermissionSet requests.
 *
 * \inmodule QtAwsSsoAdmin
 *
 *  AWS IAM Identity Center (successor to AWS Single Sign-On) helps you securely create, or connect, your workforce
 *  identities and manage their access centrally across AWS accounts and applications. IAM Identity Center is the
 *  recommended approach for workforce authentication and authorization in AWS, for organizations of any size and
 * 
 *  type> <note>
 * 
 *  Although AWS Single Sign-On was renamed, the <code>sso</code> and <code>identitystore</code> API namespaces will
 *  continue to retain their original name for backward compatibility purposes. For more information, see <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html#renamed">IAM Identity Center
 * 
 *  rename</a>> </note>
 * 
 *  This reference guide provides information on single sign-on operations which could be used for access management of AWS
 *  accounts. For information about IAM Identity Center features, see the <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html">IAM Identity Center User
 * 
 *  Guide</a>>
 * 
 *  Many operations in the IAM Identity Center APIs rely on identifiers for users and groups, known as principals. For more
 *  information about how to work with principals and principal IDs in IAM Identity Center, see the <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/welcome.html">Identity Store API
 * 
 *  Reference</a>> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms (Java, Ruby,
 *  .Net, iOS, Android, and more). The SDKs provide a convenient way to create programmatic access to IAM Identity Center
 *  and other AWS services. For more information about the AWS SDKs, including how to download and install them, see <a
 *  href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *
 * \sa SsoAdminClient::detachManagedPolicyFromPermissionSet
 */

/*!
 * Constructs a copy of \a other.
 */
DetachManagedPolicyFromPermissionSetRequest::DetachManagedPolicyFromPermissionSetRequest(const DetachManagedPolicyFromPermissionSetRequest &other)
    : SsoAdminRequest(new DetachManagedPolicyFromPermissionSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetachManagedPolicyFromPermissionSetRequest object.
 */
DetachManagedPolicyFromPermissionSetRequest::DetachManagedPolicyFromPermissionSetRequest()
    : SsoAdminRequest(new DetachManagedPolicyFromPermissionSetRequestPrivate(SsoAdminRequest::DetachManagedPolicyFromPermissionSetAction, this))
{

}

/*!
 * \reimp
 */
bool DetachManagedPolicyFromPermissionSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetachManagedPolicyFromPermissionSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetachManagedPolicyFromPermissionSetRequest::response(QNetworkReply * const reply) const
{
    return new DetachManagedPolicyFromPermissionSetResponse(*this, reply);
}

/*!
 * \class QtAws::SsoAdmin::DetachManagedPolicyFromPermissionSetRequestPrivate
 * \brief The DetachManagedPolicyFromPermissionSetRequestPrivate class provides private implementation for DetachManagedPolicyFromPermissionSetRequest.
 * \internal
 *
 * \inmodule QtAwsSsoAdmin
 */

/*!
 * Constructs a DetachManagedPolicyFromPermissionSetRequestPrivate object for SsoAdmin \a action,
 * with public implementation \a q.
 */
DetachManagedPolicyFromPermissionSetRequestPrivate::DetachManagedPolicyFromPermissionSetRequestPrivate(
    const SsoAdminRequest::Action action, DetachManagedPolicyFromPermissionSetRequest * const q)
    : SsoAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetachManagedPolicyFromPermissionSetRequest
 * class' copy constructor.
 */
DetachManagedPolicyFromPermissionSetRequestPrivate::DetachManagedPolicyFromPermissionSetRequestPrivate(
    const DetachManagedPolicyFromPermissionSetRequestPrivate &other, DetachManagedPolicyFromPermissionSetRequest * const q)
    : SsoAdminRequestPrivate(other, q)
{

}

} // namespace SsoAdmin
} // namespace QtAws
