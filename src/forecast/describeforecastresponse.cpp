// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeforecastresponse.h"
#include "describeforecastresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeForecastResponse
 * \brief The DescribeForecastResponse class provides an interace for Forecast DescribeForecast responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeForecast
 */

/*!
 * Constructs a DescribeForecastResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeForecastResponse::DescribeForecastResponse(
        const DescribeForecastRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DescribeForecastResponsePrivate(this), parent)
{
    setRequest(new DescribeForecastRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeForecastRequest * DescribeForecastResponse::request() const
{
    Q_D(const DescribeForecastResponse);
    return static_cast<const DescribeForecastRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DescribeForecast \a response.
 */
void DescribeForecastResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeForecastResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DescribeForecastResponsePrivate
 * \brief The DescribeForecastResponsePrivate class provides private implementation for DescribeForecastResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeForecastResponsePrivate object with public implementation \a q.
 */
DescribeForecastResponsePrivate::DescribeForecastResponsePrivate(
    DescribeForecastResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DescribeForecast response element from \a xml.
 */
void DescribeForecastResponsePrivate::parseDescribeForecastResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeForecastResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
