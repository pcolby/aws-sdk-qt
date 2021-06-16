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

#include "createinferenceschedulerresponse.h"
#include "createinferenceschedulerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::CreateInferenceSchedulerResponse
 * \brief The CreateInferenceSchedulerResponse class provides an interace for LookoutEquipment CreateInferenceScheduler responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::createInferenceScheduler
 */

/*!
 * Constructs a CreateInferenceSchedulerResponse object for \a reply to \a request, with parent \a parent.
 */
CreateInferenceSchedulerResponse::CreateInferenceSchedulerResponse(
        const CreateInferenceSchedulerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new CreateInferenceSchedulerResponsePrivate(this), parent)
{
    setRequest(new CreateInferenceSchedulerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateInferenceSchedulerRequest * CreateInferenceSchedulerResponse::request() const
{
    Q_D(const CreateInferenceSchedulerResponse);
    return static_cast<const CreateInferenceSchedulerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment CreateInferenceScheduler \a response.
 */
void CreateInferenceSchedulerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateInferenceSchedulerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::CreateInferenceSchedulerResponsePrivate
 * \brief The CreateInferenceSchedulerResponsePrivate class provides private implementation for CreateInferenceSchedulerResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a CreateInferenceSchedulerResponsePrivate object with public implementation \a q.
 */
CreateInferenceSchedulerResponsePrivate::CreateInferenceSchedulerResponsePrivate(
    CreateInferenceSchedulerResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment CreateInferenceScheduler response element from \a xml.
 */
void CreateInferenceSchedulerResponsePrivate::parseCreateInferenceSchedulerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInferenceSchedulerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
