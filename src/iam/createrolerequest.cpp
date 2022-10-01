// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrolerequest.h"
#include "createrolerequest_p.h"
#include "createroleresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::CreateRoleRequest
 * \brief The CreateRoleRequest class provides an interface for Iam CreateRole requests.
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
 * \sa IamClient::createRole
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRoleRequest::CreateRoleRequest(const CreateRoleRequest &other)
    : IamRequest(new CreateRoleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRoleRequest object.
 */
CreateRoleRequest::CreateRoleRequest()
    : IamRequest(new CreateRoleRequestPrivate(IamRequest::CreateRoleAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRoleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRoleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRoleRequest::response(QNetworkReply * const reply) const
{
    return new CreateRoleResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::CreateRoleRequestPrivate
 * \brief The CreateRoleRequestPrivate class provides private implementation for CreateRoleRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a CreateRoleRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
CreateRoleRequestPrivate::CreateRoleRequestPrivate(
    const IamRequest::Action action, CreateRoleRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRoleRequest
 * class' copy constructor.
 */
CreateRoleRequestPrivate::CreateRoleRequestPrivate(
    const CreateRoleRequestPrivate &other, CreateRoleRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
