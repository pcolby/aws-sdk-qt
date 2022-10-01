// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeinferenceschedulerresponse.h"
#include "describeinferenceschedulerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::DescribeInferenceSchedulerResponse
 * \brief The DescribeInferenceSchedulerResponse class provides an interace for LookoutEquipment DescribeInferenceScheduler responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::describeInferenceScheduler
 */

/*!
 * Constructs a DescribeInferenceSchedulerResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeInferenceSchedulerResponse::DescribeInferenceSchedulerResponse(
        const DescribeInferenceSchedulerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new DescribeInferenceSchedulerResponsePrivate(this), parent)
{
    setRequest(new DescribeInferenceSchedulerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeInferenceSchedulerRequest * DescribeInferenceSchedulerResponse::request() const
{
    Q_D(const DescribeInferenceSchedulerResponse);
    return static_cast<const DescribeInferenceSchedulerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment DescribeInferenceScheduler \a response.
 */
void DescribeInferenceSchedulerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeInferenceSchedulerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::DescribeInferenceSchedulerResponsePrivate
 * \brief The DescribeInferenceSchedulerResponsePrivate class provides private implementation for DescribeInferenceSchedulerResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a DescribeInferenceSchedulerResponsePrivate object with public implementation \a q.
 */
DescribeInferenceSchedulerResponsePrivate::DescribeInferenceSchedulerResponsePrivate(
    DescribeInferenceSchedulerResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment DescribeInferenceScheduler response element from \a xml.
 */
void DescribeInferenceSchedulerResponsePrivate::parseDescribeInferenceSchedulerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInferenceSchedulerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
