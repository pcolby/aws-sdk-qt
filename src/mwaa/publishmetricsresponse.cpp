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

#include "publishmetricsresponse.h"
#include "publishmetricsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MWAA {

/*!
 * \class QtAws::MWAA::PublishMetricsResponse
 * \brief The PublishMetricsResponse class provides an interace for MWAA PublishMetrics responses.
 *
 * \inmodule QtAwsMWAA
 *
 *  <fullname>Amazon Managed Workflows for Apache Airflow</fullname>
 * 
 *  This section contains the Amazon Managed Workflows for Apache Airflow (MWAA) API reference documentation. For more
 *  information, see <a href="https://docs.aws.amazon.com/mwaa/latest/userguide/what-is-mwaa.html">What Is Amazon
 *
 * \sa MwaaClient::publishMetrics
 */

/*!
 * Constructs a PublishMetricsResponse object for \a reply to \a request, with parent \a parent.
 */
PublishMetricsResponse::PublishMetricsResponse(
        const PublishMetricsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MwaaResponse(new PublishMetricsResponsePrivate(this), parent)
{
    setRequest(new PublishMetricsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PublishMetricsRequest * PublishMetricsResponse::request() const
{
    return static_cast<const PublishMetricsRequest *>(MwaaResponse::request());
}

/*!
 * \reimp
 * Parses a successful MWAA PublishMetrics \a response.
 */
void PublishMetricsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PublishMetricsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MWAA::PublishMetricsResponsePrivate
 * \brief The PublishMetricsResponsePrivate class provides private implementation for PublishMetricsResponse.
 * \internal
 *
 * \inmodule QtAwsMWAA
 */

/*!
 * Constructs a PublishMetricsResponsePrivate object with public implementation \a q.
 */
PublishMetricsResponsePrivate::PublishMetricsResponsePrivate(
    PublishMetricsResponse * const q) : MwaaResponsePrivate(q)
{

}

/*!
 * Parses a MWAA PublishMetrics response element from \a xml.
 */
void PublishMetricsResponsePrivate::parsePublishMetricsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PublishMetricsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MWAA
} // namespace QtAws
