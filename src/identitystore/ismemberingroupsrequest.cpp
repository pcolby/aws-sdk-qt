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

#include "ismemberingroupsrequest.h"
#include "ismemberingroupsrequest_p.h"
#include "ismemberingroupsresponse.h"
#include "identitystorerequest_p.h"

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::IsMemberInGroupsRequest
 * \brief The IsMemberInGroupsRequest class provides an interface for IdentityStore IsMemberInGroups requests.
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
 * \sa IdentityStoreClient::isMemberInGroups
 */

/*!
 * Constructs a copy of \a other.
 */
IsMemberInGroupsRequest::IsMemberInGroupsRequest(const IsMemberInGroupsRequest &other)
    : IdentityStoreRequest(new IsMemberInGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a IsMemberInGroupsRequest object.
 */
IsMemberInGroupsRequest::IsMemberInGroupsRequest()
    : IdentityStoreRequest(new IsMemberInGroupsRequestPrivate(IdentityStoreRequest::IsMemberInGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool IsMemberInGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a IsMemberInGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * IsMemberInGroupsRequest::response(QNetworkReply * const reply) const
{
    return new IsMemberInGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::IdentityStore::IsMemberInGroupsRequestPrivate
 * \brief The IsMemberInGroupsRequestPrivate class provides private implementation for IsMemberInGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a IsMemberInGroupsRequestPrivate object for IdentityStore \a action,
 * with public implementation \a q.
 */
IsMemberInGroupsRequestPrivate::IsMemberInGroupsRequestPrivate(
    const IdentityStoreRequest::Action action, IsMemberInGroupsRequest * const q)
    : IdentityStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the IsMemberInGroupsRequest
 * class' copy constructor.
 */
IsMemberInGroupsRequestPrivate::IsMemberInGroupsRequestPrivate(
    const IsMemberInGroupsRequestPrivate &other, IsMemberInGroupsRequest * const q)
    : IdentityStoreRequestPrivate(other, q)
{

}

} // namespace IdentityStore
} // namespace QtAws
