// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopinferenceschedulerresponse.h"
#include "stopinferenceschedulerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::StopInferenceSchedulerResponse
 * \brief The StopInferenceSchedulerResponse class provides an interace for LookoutEquipment StopInferenceScheduler responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::stopInferenceScheduler
 */

/*!
 * Constructs a StopInferenceSchedulerResponse object for \a reply to \a request, with parent \a parent.
 */
StopInferenceSchedulerResponse::StopInferenceSchedulerResponse(
        const StopInferenceSchedulerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new StopInferenceSchedulerResponsePrivate(this), parent)
{
    setRequest(new StopInferenceSchedulerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopInferenceSchedulerRequest * StopInferenceSchedulerResponse::request() const
{
    Q_D(const StopInferenceSchedulerResponse);
    return static_cast<const StopInferenceSchedulerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment StopInferenceScheduler \a response.
 */
void StopInferenceSchedulerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopInferenceSchedulerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::StopInferenceSchedulerResponsePrivate
 * \brief The StopInferenceSchedulerResponsePrivate class provides private implementation for StopInferenceSchedulerResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a StopInferenceSchedulerResponsePrivate object with public implementation \a q.
 */
StopInferenceSchedulerResponsePrivate::StopInferenceSchedulerResponsePrivate(
    StopInferenceSchedulerResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment StopInferenceScheduler response element from \a xml.
 */
void StopInferenceSchedulerResponsePrivate::parseStopInferenceSchedulerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopInferenceSchedulerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
