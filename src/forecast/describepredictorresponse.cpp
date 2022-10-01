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

#include "describepredictorresponse.h"
#include "describepredictorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribePredictorResponse
 * \brief The DescribePredictorResponse class provides an interace for Forecast DescribePredictor responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describePredictor
 */

/*!
 * Constructs a DescribePredictorResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePredictorResponse::DescribePredictorResponse(
        const DescribePredictorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DescribePredictorResponsePrivate(this), parent)
{
    setRequest(new DescribePredictorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePredictorRequest * DescribePredictorResponse::request() const
{
    Q_D(const DescribePredictorResponse);
    return static_cast<const DescribePredictorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DescribePredictor \a response.
 */
void DescribePredictorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePredictorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DescribePredictorResponsePrivate
 * \brief The DescribePredictorResponsePrivate class provides private implementation for DescribePredictorResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribePredictorResponsePrivate object with public implementation \a q.
 */
DescribePredictorResponsePrivate::DescribePredictorResponsePrivate(
    DescribePredictorResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DescribePredictor response element from \a xml.
 */
void DescribePredictorResponsePrivate::parseDescribePredictorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePredictorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
