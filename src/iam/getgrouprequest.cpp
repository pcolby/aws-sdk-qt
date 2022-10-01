// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgrouprequest.h"
#include "getgrouprequest_p.h"
#include "getgroupresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetGroupRequest
 * \brief The GetGroupRequest class provides an interface for Iam GetGroup requests.
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
 * \sa IamClient::getGroup
 */

/*!
 * Constructs a copy of \a other.
 */
GetGroupRequest::GetGroupRequest(const GetGroupRequest &other)
    : IamRequest(new GetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGroupRequest object.
 */
GetGroupRequest::GetGroupRequest()
    : IamRequest(new GetGroupRequestPrivate(IamRequest::GetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool GetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGroupRequest::response(QNetworkReply * const reply) const
{
    return new GetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GetGroupRequestPrivate
 * \brief The GetGroupRequestPrivate class provides private implementation for GetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetGroupRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GetGroupRequestPrivate::GetGroupRequestPrivate(
    const IamRequest::Action action, GetGroupRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGroupRequest
 * class' copy constructor.
 */
GetGroupRequestPrivate::GetGroupRequestPrivate(
    const GetGroupRequestPrivate &other, GetGroupRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
