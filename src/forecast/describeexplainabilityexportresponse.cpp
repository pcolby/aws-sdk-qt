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
