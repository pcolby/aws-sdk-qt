// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createservicelinkedrolerequest.h"
#include "createservicelinkedrolerequest_p.h"
#include "createservicelinkedroleresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::CreateServiceLinkedRoleRequest
 * \brief The CreateServiceLinkedRoleRequest class provides an interface for Iam CreateServiceLinkedRole requests.
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
 * \sa IamClient::createServiceLinkedRole
 */

/*!
 * Constructs a copy of \a other.
 */
CreateServiceLinkedRoleRequest::CreateServiceLinkedRoleRequest(const CreateServiceLinkedRoleRequest &other)
    : IamRequest(new CreateServiceLinkedRoleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateServiceLinkedRoleRequest object.
 */
CreateServiceLinkedRoleRequest::CreateServiceLinkedRoleRequest()
    : IamRequest(new CreateServiceLinkedRoleRequestPrivate(IamRequest::CreateServiceLinkedRoleAction, this))
{

}

/*!
 * \reimp
 */
bool CreateServiceLinkedRoleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateServiceLinkedRoleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateServiceLinkedRoleRequest::response(QNetworkReply * const reply) const
{
    return new CreateServiceLinkedRoleResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::CreateServiceLinkedRoleRequestPrivate
 * \brief The CreateServiceLinkedRoleRequestPrivate class provides private implementation for CreateServiceLinkedRoleRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a CreateServiceLinkedRoleRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
CreateServiceLinkedRoleRequestPrivate::CreateServiceLinkedRoleRequestPrivate(
    const IamRequest::Action action, CreateServiceLinkedRoleRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateServiceLinkedRoleRequest
 * class' copy constructor.
 */
CreateServiceLinkedRoleRequestPrivate::CreateServiceLinkedRoleRequestPrivate(
    const CreateServiceLinkedRoleRequestPrivate &other, CreateServiceLinkedRoleRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
