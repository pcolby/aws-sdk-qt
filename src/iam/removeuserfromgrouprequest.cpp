// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removeuserfromgrouprequest.h"
#include "removeuserfromgrouprequest_p.h"
#include "removeuserfromgroupresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::RemoveUserFromGroupRequest
 * \brief The RemoveUserFromGroupRequest class provides an interface for Iam RemoveUserFromGroup requests.
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
 * \sa IamClient::removeUserFromGroup
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveUserFromGroupRequest::RemoveUserFromGroupRequest(const RemoveUserFromGroupRequest &other)
    : IamRequest(new RemoveUserFromGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveUserFromGroupRequest object.
 */
RemoveUserFromGroupRequest::RemoveUserFromGroupRequest()
    : IamRequest(new RemoveUserFromGroupRequestPrivate(IamRequest::RemoveUserFromGroupAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveUserFromGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveUserFromGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveUserFromGroupRequest::response(QNetworkReply * const reply) const
{
    return new RemoveUserFromGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::RemoveUserFromGroupRequestPrivate
 * \brief The RemoveUserFromGroupRequestPrivate class provides private implementation for RemoveUserFromGroupRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a RemoveUserFromGroupRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
RemoveUserFromGroupRequestPrivate::RemoveUserFromGroupRequestPrivate(
    const IamRequest::Action action, RemoveUserFromGroupRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveUserFromGroupRequest
 * class' copy constructor.
 */
RemoveUserFromGroupRequestPrivate::RemoveUserFromGroupRequestPrivate(
    const RemoveUserFromGroupRequestPrivate &other, RemoveUserFromGroupRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
