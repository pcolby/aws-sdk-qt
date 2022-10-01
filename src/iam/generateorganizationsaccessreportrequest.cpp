// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "generateorganizationsaccessreportrequest.h"
#include "generateorganizationsaccessreportrequest_p.h"
#include "generateorganizationsaccessreportresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GenerateOrganizationsAccessReportRequest
 * \brief The GenerateOrganizationsAccessReportRequest class provides an interface for Iam GenerateOrganizationsAccessReport requests.
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
 * \sa IamClient::generateOrganizationsAccessReport
 */

/*!
 * Constructs a copy of \a other.
 */
GenerateOrganizationsAccessReportRequest::GenerateOrganizationsAccessReportRequest(const GenerateOrganizationsAccessReportRequest &other)
    : IamRequest(new GenerateOrganizationsAccessReportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GenerateOrganizationsAccessReportRequest object.
 */
GenerateOrganizationsAccessReportRequest::GenerateOrganizationsAccessReportRequest()
    : IamRequest(new GenerateOrganizationsAccessReportRequestPrivate(IamRequest::GenerateOrganizationsAccessReportAction, this))
{

}

/*!
 * \reimp
 */
bool GenerateOrganizationsAccessReportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GenerateOrganizationsAccessReportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GenerateOrganizationsAccessReportRequest::response(QNetworkReply * const reply) const
{
    return new GenerateOrganizationsAccessReportResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GenerateOrganizationsAccessReportRequestPrivate
 * \brief The GenerateOrganizationsAccessReportRequestPrivate class provides private implementation for GenerateOrganizationsAccessReportRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GenerateOrganizationsAccessReportRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GenerateOrganizationsAccessReportRequestPrivate::GenerateOrganizationsAccessReportRequestPrivate(
    const IamRequest::Action action, GenerateOrganizationsAccessReportRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GenerateOrganizationsAccessReportRequest
 * class' copy constructor.
 */
GenerateOrganizationsAccessReportRequestPrivate::GenerateOrganizationsAccessReportRequestPrivate(
    const GenerateOrganizationsAccessReportRequestPrivate &other, GenerateOrganizationsAccessReportRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
