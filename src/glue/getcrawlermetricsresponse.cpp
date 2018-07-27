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

#include "getcrawlermetricsresponse.h"
#include "getcrawlermetricsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetCrawlerMetricsResponse
 * \brief The GetCrawlerMetricsResponse class provides an interace for Glue GetCrawlerMetrics responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getCrawlerMetrics
 */

/*!
 * Constructs a GetCrawlerMetricsResponse object for \a reply to \a request, with parent \a parent.
 */
GetCrawlerMetricsResponse::GetCrawlerMetricsResponse(
        const GetCrawlerMetricsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetCrawlerMetricsResponsePrivate(this), parent)
{
    setRequest(new GetCrawlerMetricsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCrawlerMetricsRequest * GetCrawlerMetricsResponse::request() const
{
    Q_D(const GetCrawlerMetricsResponse);
    return static_cast<const GetCrawlerMetricsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetCrawlerMetrics \a response.
 */
void GetCrawlerMetricsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCrawlerMetricsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetCrawlerMetricsResponsePrivate
 * \brief The GetCrawlerMetricsResponsePrivate class provides private implementation for GetCrawlerMetricsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetCrawlerMetricsResponsePrivate object with public implementation \a q.
 */
GetCrawlerMetricsResponsePrivate::GetCrawlerMetricsResponsePrivate(
    GetCrawlerMetricsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetCrawlerMetrics response element from \a xml.
 */
void GetCrawlerMetricsResponsePrivate::parseGetCrawlerMetricsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCrawlerMetricsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
