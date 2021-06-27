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

#include "getsampledataresponse.h"
#include "getsampledataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::GetSampleDataResponse
 * \brief The GetSampleDataResponse class provides an interace for LookoutMetrics GetSampleData responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::getSampleData
 */

/*!
 * Constructs a GetSampleDataResponse object for \a reply to \a request, with parent \a parent.
 */
GetSampleDataResponse::GetSampleDataResponse(
        const GetSampleDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new GetSampleDataResponsePrivate(this), parent)
{
    setRequest(new GetSampleDataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSampleDataRequest * GetSampleDataResponse::request() const
{
    return static_cast<const GetSampleDataRequest *>(LookoutMetricsResponse::request());
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics GetSampleData \a response.
 */
void GetSampleDataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSampleDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::GetSampleDataResponsePrivate
 * \brief The GetSampleDataResponsePrivate class provides private implementation for GetSampleDataResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a GetSampleDataResponsePrivate object with public implementation \a q.
 */
GetSampleDataResponsePrivate::GetSampleDataResponsePrivate(
    GetSampleDataResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics GetSampleData response element from \a xml.
 */
void GetSampleDataResponsePrivate::parseGetSampleDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSampleDataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
