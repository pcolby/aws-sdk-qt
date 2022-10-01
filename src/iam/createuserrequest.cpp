// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createuserrequest.h"
#include "createuserrequest_p.h"
#include "createuserresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::CreateUserRequest
 * \brief The CreateUserRequest class provides an interface for Iam CreateUser requests.
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
 * \sa IamClient::createUser
 */

/*!
 * Constructs a copy of \a other.
 */
CreateUserRequest::CreateUserRequest(const CreateUserRequest &other)
    : IamRequest(new CreateUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateUserRequest object.
 */
CreateUserRequest::CreateUserRequest()
    : IamRequest(new CreateUserRequestPrivate(IamRequest::CreateUserAction, this))
{

}

/*!
 * \reimp
 */
bool CreateUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateUserRequest::response(QNetworkReply * const reply) const
{
    return new CreateUserResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::CreateUserRequestPrivate
 * \brief The CreateUserRequestPrivate class provides private implementation for CreateUserRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a CreateUserRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
CreateUserRequestPrivate::CreateUserRequestPrivate(
    const IamRequest::Action action, CreateUserRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateUserRequest
 * class' copy constructor.
 */
CreateUserRequestPrivate::CreateUserRequestPrivate(
    const CreateUserRequestPrivate &other, CreateUserRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
