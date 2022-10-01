// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfindingsreportstatusresponse.h"
#include "getfindingsreportstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::GetFindingsReportStatusResponse
 * \brief The GetFindingsReportStatusResponse class provides an interace for Inspector2 GetFindingsReportStatus responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::getFindingsReportStatus
 */

/*!
 * Constructs a GetFindingsReportStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetFindingsReportStatusResponse::GetFindingsReportStatusResponse(
        const GetFindingsReportStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new GetFindingsReportStatusResponsePrivate(this), parent)
{
    setRequest(new GetFindingsReportStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFindingsReportStatusRequest * GetFindingsReportStatusResponse::request() const
{
    Q_D(const GetFindingsReportStatusResponse);
    return static_cast<const GetFindingsReportStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 GetFindingsReportStatus \a response.
 */
void GetFindingsReportStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFindingsReportStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::GetFindingsReportStatusResponsePrivate
 * \brief The GetFindingsReportStatusResponsePrivate class provides private implementation for GetFindingsReportStatusResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a GetFindingsReportStatusResponsePrivate object with public implementation \a q.
 */
GetFindingsReportStatusResponsePrivate::GetFindingsReportStatusResponsePrivate(
    GetFindingsReportStatusResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 GetFindingsReportStatus response element from \a xml.
 */
void GetFindingsReportStatusResponsePrivate::parseGetFindingsReportStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFindingsReportStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
