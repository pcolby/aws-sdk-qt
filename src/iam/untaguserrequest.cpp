// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untaguserrequest.h"
#include "untaguserrequest_p.h"
#include "untaguserresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UntagUserRequest
 * \brief The UntagUserRequest class provides an interface for Iam UntagUser requests.
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
 * \sa IamClient::untagUser
 */

/*!
 * Constructs a copy of \a other.
 */
UntagUserRequest::UntagUserRequest(const UntagUserRequest &other)
    : IamRequest(new UntagUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagUserRequest object.
 */
UntagUserRequest::UntagUserRequest()
    : IamRequest(new UntagUserRequestPrivate(IamRequest::UntagUserAction, this))
{

}

/*!
 * \reimp
 */
bool UntagUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UntagUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagUserRequest::response(QNetworkReply * const reply) const
{
    return new UntagUserResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::UntagUserRequestPrivate
 * \brief The UntagUserRequestPrivate class provides private implementation for UntagUserRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UntagUserRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UntagUserRequestPrivate::UntagUserRequestPrivate(
    const IamRequest::Action action, UntagUserRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UntagUserRequest
 * class' copy constructor.
 */
UntagUserRequestPrivate::UntagUserRequestPrivate(
    const UntagUserRequestPrivate &other, UntagUserRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
