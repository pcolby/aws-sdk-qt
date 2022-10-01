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

#include "describewhatifanalysisresponse.h"
#include "describewhatifanalysisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeWhatIfAnalysisResponse
 * \brief The DescribeWhatIfAnalysisResponse class provides an interace for Forecast DescribeWhatIfAnalysis responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeWhatIfAnalysis
 */

/*!
 * Constructs a DescribeWhatIfAnalysisResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWhatIfAnalysisResponse::DescribeWhatIfAnalysisResponse(
        const DescribeWhatIfAnalysisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DescribeWhatIfAnalysisResponsePrivate(this), parent)
{
    setRequest(new DescribeWhatIfAnalysisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWhatIfAnalysisRequest * DescribeWhatIfAnalysisResponse::request() const
{
    Q_D(const DescribeWhatIfAnalysisResponse);
    return static_cast<const DescribeWhatIfAnalysisRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DescribeWhatIfAnalysis \a response.
 */
void DescribeWhatIfAnalysisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWhatIfAnalysisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DescribeWhatIfAnalysisResponsePrivate
 * \brief The DescribeWhatIfAnalysisResponsePrivate class provides private implementation for DescribeWhatIfAnalysisResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeWhatIfAnalysisResponsePrivate object with public implementation \a q.
 */
DescribeWhatIfAnalysisResponsePrivate::DescribeWhatIfAnalysisResponsePrivate(
    DescribeWhatIfAnalysisResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DescribeWhatIfAnalysis response element from \a xml.
 */
void DescribeWhatIfAnalysisResponsePrivate::parseDescribeWhatIfAnalysisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWhatIfAnalysisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
