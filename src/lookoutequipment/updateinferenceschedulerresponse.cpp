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
