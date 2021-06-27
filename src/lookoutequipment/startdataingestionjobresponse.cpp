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

#include "startdataingestionjobresponse.h"
#include "startdataingestionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::StartDataIngestionJobResponse
 * \brief The StartDataIngestionJobResponse class provides an interace for LookoutEquipment StartDataIngestionJob responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::startDataIngestionJob
 */

/*!
 * Constructs a StartDataIngestionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartDataIngestionJobResponse::StartDataIngestionJobResponse(
        const StartDataIngestionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new StartDataIngestionJobResponsePrivate(this), parent)
{
    setRequest(new StartDataIngestionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartDataIngestionJobRequest * StartDataIngestionJobResponse::request() const
{
    return static_cast<const StartDataIngestionJobRequest *>(LookoutEquipmentResponse::request());
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment StartDataIngestionJob \a response.
 */
void StartDataIngestionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartDataIngestionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::StartDataIngestionJobResponsePrivate
 * \brief The StartDataIngestionJobResponsePrivate class provides private implementation for StartDataIngestionJobResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a StartDataIngestionJobResponsePrivate object with public implementation \a q.
 */
StartDataIngestionJobResponsePrivate::StartDataIngestionJobResponsePrivate(
    StartDataIngestionJobResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment StartDataIngestionJob response element from \a xml.
 */
void StartDataIngestionJobResponsePrivate::parseStartDataIngestionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartDataIngestionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
