// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "changepasswordrequest.h"
#include "changepasswordrequest_p.h"
#include "changepasswordresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ChangePasswordRequest
 * \brief The ChangePasswordRequest class provides an interface for Iam ChangePassword requests.
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
 * \sa IamClient::changePassword
 */

/*!
 * Constructs a copy of \a other.
 */
ChangePasswordRequest::ChangePasswordRequest(const ChangePasswordRequest &other)
    : IamRequest(new ChangePasswordRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ChangePasswordRequest object.
 */
ChangePasswordRequest::ChangePasswordRequest()
    : IamRequest(new ChangePasswordRequestPrivate(IamRequest::ChangePasswordAction, this))
{

}

/*!
 * \reimp
 */
bool ChangePasswordRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ChangePasswordResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ChangePasswordRequest::response(QNetworkReply * const reply) const
{
    return new ChangePasswordResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ChangePasswordRequestPrivate
 * \brief The ChangePasswordRequestPrivate class provides private implementation for ChangePasswordRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ChangePasswordRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ChangePasswordRequestPrivate::ChangePasswordRequestPrivate(
    const IamRequest::Action action, ChangePasswordRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ChangePasswordRequest
 * class' copy constructor.
 */
ChangePasswordRequestPrivate::ChangePasswordRequestPrivate(
    const ChangePasswordRequestPrivate &other, ChangePasswordRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
