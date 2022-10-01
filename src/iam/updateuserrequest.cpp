// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateuserrequest.h"
#include "updateuserrequest_p.h"
#include "updateuserresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UpdateUserRequest
 * \brief The UpdateUserRequest class provides an interface for Iam UpdateUser requests.
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
 * \sa IamClient::updateUser
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateUserRequest::UpdateUserRequest(const UpdateUserRequest &other)
    : IamRequest(new UpdateUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateUserRequest object.
 */
UpdateUserRequest::UpdateUserRequest()
    : IamRequest(new UpdateUserRequestPrivate(IamRequest::UpdateUserAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateUserRequest::response(QNetworkReply * const reply) const
{
    return new UpdateUserResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::UpdateUserRequestPrivate
 * \brief The UpdateUserRequestPrivate class provides private implementation for UpdateUserRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UpdateUserRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UpdateUserRequestPrivate::UpdateUserRequestPrivate(
    const IamRequest::Action action, UpdateUserRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateUserRequest
 * class' copy constructor.
 */
UpdateUserRequestPrivate::UpdateUserRequestPrivate(
    const UpdateUserRequestPrivate &other, UpdateUserRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
