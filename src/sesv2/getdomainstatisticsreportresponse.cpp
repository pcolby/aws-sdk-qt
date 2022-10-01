// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdomainstatisticsreportresponse.h"
#include "getdomainstatisticsreportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetDomainStatisticsReportResponse
 * \brief The GetDomainStatisticsReportResponse class provides an interace for SESv2 GetDomainStatisticsReport responses.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::getDomainStatisticsReport
 */

/*!
 * Constructs a GetDomainStatisticsReportResponse object for \a reply to \a request, with parent \a parent.
 */
GetDomainStatisticsReportResponse::GetDomainStatisticsReportResponse(
        const GetDomainStatisticsReportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new GetDomainStatisticsReportResponsePrivate(this), parent)
{
    setRequest(new GetDomainStatisticsReportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDomainStatisticsReportRequest * GetDomainStatisticsReportResponse::request() const
{
    Q_D(const GetDomainStatisticsReportResponse);
    return static_cast<const GetDomainStatisticsReportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 GetDomainStatisticsReport \a response.
 */
void GetDomainStatisticsReportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDomainStatisticsReportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::GetDomainStatisticsReportResponsePrivate
 * \brief The GetDomainStatisticsReportResponsePrivate class provides private implementation for GetDomainStatisticsReportResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetDomainStatisticsReportResponsePrivate object with public implementation \a q.
 */
GetDomainStatisticsReportResponsePrivate::GetDomainStatisticsReportResponsePrivate(
    GetDomainStatisticsReportResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 GetDomainStatisticsReport response element from \a xml.
 */
void GetDomainStatisticsReportResponsePrivate::parseGetDomainStatisticsReportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDomainStatisticsReportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
