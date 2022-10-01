// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getuserrequest.h"
#include "getuserrequest_p.h"
#include "getuserresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetUserRequest
 * \brief The GetUserRequest class provides an interface for Iam GetUser requests.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
 *
 * \sa IamClient::getUser
 */

/*!
 * Constructs a copy of \a other.
 */
GetUserRequest::GetUserRequest(const GetUserRequest &other)
    : IamRequest(new GetUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUserRequest object.
 */
GetUserRequest::GetUserRequest()
    : IamRequest(new GetUserRequestPrivate(IamRequest::GetUserAction, this))
{

}

/*!
 * \reimp
 */
bool GetUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUserRequest::response(QNetworkReply * const reply) const
{
    return new GetUserResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GetUserRequestPrivate
 * \brief The GetUserRequestPrivate class provides private implementation for GetUserRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetUserRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GetUserRequestPrivate::GetUserRequestPrivate(
    const IamRequest::Action action, GetUserRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUserRequest
 * class' copy constructor.
 */
GetUserRequestPrivate::GetUserRequestPrivate(
    const GetUserRequestPrivate &other, GetUserRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
