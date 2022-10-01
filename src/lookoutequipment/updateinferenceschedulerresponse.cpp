// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateinferenceschedulerresponse.h"
#include "updateinferenceschedulerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::UpdateInferenceSchedulerResponse
 * \brief The UpdateInferenceSchedulerResponse class provides an interace for LookoutEquipment UpdateInferenceScheduler responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::updateInferenceScheduler
 */

/*!
 * Constructs a UpdateInferenceSchedulerResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateInferenceSchedulerResponse::UpdateInferenceSchedulerResponse(
        const UpdateInferenceSchedulerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new UpdateInferenceSchedulerResponsePrivate(this), parent)
{
    setRequest(new UpdateInferenceSchedulerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateInferenceSchedulerRequest * UpdateInferenceSchedulerResponse::request() const
{
    Q_D(const UpdateInferenceSchedulerResponse);
    return static_cast<const UpdateInferenceSchedulerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment UpdateInferenceScheduler \a response.
 */
void UpdateInferenceSchedulerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateInferenceSchedulerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::UpdateInferenceSchedulerResponsePrivate
 * \brief The UpdateInferenceSchedulerResponsePrivate class provides private implementation for UpdateInferenceSchedulerResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a UpdateInferenceSchedulerResponsePrivate object with public implementation \a q.
 */
UpdateInferenceSchedulerResponsePrivate::UpdateInferenceSchedulerResponsePrivate(
    UpdateInferenceSchedulerResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment UpdateInferenceScheduler response element from \a xml.
 */
void UpdateInferenceSchedulerResponsePrivate::parseUpdateInferenceSchedulerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateInferenceSchedulerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
