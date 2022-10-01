// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getassessmentreportresponse.h"
#include "getassessmentreportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::GetAssessmentReportResponse
 * \brief The GetAssessmentReportResponse class provides an interace for Inspector GetAssessmentReport responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::getAssessmentReport
 */

/*!
 * Constructs a GetAssessmentReportResponse object for \a reply to \a request, with parent \a parent.
 */
GetAssessmentReportResponse::GetAssessmentReportResponse(
        const GetAssessmentReportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new GetAssessmentReportResponsePrivate(this), parent)
{
    setRequest(new GetAssessmentReportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAssessmentReportRequest * GetAssessmentReportResponse::request() const
{
    Q_D(const GetAssessmentReportResponse);
    return static_cast<const GetAssessmentReportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector GetAssessmentReport \a response.
 */
void GetAssessmentReportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAssessmentReportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::GetAssessmentReportResponsePrivate
 * \brief The GetAssessmentReportResponsePrivate class provides private implementation for GetAssessmentReportResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a GetAssessmentReportResponsePrivate object with public implementation \a q.
 */
GetAssessmentReportResponsePrivate::GetAssessmentReportResponsePrivate(
    GetAssessmentReportResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector GetAssessmentReport response element from \a xml.
 */
void GetAssessmentReportResponsePrivate::parseGetAssessmentReportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAssessmentReportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
