// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getorganizationsaccessreportresponse.h"
#include "getorganizationsaccessreportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetOrganizationsAccessReportResponse
 * \brief The GetOrganizationsAccessReportResponse class provides an interace for Iam GetOrganizationsAccessReport responses.
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
 * Constructs a GetOrganizationsAccessReportResponse object for \a reply to \a request, with parent \a parent.
 */
GetOrganizationsAccessReportResponse::GetOrganizationsAccessReportResponse(
        const GetOrganizationsAccessReportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new GetOrganizationsAccessReportResponsePrivate(this), parent)
{
    setRequest(new GetOrganizationsAccessReportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetOrganizationsAccessReportRequest * GetOrganizationsAccessReportResponse::request() const
{
    Q_D(const GetOrganizationsAccessReportResponse);
    return static_cast<const GetOrganizationsAccessReportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam GetOrganizationsAccessReport \a response.
 */
void GetOrganizationsAccessReportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetOrganizationsAccessReportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::GetOrganizationsAccessReportResponsePrivate
 * \brief The GetOrganizationsAccessReportResponsePrivate class provides private implementation for GetOrganizationsAccessReportResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetOrganizationsAccessReportResponsePrivate object with public implementation \a q.
 */
GetOrganizationsAccessReportResponsePrivate::GetOrganizationsAccessReportResponsePrivate(
    GetOrganizationsAccessReportResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam GetOrganizationsAccessReport response element from \a xml.
 */
void GetOrganizationsAccessReportResponsePrivate::parseGetOrganizationsAccessReportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOrganizationsAccessReportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
