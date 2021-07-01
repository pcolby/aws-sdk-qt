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

#include "deleteinferenceschedulerresponse.h"
#include "deleteinferenceschedulerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::DeleteInferenceSchedulerResponse
 * \brief The DeleteInferenceSchedulerResponse class provides an interace for LookoutEquipment DeleteInferenceScheduler responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::deleteInferenceScheduler
 */

/*!
 * Constructs a DeleteInferenceSchedulerResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteInferenceSchedulerResponse::DeleteInferenceSchedulerResponse(
        const DeleteInferenceSchedulerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new DeleteInferenceSchedulerResponsePrivate(this), parent)
{
    setRequest(new DeleteInferenceSchedulerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteInferenceSchedulerRequest * DeleteInferenceSchedulerResponse::request() const
{
    Q_D(const DeleteInferenceSchedulerResponse);
    return static_cast<const DeleteInferenceSchedulerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment DeleteInferenceScheduler \a response.
 */
void DeleteInferenceSchedulerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteInferenceSchedulerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::DeleteInferenceSchedulerResponsePrivate
 * \brief The DeleteInferenceSchedulerResponsePrivate class provides private implementation for DeleteInferenceSchedulerResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a DeleteInferenceSchedulerResponsePrivate object with public implementation \a q.
 */
DeleteInferenceSchedulerResponsePrivate::DeleteInferenceSchedulerResponsePrivate(
    DeleteInferenceSchedulerResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment DeleteInferenceScheduler response element from \a xml.
 */
void DeleteInferenceSchedulerResponsePrivate::parseDeleteInferenceSchedulerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInferenceSchedulerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
