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

#include "describealertresponse.h"
#include "describealertresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::DescribeAlertResponse
 * \brief The DescribeAlertResponse class provides an interace for LookoutMetrics DescribeAlert responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::describeAlert
 */

/*!
 * Constructs a DescribeAlertResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAlertResponse::DescribeAlertResponse(
        const DescribeAlertRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new DescribeAlertResponsePrivate(this), parent)
{
    setRequest(new DescribeAlertRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAlertRequest * DescribeAlertResponse::request() const
{
    return static_cast<const DescribeAlertRequest *>(LookoutMetricsResponse::request());
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics DescribeAlert \a response.
 */
void DescribeAlertResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAlertResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::DescribeAlertResponsePrivate
 * \brief The DescribeAlertResponsePrivate class provides private implementation for DescribeAlertResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a DescribeAlertResponsePrivate object with public implementation \a q.
 */
DescribeAlertResponsePrivate::DescribeAlertResponsePrivate(
    DescribeAlertResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics DescribeAlert response element from \a xml.
 */
void DescribeAlertResponsePrivate::parseDescribeAlertResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAlertResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
