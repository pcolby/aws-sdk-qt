// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
