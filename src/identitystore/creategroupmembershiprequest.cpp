// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creategroupmembershiprequest.h"
#include "creategroupmembershiprequest_p.h"
#include "creategroupmembershipresponse.h"
#include "identitystorerequest_p.h"

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::CreateGroupMembershipRequest
 * \brief The CreateGroupMembershipRequest class provides an interface for IdentityStore CreateGroupMembership requests.
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
 * \sa IdentityStoreClient::createGroupMembership
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGroupMembershipRequest::CreateGroupMembershipRequest(const CreateGroupMembershipRequest &other)
    : IdentityStoreRequest(new CreateGroupMembershipRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGroupMembershipRequest object.
 */
CreateGroupMembershipRequest::CreateGroupMembershipRequest()
    : IdentityStoreRequest(new CreateGroupMembershipRequestPrivate(IdentityStoreRequest::CreateGroupMembershipAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGroupMembershipRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGroupMembershipResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGroupMembershipRequest::response(QNetworkReply * const reply) const
{
    return new CreateGroupMembershipResponse(*this, reply);
}

/*!
 * \class QtAws::IdentityStore::CreateGroupMembershipRequestPrivate
 * \brief The CreateGroupMembershipRequestPrivate class provides private implementation for CreateGroupMembershipRequest.
 * \internal
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a CreateGroupMembershipRequestPrivate object for IdentityStore \a action,
 * with public implementation \a q.
 */
CreateGroupMembershipRequestPrivate::CreateGroupMembershipRequestPrivate(
    const IdentityStoreRequest::Action action, CreateGroupMembershipRequest * const q)
    : IdentityStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGroupMembershipRequest
 * class' copy constructor.
 */
CreateGroupMembershipRequestPrivate::CreateGroupMembershipRequestPrivate(
    const CreateGroupMembershipRequestPrivate &other, CreateGroupMembershipRequest * const q)
    : IdentityStoreRequestPrivate(other, q)
{

}

} // namespace IdentityStore
} // namespace QtAws
