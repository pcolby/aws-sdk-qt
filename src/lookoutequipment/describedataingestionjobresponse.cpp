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

#include "describedataingestionjobresponse.h"
#include "describedataingestionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::DescribeDataIngestionJobResponse
 * \brief The DescribeDataIngestionJobResponse class provides an interace for LookoutEquipment DescribeDataIngestionJob responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::describeDataIngestionJob
 */

/*!
 * Constructs a DescribeDataIngestionJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDataIngestionJobResponse::DescribeDataIngestionJobResponse(
        const DescribeDataIngestionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new DescribeDataIngestionJobResponsePrivate(this), parent)
{
    setRequest(new DescribeDataIngestionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDataIngestionJobRequest * DescribeDataIngestionJobResponse::request() const
{
    Q_D(const DescribeDataIngestionJobResponse);
    return static_cast<const DescribeDataIngestionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment DescribeDataIngestionJob \a response.
 */
void DescribeDataIngestionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDataIngestionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::DescribeDataIngestionJobResponsePrivate
 * \brief The DescribeDataIngestionJobResponsePrivate class provides private implementation for DescribeDataIngestionJobResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a DescribeDataIngestionJobResponsePrivate object with public implementation \a q.
 */
DescribeDataIngestionJobResponsePrivate::DescribeDataIngestionJobResponsePrivate(
    DescribeDataIngestionJobResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment DescribeDataIngestionJob response element from \a xml.
 */
void DescribeDataIngestionJobResponsePrivate::parseDescribeDataIngestionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDataIngestionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
