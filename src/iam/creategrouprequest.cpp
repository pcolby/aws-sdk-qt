// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creategrouprequest.h"
#include "creategrouprequest_p.h"
#include "creategroupresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::CreateGroupRequest
 * \brief The CreateGroupRequest class provides an interface for Iam CreateGroup requests.
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
 * \sa IamClient::createGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGroupRequest::CreateGroupRequest(const CreateGroupRequest &other)
    : IamRequest(new CreateGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGroupRequest object.
 */
CreateGroupRequest::CreateGroupRequest()
    : IamRequest(new CreateGroupRequestPrivate(IamRequest::CreateGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::CreateGroupRequestPrivate
 * \brief The CreateGroupRequestPrivate class provides private implementation for CreateGroupRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a CreateGroupRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
CreateGroupRequestPrivate::CreateGroupRequestPrivate(
    const IamRequest::Action action, CreateGroupRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGroupRequest
 * class' copy constructor.
 */
CreateGroupRequestPrivate::CreateGroupRequestPrivate(
    const CreateGroupRequestPrivate &other, CreateGroupRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
