// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlensreviewreportresponse.h"
#include "getlensreviewreportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::GetLensReviewReportResponse
 * \brief The GetLensReviewReportResponse class provides an interace for WellArchitected GetLensReviewReport responses.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::getLensReviewReport
 */

/*!
 * Constructs a GetLensReviewReportResponse object for \a reply to \a request, with parent \a parent.
 */
GetLensReviewReportResponse::GetLensReviewReportResponse(
        const GetLensReviewReportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new GetLensReviewReportResponsePrivate(this), parent)
{
    setRequest(new GetLensReviewReportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLensReviewReportRequest * GetLensReviewReportResponse::request() const
{
    Q_D(const GetLensReviewReportResponse);
    return static_cast<const GetLensReviewReportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected GetLensReviewReport \a response.
 */
void GetLensReviewReportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLensReviewReportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::GetLensReviewReportResponsePrivate
 * \brief The GetLensReviewReportResponsePrivate class provides private implementation for GetLensReviewReportResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a GetLensReviewReportResponsePrivate object with public implementation \a q.
 */
GetLensReviewReportResponsePrivate::GetLensReviewReportResponsePrivate(
    GetLensReviewReportResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected GetLensReviewReport response element from \a xml.
 */
void GetLensReviewReportResponsePrivate::parseGetLensReviewReportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLensReviewReportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
