// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getorganizationsaccessreportrequest.h"
#include "getorganizationsaccessreportrequest_p.h"
#include "getorganizationsaccessreportresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetOrganizationsAccessReportRequest
 * \brief The GetOrganizationsAccessReportRequest class provides an interface for Iam GetOrganizationsAccessReport requests.
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
 * \sa IamClient::getOrganizationsAccessReport
 */

/*!
 * Constructs a copy of \a other.
 */
GetOrganizationsAccessReportRequest::GetOrganizationsAccessReportRequest(const GetOrganizationsAccessReportRequest &other)
    : IamRequest(new GetOrganizationsAccessReportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetOrganizationsAccessReportRequest object.
 */
GetOrganizationsAccessReportRequest::GetOrganizationsAccessReportRequest()
    : IamRequest(new GetOrganizationsAccessReportRequestPrivate(IamRequest::GetOrganizationsAccessReportAction, this))
{

}

/*!
 * \reimp
 */
bool GetOrganizationsAccessReportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetOrganizationsAccessReportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetOrganizationsAccessReportRequest::response(QNetworkReply * const reply) const
{
    return new GetOrganizationsAccessReportResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GetOrganizationsAccessReportRequestPrivate
 * \brief The GetOrganizationsAccessReportRequestPrivate class provides private implementation for GetOrganizationsAccessReportRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetOrganizationsAccessReportRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GetOrganizationsAccessReportRequestPrivate::GetOrganizationsAccessReportRequestPrivate(
    const IamRequest::Action action, GetOrganizationsAccessReportRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetOrganizationsAccessReportRequest
 * class' copy constructor.
 */
GetOrganizationsAccessReportRequestPrivate::GetOrganizationsAccessReportRequestPrivate(
    const GetOrganizationsAccessReportRequestPrivate &other, GetOrganizationsAccessReportRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
