// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeaccountassignmentcreationstatusrequest.h"
#include "describeaccountassignmentcreationstatusrequest_p.h"
#include "describeaccountassignmentcreationstatusresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SsoAdmin {

/*!
 * \class QtAws::SsoAdmin::DescribeAccountAssignmentCreationStatusRequest
 * \brief The DescribeAccountAssignmentCreationStatusRequest class provides an interface for SsoAdmin DescribeAccountAssignmentCreationStatus requests.
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
 * \sa SsoAdminClient::describeAccountAssignmentCreationStatus
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAccountAssignmentCreationStatusRequest::DescribeAccountAssignmentCreationStatusRequest(const DescribeAccountAssignmentCreationStatusRequest &other)
    : SsoAdminRequest(new DescribeAccountAssignmentCreationStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAccountAssignmentCreationStatusRequest object.
 */
DescribeAccountAssignmentCreationStatusRequest::DescribeAccountAssignmentCreationStatusRequest()
    : SsoAdminRequest(new DescribeAccountAssignmentCreationStatusRequestPrivate(SsoAdminRequest::DescribeAccountAssignmentCreationStatusAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAccountAssignmentCreationStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAccountAssignmentCreationStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAccountAssignmentCreationStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAccountAssignmentCreationStatusResponse(*this, reply);
}

/*!
 * \class QtAws::SsoAdmin::DescribeAccountAssignmentCreationStatusRequestPrivate
 * \brief The DescribeAccountAssignmentCreationStatusRequestPrivate class provides private implementation for DescribeAccountAssignmentCreationStatusRequest.
 * \internal
 *
 * \inmodule QtAwsSsoAdmin
 */

/*!
 * Constructs a DescribeAccountAssignmentCreationStatusRequestPrivate object for SsoAdmin \a action,
 * with public implementation \a q.
 */
DescribeAccountAssignmentCreationStatusRequestPrivate::DescribeAccountAssignmentCreationStatusRequestPrivate(
    const SsoAdminRequest::Action action, DescribeAccountAssignmentCreationStatusRequest * const q)
    : SsoAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAccountAssignmentCreationStatusRequest
 * class' copy constructor.
 */
DescribeAccountAssignmentCreationStatusRequestPrivate::DescribeAccountAssignmentCreationStatusRequestPrivate(
    const DescribeAccountAssignmentCreationStatusRequestPrivate &other, DescribeAccountAssignmentCreationStatusRequest * const q)
    : SsoAdminRequestPrivate(other, q)
{

}

} // namespace SsoAdmin
} // namespace QtAws
