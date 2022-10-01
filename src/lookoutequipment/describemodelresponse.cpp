// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemodelresponse.h"
#include "describemodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::DescribeModelResponse
 * \brief The DescribeModelResponse class provides an interace for LookoutEquipment DescribeModel responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::describeModel
 */

/*!
 * Constructs a DescribeModelResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeModelResponse::DescribeModelResponse(
        const DescribeModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new DescribeModelResponsePrivate(this), parent)
{
    setRequest(new DescribeModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeModelRequest * DescribeModelResponse::request() const
{
    Q_D(const DescribeModelResponse);
    return static_cast<const DescribeModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment DescribeModel \a response.
 */
void DescribeModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::DescribeModelResponsePrivate
 * \brief The DescribeModelResponsePrivate class provides private implementation for DescribeModelResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a DescribeModelResponsePrivate object with public implementation \a q.
 */
DescribeModelResponsePrivate::DescribeModelResponsePrivate(
    DescribeModelResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment DescribeModel response element from \a xml.
 */
void DescribeModelResponsePrivate::parseDescribeModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
