// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describegrouprequest.h"
#include "describegrouprequest_p.h"
#include "describegroupresponse.h"
#include "identitystorerequest_p.h"

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::DescribeGroupRequest
 * \brief The DescribeGroupRequest class provides an interface for IdentityStore DescribeGroup requests.
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
 * \sa IdentityStoreClient::describeGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeGroupRequest::DescribeGroupRequest(const DescribeGroupRequest &other)
    : IdentityStoreRequest(new DescribeGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeGroupRequest object.
 */
DescribeGroupRequest::DescribeGroupRequest()
    : IdentityStoreRequest(new DescribeGroupRequestPrivate(IdentityStoreRequest::DescribeGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeGroupRequest::response(QNetworkReply * const reply) const
{
    return new DescribeGroupResponse(*this, reply);
}

/*!
 * \class QtAws::IdentityStore::DescribeGroupRequestPrivate
 * \brief The DescribeGroupRequestPrivate class provides private implementation for DescribeGroupRequest.
 * \internal
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a DescribeGroupRequestPrivate object for IdentityStore \a action,
 * with public implementation \a q.
 */
DescribeGroupRequestPrivate::DescribeGroupRequestPrivate(
    const IdentityStoreRequest::Action action, DescribeGroupRequest * const q)
    : IdentityStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeGroupRequest
 * class' copy constructor.
 */
DescribeGroupRequestPrivate::DescribeGroupRequestPrivate(
    const DescribeGroupRequestPrivate &other, DescribeGroupRequest * const q)
    : IdentityStoreRequestPrivate(other, q)
{

}

} // namespace IdentityStore
} // namespace QtAws
