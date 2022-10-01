// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "generateorganizationsaccessreportresponse.h"
#include "generateorganizationsaccessreportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GenerateOrganizationsAccessReportResponse
 * \brief The GenerateOrganizationsAccessReportResponse class provides an interace for Iam GenerateOrganizationsAccessReport responses.
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
 * Constructs a GenerateOrganizationsAccessReportResponse object for \a reply to \a request, with parent \a parent.
 */
GenerateOrganizationsAccessReportResponse::GenerateOrganizationsAccessReportResponse(
        const GenerateOrganizationsAccessReportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new GenerateOrganizationsAccessReportResponsePrivate(this), parent)
{
    setRequest(new GenerateOrganizationsAccessReportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GenerateOrganizationsAccessReportRequest * GenerateOrganizationsAccessReportResponse::request() const
{
    Q_D(const GenerateOrganizationsAccessReportResponse);
    return static_cast<const GenerateOrganizationsAccessReportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam GenerateOrganizationsAccessReport \a response.
 */
void GenerateOrganizationsAccessReportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GenerateOrganizationsAccessReportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::GenerateOrganizationsAccessReportResponsePrivate
 * \brief The GenerateOrganizationsAccessReportResponsePrivate class provides private implementation for GenerateOrganizationsAccessReportResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GenerateOrganizationsAccessReportResponsePrivate object with public implementation \a q.
 */
GenerateOrganizationsAccessReportResponsePrivate::GenerateOrganizationsAccessReportResponsePrivate(
    GenerateOrganizationsAccessReportResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam GenerateOrganizationsAccessReport response element from \a xml.
 */
void GenerateOrganizationsAccessReportResponsePrivate::parseGenerateOrganizationsAccessReportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GenerateOrganizationsAccessReportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
