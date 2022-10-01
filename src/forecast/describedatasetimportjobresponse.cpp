// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedatasetimportjobresponse.h"
#include "describedatasetimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeDatasetImportJobResponse
 * \brief The DescribeDatasetImportJobResponse class provides an interace for Forecast DescribeDatasetImportJob responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeDatasetImportJob
 */

/*!
 * Constructs a DescribeDatasetImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDatasetImportJobResponse::DescribeDatasetImportJobResponse(
        const DescribeDatasetImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DescribeDatasetImportJobResponsePrivate(this), parent)
{
    setRequest(new DescribeDatasetImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDatasetImportJobRequest * DescribeDatasetImportJobResponse::request() const
{
    Q_D(const DescribeDatasetImportJobResponse);
    return static_cast<const DescribeDatasetImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DescribeDatasetImportJob \a response.
 */
void DescribeDatasetImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDatasetImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DescribeDatasetImportJobResponsePrivate
 * \brief The DescribeDatasetImportJobResponsePrivate class provides private implementation for DescribeDatasetImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeDatasetImportJobResponsePrivate object with public implementation \a q.
 */
DescribeDatasetImportJobResponsePrivate::DescribeDatasetImportJobResponsePrivate(
    DescribeDatasetImportJobResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DescribeDatasetImportJob response element from \a xml.
 */
void DescribeDatasetImportJobResponsePrivate::parseDescribeDatasetImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDatasetImportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
