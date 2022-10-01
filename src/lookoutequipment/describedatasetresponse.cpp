// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedatasetresponse.h"
#include "describedatasetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::DescribeDatasetResponse
 * \brief The DescribeDatasetResponse class provides an interace for LookoutEquipment DescribeDataset responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::describeDataset
 */

/*!
 * Constructs a DescribeDatasetResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDatasetResponse::DescribeDatasetResponse(
        const DescribeDatasetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new DescribeDatasetResponsePrivate(this), parent)
{
    setRequest(new DescribeDatasetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDatasetRequest * DescribeDatasetResponse::request() const
{
    Q_D(const DescribeDatasetResponse);
    return static_cast<const DescribeDatasetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment DescribeDataset \a response.
 */
void DescribeDatasetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDatasetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::DescribeDatasetResponsePrivate
 * \brief The DescribeDatasetResponsePrivate class provides private implementation for DescribeDatasetResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a DescribeDatasetResponsePrivate object with public implementation \a q.
 */
DescribeDatasetResponsePrivate::DescribeDatasetResponsePrivate(
    DescribeDatasetResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment DescribeDataset response element from \a xml.
 */
void DescribeDatasetResponsePrivate::parseDescribeDatasetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDatasetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
