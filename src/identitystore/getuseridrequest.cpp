// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getuseridrequest.h"
#include "getuseridrequest_p.h"
#include "getuseridresponse.h"
#include "identitystorerequest_p.h"

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::GetUserIdRequest
 * \brief The GetUserIdRequest class provides an interface for IdentityStore GetUserId requests.
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
 * \sa IdentityStoreClient::getUserId
 */

/*!
 * Constructs a copy of \a other.
 */
GetUserIdRequest::GetUserIdRequest(const GetUserIdRequest &other)
    : IdentityStoreRequest(new GetUserIdRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUserIdRequest object.
 */
GetUserIdRequest::GetUserIdRequest()
    : IdentityStoreRequest(new GetUserIdRequestPrivate(IdentityStoreRequest::GetUserIdAction, this))
{

}

/*!
 * \reimp
 */
bool GetUserIdRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUserIdResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUserIdRequest::response(QNetworkReply * const reply) const
{
    return new GetUserIdResponse(*this, reply);
}

/*!
 * \class QtAws::IdentityStore::GetUserIdRequestPrivate
 * \brief The GetUserIdRequestPrivate class provides private implementation for GetUserIdRequest.
 * \internal
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a GetUserIdRequestPrivate object for IdentityStore \a action,
 * with public implementation \a q.
 */
GetUserIdRequestPrivate::GetUserIdRequestPrivate(
    const IdentityStoreRequest::Action action, GetUserIdRequest * const q)
    : IdentityStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUserIdRequest
 * class' copy constructor.
 */
GetUserIdRequestPrivate::GetUserIdRequestPrivate(
    const GetUserIdRequestPrivate &other, GetUserIdRequest * const q)
    : IdentityStoreRequestPrivate(other, q)
{

}

} // namespace IdentityStore
} // namespace QtAws
