// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startinferenceschedulerresponse.h"
#include "startinferenceschedulerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::StartInferenceSchedulerResponse
 * \brief The StartInferenceSchedulerResponse class provides an interace for LookoutEquipment StartInferenceScheduler responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::startInferenceScheduler
 */

/*!
 * Constructs a StartInferenceSchedulerResponse object for \a reply to \a request, with parent \a parent.
 */
StartInferenceSchedulerResponse::StartInferenceSchedulerResponse(
        const StartInferenceSchedulerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new StartInferenceSchedulerResponsePrivate(this), parent)
{
    setRequest(new StartInferenceSchedulerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartInferenceSchedulerRequest * StartInferenceSchedulerResponse::request() const
{
    Q_D(const StartInferenceSchedulerResponse);
    return static_cast<const StartInferenceSchedulerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment StartInferenceScheduler \a response.
 */
void StartInferenceSchedulerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartInferenceSchedulerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::StartInferenceSchedulerResponsePrivate
 * \brief The StartInferenceSchedulerResponsePrivate class provides private implementation for StartInferenceSchedulerResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a StartInferenceSchedulerResponsePrivate object with public implementation \a q.
 */
StartInferenceSchedulerResponsePrivate::StartInferenceSchedulerResponsePrivate(
    StartInferenceSchedulerResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment StartInferenceScheduler response element from \a xml.
 */
void StartInferenceSchedulerResponsePrivate::parseStartInferenceSchedulerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartInferenceSchedulerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
