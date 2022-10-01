// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describegroupmembershiprequest.h"
#include "describegroupmembershiprequest_p.h"
#include "describegroupmembershipresponse.h"
#include "identitystorerequest_p.h"

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::DescribeGroupMembershipRequest
 * \brief The DescribeGroupMembershipRequest class provides an interface for IdentityStore DescribeGroupMembership requests.
 *
 * \inmodule QtAwsIdentityStore
 *
 *  The Identity Store service used by AWS IAM Identity Center (successor to AWS Single Sign-On) provides a single place to
 *  retrieve all of your identities (users and groups). For more information, see the <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html">IAM Identity Center User
 * 
 *  Guide</a>> <note>
 * 
 *  Although AWS Single Sign-On was renamed, the <code>sso</code> and <code>identitystore</code> API namespaces will
 *  continue to retain their original name for backward compatibility purposes. For more information, see <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html#renamed">IAM Identity Center
 * 
 *  rename</a>> </note>
 * 
 *  This reference guide describes the identity store operations that you can call programatically and includes detailed
 *  information on data types and
 *
 * \sa IdentityStoreClient::describeGroupMembership
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeGroupMembershipRequest::DescribeGroupMembershipRequest(const DescribeGroupMembershipRequest &other)
    : IdentityStoreRequest(new DescribeGroupMembershipRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeGroupMembershipRequest object.
 */
DescribeGroupMembershipRequest::DescribeGroupMembershipRequest()
    : IdentityStoreRequest(new DescribeGroupMembershipRequestPrivate(IdentityStoreRequest::DescribeGroupMembershipAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeGroupMembershipRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeGroupMembershipResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeGroupMembershipRequest::response(QNetworkReply * const reply) const
{
    return new DescribeGroupMembershipResponse(*this, reply);
}

/*!
 * \class QtAws::IdentityStore::DescribeGroupMembershipRequestPrivate
 * \brief The DescribeGroupMembershipRequestPrivate class provides private implementation for DescribeGroupMembershipRequest.
 * \internal
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a DescribeGroupMembershipRequestPrivate object for IdentityStore \a action,
 * with public implementation \a q.
 */
DescribeGroupMembershipRequestPrivate::DescribeGroupMembershipRequestPrivate(
    const IdentityStoreRequest::Action action, DescribeGroupMembershipRequest * const q)
    : IdentityStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeGroupMembershipRequest
 * class' copy constructor.
 */
DescribeGroupMembershipRequestPrivate::DescribeGroupMembershipRequestPrivate(
    const DescribeGroupMembershipRequestPrivate &other, DescribeGroupMembershipRequest * const q)
    : IdentityStoreRequestPrivate(other, q)
{

}

} // namespace IdentityStore
} // namespace QtAws
