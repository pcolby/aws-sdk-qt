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

#include "describeautopredictorresponse.h"
#include "describeautopredictorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeAutoPredictorResponse
 * \brief The DescribeAutoPredictorResponse class provides an interace for Forecast DescribeAutoPredictor responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeAutoPredictor
 */

/*!
 * Constructs a DescribeAutoPredictorResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAutoPredictorResponse::DescribeAutoPredictorResponse(
        const DescribeAutoPredictorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DescribeAutoPredictorResponsePrivate(this), parent)
{
    setRequest(new DescribeAutoPredictorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAutoPredictorRequest * DescribeAutoPredictorResponse::request() const
{
    Q_D(const DescribeAutoPredictorResponse);
    return static_cast<const DescribeAutoPredictorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DescribeAutoPredictor \a response.
 */
void DescribeAutoPredictorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAutoPredictorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DescribeAutoPredictorResponsePrivate
 * \brief The DescribeAutoPredictorResponsePrivate class provides private implementation for DescribeAutoPredictorResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeAutoPredictorResponsePrivate object with public implementation \a q.
 */
DescribeAutoPredictorResponsePrivate::DescribeAutoPredictorResponsePrivate(
    DescribeAutoPredictorResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DescribeAutoPredictor response element from \a xml.
 */
void DescribeAutoPredictorResponsePrivate::parseDescribeAutoPredictorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAutoPredictorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
