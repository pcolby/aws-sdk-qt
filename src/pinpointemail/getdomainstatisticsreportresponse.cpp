/*
    Copyright 2013-2018 Paul Colby

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

#include "getdomainstatisticsreportresponse.h"
#include "getdomainstatisticsreportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointEmail {

/*!
 * \class QtAws::PinpointEmail::GetDomainStatisticsReportResponse
 * \brief The GetDomainStatisticsReportResponse class provides an interace for PinpointEmail GetDomainStatisticsReport responses.
 *
 * \inmodule QtAwsPinpointEmail
 *
 *  <fullname>Amazon Pinpoint Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/pinpoint">Amazon Pinpoint</a> Email
 *  API, version 1.0. This document is best used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon Pinpoint Developer
 * 
 *  Guide</a>>
 * 
 *  The Amazon Pinpoint Email API is available in the US East (N. Virginia), US West (Oregon) and the EU (Ireland) Regions
 *  at the following
 * 
 *  endpoints> <ul> <li>
 * 
 *  <b>US East (N. Virginia)</b>: <code>email.us-east-1.amazonaws.com</code>
 * 
 *  </p </li> <li>
 * 
 *  <b>US West (Oregon)</b>: <code>email.us-west-2.amazonaws.com</code>
 * 
 *  </p </li> <li>
 * 
 *  <b>EU (Ireland)</b>: <code>email.eu-west-1.amazonaws.com</code>
 *
 * \sa PinpointEmailClient::getDomainStatisticsReport
 */

/*!
 * Constructs a GetDomainStatisticsReportResponse object for \a reply to \a request, with parent \a parent.
 */
GetDomainStatisticsReportResponse::GetDomainStatisticsReportResponse(
        const GetDomainStatisticsReportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointEmailResponse(new GetDomainStatisticsReportResponsePrivate(this), parent)
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
 * Parses a successful PinpointEmail GetDomainStatisticsReport \a response.
 */
void GetDomainStatisticsReportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDomainStatisticsReportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointEmail::GetDomainStatisticsReportResponsePrivate
 * \brief The GetDomainStatisticsReportResponsePrivate class provides private implementation for GetDomainStatisticsReportResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointEmail
 */

/*!
 * Constructs a GetDomainStatisticsReportResponsePrivate object with public implementation \a q.
 */
GetDomainStatisticsReportResponsePrivate::GetDomainStatisticsReportResponsePrivate(
    GetDomainStatisticsReportResponse * const q) : PinpointEmailResponsePrivate(q)
{

}

/*!
 * Parses a PinpointEmail GetDomainStatisticsReport response element from \a xml.
 */
void GetDomainStatisticsReportResponsePrivate::parseGetDomainStatisticsReportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDomainStatisticsReportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointEmail
} // namespace QtAws
