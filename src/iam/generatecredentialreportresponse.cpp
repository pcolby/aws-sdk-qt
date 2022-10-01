// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "generatecredentialreportresponse.h"
#include "generatecredentialreportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GenerateCredentialReportResponse
 * \brief The GenerateCredentialReportResponse class provides an interace for Iam GenerateCredentialReport responses.
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
 * Constructs a GenerateCredentialReportResponse object for \a reply to \a request, with parent \a parent.
 */
GenerateCredentialReportResponse::GenerateCredentialReportResponse(
        const GenerateCredentialReportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new GenerateCredentialReportResponsePrivate(this), parent)
{
    setRequest(new GenerateCredentialReportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GenerateCredentialReportRequest * GenerateCredentialReportResponse::request() const
{
    Q_D(const GenerateCredentialReportResponse);
    return static_cast<const GenerateCredentialReportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam GenerateCredentialReport \a response.
 */
void GenerateCredentialReportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GenerateCredentialReportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::GenerateCredentialReportResponsePrivate
 * \brief The GenerateCredentialReportResponsePrivate class provides private implementation for GenerateCredentialReportResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GenerateCredentialReportResponsePrivate object with public implementation \a q.
 */
GenerateCredentialReportResponsePrivate::GenerateCredentialReportResponsePrivate(
    GenerateCredentialReportResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam GenerateCredentialReport response element from \a xml.
 */
void GenerateCredentialReportResponsePrivate::parseGenerateCredentialReportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GenerateCredentialReportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
