// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgroupmembershipsformemberrequest.h"
#include "listgroupmembershipsformemberrequest_p.h"
#include "listgroupmembershipsformemberresponse.h"
#include "identitystorerequest_p.h"

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::ListGroupMembershipsForMemberRequest
 * \brief The ListGroupMembershipsForMemberRequest class provides an interface for IdentityStore ListGroupMembershipsForMember requests.
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
 * \sa IdentityStoreClient::listGroupMembershipsForMember
 */

/*!
 * Constructs a copy of \a other.
 */
ListGroupMembershipsForMemberRequest::ListGroupMembershipsForMemberRequest(const ListGroupMembershipsForMemberRequest &other)
    : IdentityStoreRequest(new ListGroupMembershipsForMemberRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGroupMembershipsForMemberRequest object.
 */
ListGroupMembershipsForMemberRequest::ListGroupMembershipsForMemberRequest()
    : IdentityStoreRequest(new ListGroupMembershipsForMemberRequestPrivate(IdentityStoreRequest::ListGroupMembershipsForMemberAction, this))
{

}

/*!
 * \reimp
 */
bool ListGroupMembershipsForMemberRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGroupMembershipsForMemberResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGroupMembershipsForMemberRequest::response(QNetworkReply * const reply) const
{
    return new ListGroupMembershipsForMemberResponse(*this, reply);
}

/*!
 * \class QtAws::IdentityStore::ListGroupMembershipsForMemberRequestPrivate
 * \brief The ListGroupMembershipsForMemberRequestPrivate class provides private implementation for ListGroupMembershipsForMemberRequest.
 * \internal
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a ListGroupMembershipsForMemberRequestPrivate object for IdentityStore \a action,
 * with public implementation \a q.
 */
ListGroupMembershipsForMemberRequestPrivate::ListGroupMembershipsForMemberRequestPrivate(
    const IdentityStoreRequest::Action action, ListGroupMembershipsForMemberRequest * const q)
    : IdentityStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGroupMembershipsForMemberRequest
 * class' copy constructor.
 */
ListGroupMembershipsForMemberRequestPrivate::ListGroupMembershipsForMemberRequestPrivate(
    const ListGroupMembershipsForMemberRequestPrivate &other, ListGroupMembershipsForMemberRequest * const q)
    : IdentityStoreRequestPrivate(other, q)
{

}

} // namespace IdentityStore
} // namespace QtAws
