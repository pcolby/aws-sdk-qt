// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "generatecredentialreportrequest.h"
#include "generatecredentialreportrequest_p.h"
#include "generatecredentialreportresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GenerateCredentialReportRequest
 * \brief The GenerateCredentialReportRequest class provides an interface for Iam GenerateCredentialReport requests.
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
 * \sa IamClient::generateCredentialReport
 */

/*!
 * Constructs a copy of \a other.
 */
GenerateCredentialReportRequest::GenerateCredentialReportRequest(const GenerateCredentialReportRequest &other)
    : IamRequest(new GenerateCredentialReportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GenerateCredentialReportRequest object.
 */
GenerateCredentialReportRequest::GenerateCredentialReportRequest()
    : IamRequest(new GenerateCredentialReportRequestPrivate(IamRequest::GenerateCredentialReportAction, this))
{

}

/*!
 * \reimp
 */
bool GenerateCredentialReportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GenerateCredentialReportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GenerateCredentialReportRequest::response(QNetworkReply * const reply) const
{
    return new GenerateCredentialReportResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GenerateCredentialReportRequestPrivate
 * \brief The GenerateCredentialReportRequestPrivate class provides private implementation for GenerateCredentialReportRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GenerateCredentialReportRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GenerateCredentialReportRequestPrivate::GenerateCredentialReportRequestPrivate(
    const IamRequest::Action action, GenerateCredentialReportRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GenerateCredentialReportRequest
 * class' copy constructor.
 */
GenerateCredentialReportRequestPrivate::GenerateCredentialReportRequestPrivate(
    const GenerateCredentialReportRequestPrivate &other, GenerateCredentialReportRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
