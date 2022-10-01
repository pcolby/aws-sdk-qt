// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcredentialreportrequest.h"
#include "getcredentialreportrequest_p.h"
#include "getcredentialreportresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetCredentialReportRequest
 * \brief The GetCredentialReportRequest class provides an interface for Iam GetCredentialReport requests.
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
 * \sa IamClient::getCredentialReport
 */

/*!
 * Constructs a copy of \a other.
 */
GetCredentialReportRequest::GetCredentialReportRequest(const GetCredentialReportRequest &other)
    : IamRequest(new GetCredentialReportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCredentialReportRequest object.
 */
GetCredentialReportRequest::GetCredentialReportRequest()
    : IamRequest(new GetCredentialReportRequestPrivate(IamRequest::GetCredentialReportAction, this))
{

}

/*!
 * \reimp
 */
bool GetCredentialReportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCredentialReportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCredentialReportRequest::response(QNetworkReply * const reply) const
{
    return new GetCredentialReportResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GetCredentialReportRequestPrivate
 * \brief The GetCredentialReportRequestPrivate class provides private implementation for GetCredentialReportRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetCredentialReportRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GetCredentialReportRequestPrivate::GetCredentialReportRequestPrivate(
    const IamRequest::Action action, GetCredentialReportRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCredentialReportRequest
 * class' copy constructor.
 */
GetCredentialReportRequestPrivate::GetCredentialReportRequestPrivate(
    const GetCredentialReportRequestPrivate &other, GetCredentialReportRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
