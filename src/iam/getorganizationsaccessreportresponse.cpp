/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getorganizationsaccessreportresponse.h"
#include "getorganizationsaccessreportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::GetOrganizationsAccessReportResponse
 * \brief The GetOrganizationsAccessReportResponse class provides an interace for IAM GetOrganizationsAccessReport responses.
 *
 * \inmodule QtAwsIAM
 *
 *  <fullname>AWS Identity and Access Management</fullname>
 * 
 *  AWS Identity and Access Management (IAM) is a web service for securely controlling access to AWS services. With IAM, you
 *  can centrally manage users, security credentials such as access keys, and permissions that control which AWS resources
 *  users and applications can access. For more information about IAM, see <a href="http://aws.amazon.com/iam/">AWS Identity
 *  and Access Management (IAM)</a> and the <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">AWS Identity and
 *  Access Management User
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
 * Parses a successful IAM GetOrganizationsAccessReport \a response.
 */
void GetOrganizationsAccessReportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetOrganizationsAccessReportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IAM::GetOrganizationsAccessReportResponsePrivate
 * \brief The GetOrganizationsAccessReportResponsePrivate class provides private implementation for GetOrganizationsAccessReportResponse.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a GetOrganizationsAccessReportResponsePrivate object with public implementation \a q.
 */
GetOrganizationsAccessReportResponsePrivate::GetOrganizationsAccessReportResponsePrivate(
    GetOrganizationsAccessReportResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a IAM GetOrganizationsAccessReport response element from \a xml.
 */
void GetOrganizationsAccessReportResponsePrivate::parseGetOrganizationsAccessReportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOrganizationsAccessReportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IAM
} // namespace QtAws
