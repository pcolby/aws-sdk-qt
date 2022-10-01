// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeexplainabilityexportresponse.h"
#include "describeexplainabilityexportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeExplainabilityExportResponse
 * \brief The DescribeExplainabilityExportResponse class provides an interace for Forecast DescribeExplainabilityExport responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeExplainabilityExport
 */

/*!
 * Constructs a DescribeExplainabilityExportResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeExplainabilityExportResponse::DescribeExplainabilityExportResponse(
        const DescribeExplainabilityExportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DescribeExplainabilityExportResponsePrivate(this), parent)
{
    setRequest(new DescribeExplainabilityExportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeExplainabilityExportRequest * DescribeExplainabilityExportResponse::request() const
{
    Q_D(const DescribeExplainabilityExportResponse);
    return static_cast<const DescribeExplainabilityExportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DescribeExplainabilityExport \a response.
 */
void DescribeExplainabilityExportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeExplainabilityExportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DescribeExplainabilityExportResponsePrivate
 * \brief The DescribeExplainabilityExportResponsePrivate class provides private implementation for DescribeExplainabilityExportResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeExplainabilityExportResponsePrivate object with public implementation \a q.
 */
DescribeExplainabilityExportResponsePrivate::DescribeExplainabilityExportResponsePrivate(
    DescribeExplainabilityExportResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DescribeExplainabilityExport response element from \a xml.
 */
void DescribeExplainabilityExportResponsePrivate::parseDescribeExplainabilityExportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeExplainabilityExportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
