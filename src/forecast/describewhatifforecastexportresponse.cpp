// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describewhatifforecastexportresponse.h"
#include "describewhatifforecastexportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeWhatIfForecastExportResponse
 * \brief The DescribeWhatIfForecastExportResponse class provides an interace for Forecast DescribeWhatIfForecastExport responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeWhatIfForecastExport
 */

/*!
 * Constructs a DescribeWhatIfForecastExportResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWhatIfForecastExportResponse::DescribeWhatIfForecastExportResponse(
        const DescribeWhatIfForecastExportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DescribeWhatIfForecastExportResponsePrivate(this), parent)
{
    setRequest(new DescribeWhatIfForecastExportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWhatIfForecastExportRequest * DescribeWhatIfForecastExportResponse::request() const
{
    Q_D(const DescribeWhatIfForecastExportResponse);
    return static_cast<const DescribeWhatIfForecastExportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DescribeWhatIfForecastExport \a response.
 */
void DescribeWhatIfForecastExportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWhatIfForecastExportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DescribeWhatIfForecastExportResponsePrivate
 * \brief The DescribeWhatIfForecastExportResponsePrivate class provides private implementation for DescribeWhatIfForecastExportResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeWhatIfForecastExportResponsePrivate object with public implementation \a q.
 */
DescribeWhatIfForecastExportResponsePrivate::DescribeWhatIfForecastExportResponsePrivate(
    DescribeWhatIfForecastExportResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DescribeWhatIfForecastExport response element from \a xml.
 */
void DescribeWhatIfForecastExportResponsePrivate::parseDescribeWhatIfForecastExportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWhatIfForecastExportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
