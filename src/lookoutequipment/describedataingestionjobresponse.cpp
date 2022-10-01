// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
