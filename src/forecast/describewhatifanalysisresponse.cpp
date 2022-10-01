// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
