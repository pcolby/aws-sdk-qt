// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletegroupmembershiprequest.h"
#include "deletegroupmembershiprequest_p.h"
#include "deletegroupmembershipresponse.h"
#include "identitystorerequest_p.h"

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::DeleteGroupMembershipRequest
 * \brief The DeleteGroupMembershipRequest class provides an interface for IdentityStore DeleteGroupMembership requests.
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
 * \sa IdentityStoreClient::deleteGroupMembership
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteGroupMembershipRequest::DeleteGroupMembershipRequest(const DeleteGroupMembershipRequest &other)
    : IdentityStoreRequest(new DeleteGroupMembershipRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteGroupMembershipRequest object.
 */
DeleteGroupMembershipRequest::DeleteGroupMembershipRequest()
    : IdentityStoreRequest(new DeleteGroupMembershipRequestPrivate(IdentityStoreRequest::DeleteGroupMembershipAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteGroupMembershipRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteGroupMembershipResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGroupMembershipRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGroupMembershipResponse(*this, reply);
}

/*!
 * \class QtAws::IdentityStore::DeleteGroupMembershipRequestPrivate
 * \brief The DeleteGroupMembershipRequestPrivate class provides private implementation for DeleteGroupMembershipRequest.
 * \internal
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a DeleteGroupMembershipRequestPrivate object for IdentityStore \a action,
 * with public implementation \a q.
 */
DeleteGroupMembershipRequestPrivate::DeleteGroupMembershipRequestPrivate(
    const IdentityStoreRequest::Action action, DeleteGroupMembershipRequest * const q)
    : IdentityStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteGroupMembershipRequest
 * class' copy constructor.
 */
DeleteGroupMembershipRequestPrivate::DeleteGroupMembershipRequestPrivate(
    const DeleteGroupMembershipRequestPrivate &other, DeleteGroupMembershipRequest * const q)
    : IdentityStoreRequestPrivate(other, q)
{

}

} // namespace IdentityStore
} // namespace QtAws
