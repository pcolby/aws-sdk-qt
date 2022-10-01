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

#include "getgroupmembershipidrequest.h"
#include "getgroupmembershipidrequest_p.h"
#include "getgroupmembershipidresponse.h"
#include "identitystorerequest_p.h"

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::GetGroupMembershipIdRequest
 * \brief The GetGroupMembershipIdRequest class provides an interface for IdentityStore GetGroupMembershipId requests.
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
 * \sa IdentityStoreClient::getGroupMembershipId
 */

/*!
 * Constructs a copy of \a other.
 */
GetGroupMembershipIdRequest::GetGroupMembershipIdRequest(const GetGroupMembershipIdRequest &other)
    : IdentityStoreRequest(new GetGroupMembershipIdRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGroupMembershipIdRequest object.
 */
GetGroupMembershipIdRequest::GetGroupMembershipIdRequest()
    : IdentityStoreRequest(new GetGroupMembershipIdRequestPrivate(IdentityStoreRequest::GetGroupMembershipIdAction, this))
{

}

/*!
 * \reimp
 */
bool GetGroupMembershipIdRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGroupMembershipIdResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGroupMembershipIdRequest::response(QNetworkReply * const reply) const
{
    return new GetGroupMembershipIdResponse(*this, reply);
}

/*!
 * \class QtAws::IdentityStore::GetGroupMembershipIdRequestPrivate
 * \brief The GetGroupMembershipIdRequestPrivate class provides private implementation for GetGroupMembershipIdRequest.
 * \internal
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a GetGroupMembershipIdRequestPrivate object for IdentityStore \a action,
 * with public implementation \a q.
 */
GetGroupMembershipIdRequestPrivate::GetGroupMembershipIdRequestPrivate(
    const IdentityStoreRequest::Action action, GetGroupMembershipIdRequest * const q)
    : IdentityStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGroupMembershipIdRequest
 * class' copy constructor.
 */
GetGroupMembershipIdRequestPrivate::GetGroupMembershipIdRequestPrivate(
    const GetGroupMembershipIdRequestPrivate &other, GetGroupMembershipIdRequest * const q)
    : IdentityStoreRequestPrivate(other, q)
{

}

} // namespace IdentityStore
} // namespace QtAws
