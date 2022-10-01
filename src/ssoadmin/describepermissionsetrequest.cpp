// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describepermissionsetrequest.h"
#include "describepermissionsetrequest_p.h"
#include "describepermissionsetresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SsoAdmin {

/*!
 * \class QtAws::SsoAdmin::DescribePermissionSetRequest
 * \brief The DescribePermissionSetRequest class provides an interface for SsoAdmin DescribePermissionSet requests.
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
 * \sa SsoAdminClient::describePermissionSet
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePermissionSetRequest::DescribePermissionSetRequest(const DescribePermissionSetRequest &other)
    : SsoAdminRequest(new DescribePermissionSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePermissionSetRequest object.
 */
DescribePermissionSetRequest::DescribePermissionSetRequest()
    : SsoAdminRequest(new DescribePermissionSetRequestPrivate(SsoAdminRequest::DescribePermissionSetAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePermissionSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePermissionSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePermissionSetRequest::response(QNetworkReply * const reply) const
{
    return new DescribePermissionSetResponse(*this, reply);
}

/*!
 * \class QtAws::SsoAdmin::DescribePermissionSetRequestPrivate
 * \brief The DescribePermissionSetRequestPrivate class provides private implementation for DescribePermissionSetRequest.
 * \internal
 *
 * \inmodule QtAwsSsoAdmin
 */

/*!
 * Constructs a DescribePermissionSetRequestPrivate object for SsoAdmin \a action,
 * with public implementation \a q.
 */
DescribePermissionSetRequestPrivate::DescribePermissionSetRequestPrivate(
    const SsoAdminRequest::Action action, DescribePermissionSetRequest * const q)
    : SsoAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePermissionSetRequest
 * class' copy constructor.
 */
DescribePermissionSetRequestPrivate::DescribePermissionSetRequestPrivate(
    const DescribePermissionSetRequestPrivate &other, DescribePermissionSetRequest * const q)
    : SsoAdminRequestPrivate(other, q)
{

}

} // namespace SsoAdmin
} // namespace QtAws
