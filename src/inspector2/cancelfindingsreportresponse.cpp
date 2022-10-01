// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelfindingsreportresponse.h"
#include "cancelfindingsreportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::CancelFindingsReportResponse
 * \brief The CancelFindingsReportResponse class provides an interace for Inspector2 CancelFindingsReport responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::cancelFindingsReport
 */

/*!
 * Constructs a CancelFindingsReportResponse object for \a reply to \a request, with parent \a parent.
 */
CancelFindingsReportResponse::CancelFindingsReportResponse(
        const CancelFindingsReportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new CancelFindingsReportResponsePrivate(this), parent)
{
    setRequest(new CancelFindingsReportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelFindingsReportRequest * CancelFindingsReportResponse::request() const
{
    Q_D(const CancelFindingsReportResponse);
    return static_cast<const CancelFindingsReportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 CancelFindingsReport \a response.
 */
void CancelFindingsReportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelFindingsReportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::CancelFindingsReportResponsePrivate
 * \brief The CancelFindingsReportResponsePrivate class provides private implementation for CancelFindingsReportResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a CancelFindingsReportResponsePrivate object with public implementation \a q.
 */
CancelFindingsReportResponsePrivate::CancelFindingsReportResponsePrivate(
    CancelFindingsReportResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 CancelFindingsReport response element from \a xml.
 */
void CancelFindingsReportResponsePrivate::parseCancelFindingsReportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelFindingsReportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
