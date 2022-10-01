// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelabelresponse.h"
#include "describelabelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::DescribeLabelResponse
 * \brief The DescribeLabelResponse class provides an interace for LookoutEquipment DescribeLabel responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::describeLabel
 */

/*!
 * Constructs a DescribeLabelResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLabelResponse::DescribeLabelResponse(
        const DescribeLabelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new DescribeLabelResponsePrivate(this), parent)
{
    setRequest(new DescribeLabelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLabelRequest * DescribeLabelResponse::request() const
{
    Q_D(const DescribeLabelResponse);
    return static_cast<const DescribeLabelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment DescribeLabel \a response.
 */
void DescribeLabelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLabelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::DescribeLabelResponsePrivate
 * \brief The DescribeLabelResponsePrivate class provides private implementation for DescribeLabelResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a DescribeLabelResponsePrivate object with public implementation \a q.
 */
DescribeLabelResponsePrivate::DescribeLabelResponsePrivate(
    DescribeLabelResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment DescribeLabel response element from \a xml.
 */
void DescribeLabelResponsePrivate::parseDescribeLabelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLabelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
