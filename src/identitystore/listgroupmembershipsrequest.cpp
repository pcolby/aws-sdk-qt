// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgroupmembershipsrequest.h"
#include "listgroupmembershipsrequest_p.h"
#include "listgroupmembershipsresponse.h"
#include "identitystorerequest_p.h"

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::ListGroupMembershipsRequest
 * \brief The ListGroupMembershipsRequest class provides an interface for IdentityStore ListGroupMemberships requests.
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
 * \sa IdentityStoreClient::listGroupMemberships
 */

/*!
 * Constructs a copy of \a other.
 */
ListGroupMembershipsRequest::ListGroupMembershipsRequest(const ListGroupMembershipsRequest &other)
    : IdentityStoreRequest(new ListGroupMembershipsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGroupMembershipsRequest object.
 */
ListGroupMembershipsRequest::ListGroupMembershipsRequest()
    : IdentityStoreRequest(new ListGroupMembershipsRequestPrivate(IdentityStoreRequest::ListGroupMembershipsAction, this))
{

}

/*!
 * \reimp
 */
bool ListGroupMembershipsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGroupMembershipsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGroupMembershipsRequest::response(QNetworkReply * const reply) const
{
    return new ListGroupMembershipsResponse(*this, reply);
}

/*!
 * \class QtAws::IdentityStore::ListGroupMembershipsRequestPrivate
 * \brief The ListGroupMembershipsRequestPrivate class provides private implementation for ListGroupMembershipsRequest.
 * \internal
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a ListGroupMembershipsRequestPrivate object for IdentityStore \a action,
 * with public implementation \a q.
 */
ListGroupMembershipsRequestPrivate::ListGroupMembershipsRequestPrivate(
    const IdentityStoreRequest::Action action, ListGroupMembershipsRequest * const q)
    : IdentityStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGroupMembershipsRequest
 * class' copy constructor.
 */
ListGroupMembershipsRequestPrivate::ListGroupMembershipsRequestPrivate(
    const ListGroupMembershipsRequestPrivate &other, ListGroupMembershipsRequest * const q)
    : IdentityStoreRequestPrivate(other, q)
{

}

} // namespace IdentityStore
} // namespace QtAws
