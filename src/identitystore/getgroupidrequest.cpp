// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgroupidrequest.h"
#include "getgroupidrequest_p.h"
#include "getgroupidresponse.h"
#include "identitystorerequest_p.h"

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::GetGroupIdRequest
 * \brief The GetGroupIdRequest class provides an interface for IdentityStore GetGroupId requests.
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
 * \sa IdentityStoreClient::getGroupId
 */

/*!
 * Constructs a copy of \a other.
 */
GetGroupIdRequest::GetGroupIdRequest(const GetGroupIdRequest &other)
    : IdentityStoreRequest(new GetGroupIdRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGroupIdRequest object.
 */
GetGroupIdRequest::GetGroupIdRequest()
    : IdentityStoreRequest(new GetGroupIdRequestPrivate(IdentityStoreRequest::GetGroupIdAction, this))
{

}

/*!
 * \reimp
 */
bool GetGroupIdRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGroupIdResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGroupIdRequest::response(QNetworkReply * const reply) const
{
    return new GetGroupIdResponse(*this, reply);
}

/*!
 * \class QtAws::IdentityStore::GetGroupIdRequestPrivate
 * \brief The GetGroupIdRequestPrivate class provides private implementation for GetGroupIdRequest.
 * \internal
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a GetGroupIdRequestPrivate object for IdentityStore \a action,
 * with public implementation \a q.
 */
GetGroupIdRequestPrivate::GetGroupIdRequestPrivate(
    const IdentityStoreRequest::Action action, GetGroupIdRequest * const q)
    : IdentityStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGroupIdRequest
 * class' copy constructor.
 */
GetGroupIdRequestPrivate::GetGroupIdRequestPrivate(
    const GetGroupIdRequestPrivate &other, GetGroupIdRequest * const q)
    : IdentityStoreRequestPrivate(other, q)
{

}

} // namespace IdentityStore
} // namespace QtAws
