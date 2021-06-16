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
