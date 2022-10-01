// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteinlinepolicyfrompermissionsetrequest.h"
#include "deleteinlinepolicyfrompermissionsetrequest_p.h"
#include "deleteinlinepolicyfrompermissionsetresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SsoAdmin {

/*!
 * \class QtAws::SsoAdmin::DeleteInlinePolicyFromPermissionSetRequest
 * \brief The DeleteInlinePolicyFromPermissionSetRequest class provides an interface for SsoAdmin DeleteInlinePolicyFromPermissionSet requests.
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
 * \sa SsoAdminClient::deleteInlinePolicyFromPermissionSet
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteInlinePolicyFromPermissionSetRequest::DeleteInlinePolicyFromPermissionSetRequest(const DeleteInlinePolicyFromPermissionSetRequest &other)
    : SsoAdminRequest(new DeleteInlinePolicyFromPermissionSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteInlinePolicyFromPermissionSetRequest object.
 */
DeleteInlinePolicyFromPermissionSetRequest::DeleteInlinePolicyFromPermissionSetRequest()
    : SsoAdminRequest(new DeleteInlinePolicyFromPermissionSetRequestPrivate(SsoAdminRequest::DeleteInlinePolicyFromPermissionSetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteInlinePolicyFromPermissionSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteInlinePolicyFromPermissionSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteInlinePolicyFromPermissionSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInlinePolicyFromPermissionSetResponse(*this, reply);
}

/*!
 * \class QtAws::SsoAdmin::DeleteInlinePolicyFromPermissionSetRequestPrivate
 * \brief The DeleteInlinePolicyFromPermissionSetRequestPrivate class provides private implementation for DeleteInlinePolicyFromPermissionSetRequest.
 * \internal
 *
 * \inmodule QtAwsSsoAdmin
 */

/*!
 * Constructs a DeleteInlinePolicyFromPermissionSetRequestPrivate object for SsoAdmin \a action,
 * with public implementation \a q.
 */
DeleteInlinePolicyFromPermissionSetRequestPrivate::DeleteInlinePolicyFromPermissionSetRequestPrivate(
    const SsoAdminRequest::Action action, DeleteInlinePolicyFromPermissionSetRequest * const q)
    : SsoAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteInlinePolicyFromPermissionSetRequest
 * class' copy constructor.
 */
DeleteInlinePolicyFromPermissionSetRequestPrivate::DeleteInlinePolicyFromPermissionSetRequestPrivate(
    const DeleteInlinePolicyFromPermissionSetRequestPrivate &other, DeleteInlinePolicyFromPermissionSetRequest * const q)
    : SsoAdminRequestPrivate(other, q)
{

}

} // namespace SsoAdmin
} // namespace QtAws
