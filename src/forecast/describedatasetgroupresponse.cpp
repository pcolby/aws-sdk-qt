// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedatasetgroupresponse.h"
#include "describedatasetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeDatasetGroupResponse
 * \brief The DescribeDatasetGroupResponse class provides an interace for Forecast DescribeDatasetGroup responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeDatasetGroup
 */

/*!
 * Constructs a DescribeDatasetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDatasetGroupResponse::DescribeDatasetGroupResponse(
        const DescribeDatasetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DescribeDatasetGroupResponsePrivate(this), parent)
{
    setRequest(new DescribeDatasetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDatasetGroupRequest * DescribeDatasetGroupResponse::request() const
{
    Q_D(const DescribeDatasetGroupResponse);
    return static_cast<const DescribeDatasetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DescribeDatasetGroup \a response.
 */
void DescribeDatasetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDatasetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DescribeDatasetGroupResponsePrivate
 * \brief The DescribeDatasetGroupResponsePrivate class provides private implementation for DescribeDatasetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeDatasetGroupResponsePrivate object with public implementation \a q.
 */
DescribeDatasetGroupResponsePrivate::DescribeDatasetGroupResponsePrivate(
    DescribeDatasetGroupResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DescribeDatasetGroup response element from \a xml.
 */
void DescribeDatasetGroupResponsePrivate::parseDescribeDatasetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDatasetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
