// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getservicelinkedroledeletionstatusrequest.h"
#include "getservicelinkedroledeletionstatusrequest_p.h"
#include "getservicelinkedroledeletionstatusresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetServiceLinkedRoleDeletionStatusRequest
 * \brief The GetServiceLinkedRoleDeletionStatusRequest class provides an interface for Iam GetServiceLinkedRoleDeletionStatus requests.
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
 * \sa IamClient::getServiceLinkedRoleDeletionStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetServiceLinkedRoleDeletionStatusRequest::GetServiceLinkedRoleDeletionStatusRequest(const GetServiceLinkedRoleDeletionStatusRequest &other)
    : IamRequest(new GetServiceLinkedRoleDeletionStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetServiceLinkedRoleDeletionStatusRequest object.
 */
GetServiceLinkedRoleDeletionStatusRequest::GetServiceLinkedRoleDeletionStatusRequest()
    : IamRequest(new GetServiceLinkedRoleDeletionStatusRequestPrivate(IamRequest::GetServiceLinkedRoleDeletionStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetServiceLinkedRoleDeletionStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetServiceLinkedRoleDeletionStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetServiceLinkedRoleDeletionStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetServiceLinkedRoleDeletionStatusResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GetServiceLinkedRoleDeletionStatusRequestPrivate
 * \brief The GetServiceLinkedRoleDeletionStatusRequestPrivate class provides private implementation for GetServiceLinkedRoleDeletionStatusRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetServiceLinkedRoleDeletionStatusRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GetServiceLinkedRoleDeletionStatusRequestPrivate::GetServiceLinkedRoleDeletionStatusRequestPrivate(
    const IamRequest::Action action, GetServiceLinkedRoleDeletionStatusRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetServiceLinkedRoleDeletionStatusRequest
 * class' copy constructor.
 */
GetServiceLinkedRoleDeletionStatusRequestPrivate::GetServiceLinkedRoleDeletionStatusRequestPrivate(
    const GetServiceLinkedRoleDeletionStatusRequestPrivate &other, GetServiceLinkedRoleDeletionStatusRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
