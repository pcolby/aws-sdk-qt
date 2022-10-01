// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untagrolerequest.h"
#include "untagrolerequest_p.h"
#include "untagroleresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UntagRoleRequest
 * \brief The UntagRoleRequest class provides an interface for Iam UntagRole requests.
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
 * \sa IamClient::untagRole
 */

/*!
 * Constructs a copy of \a other.
 */
UntagRoleRequest::UntagRoleRequest(const UntagRoleRequest &other)
    : IamRequest(new UntagRoleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagRoleRequest object.
 */
UntagRoleRequest::UntagRoleRequest()
    : IamRequest(new UntagRoleRequestPrivate(IamRequest::UntagRoleAction, this))
{

}

/*!
 * \reimp
 */
bool UntagRoleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UntagRoleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagRoleRequest::response(QNetworkReply * const reply) const
{
    return new UntagRoleResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::UntagRoleRequestPrivate
 * \brief The UntagRoleRequestPrivate class provides private implementation for UntagRoleRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UntagRoleRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UntagRoleRequestPrivate::UntagRoleRequestPrivate(
    const IamRequest::Action action, UntagRoleRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UntagRoleRequest
 * class' copy constructor.
 */
UntagRoleRequestPrivate::UntagRoleRequestPrivate(
    const UntagRoleRequestPrivate &other, UntagRoleRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
