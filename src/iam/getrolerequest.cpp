// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrolerequest.h"
#include "getrolerequest_p.h"
#include "getroleresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetRoleRequest
 * \brief The GetRoleRequest class provides an interface for Iam GetRole requests.
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
 * \sa IamClient::getRole
 */

/*!
 * Constructs a copy of \a other.
 */
GetRoleRequest::GetRoleRequest(const GetRoleRequest &other)
    : IamRequest(new GetRoleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRoleRequest object.
 */
GetRoleRequest::GetRoleRequest()
    : IamRequest(new GetRoleRequestPrivate(IamRequest::GetRoleAction, this))
{

}

/*!
 * \reimp
 */
bool GetRoleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRoleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRoleRequest::response(QNetworkReply * const reply) const
{
    return new GetRoleResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GetRoleRequestPrivate
 * \brief The GetRoleRequestPrivate class provides private implementation for GetRoleRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetRoleRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GetRoleRequestPrivate::GetRoleRequestPrivate(
    const IamRequest::Action action, GetRoleRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRoleRequest
 * class' copy constructor.
 */
GetRoleRequestPrivate::GetRoleRequestPrivate(
    const GetRoleRequestPrivate &other, GetRoleRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
