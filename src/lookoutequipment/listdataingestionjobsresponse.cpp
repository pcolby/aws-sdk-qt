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

#include "listdataingestionjobsresponse.h"
#include "listdataingestionjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::ListDataIngestionJobsResponse
 * \brief The ListDataIngestionJobsResponse class provides an interace for LookoutEquipment ListDataIngestionJobs responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::listDataIngestionJobs
 */

/*!
 * Constructs a ListDataIngestionJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDataIngestionJobsResponse::ListDataIngestionJobsResponse(
        const ListDataIngestionJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new ListDataIngestionJobsResponsePrivate(this), parent)
{
    setRequest(new ListDataIngestionJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDataIngestionJobsRequest * ListDataIngestionJobsResponse::request() const
{
    Q_D(const ListDataIngestionJobsResponse);
    return static_cast<const ListDataIngestionJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment ListDataIngestionJobs \a response.
 */
void ListDataIngestionJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDataIngestionJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::ListDataIngestionJobsResponsePrivate
 * \brief The ListDataIngestionJobsResponsePrivate class provides private implementation for ListDataIngestionJobsResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a ListDataIngestionJobsResponsePrivate object with public implementation \a q.
 */
ListDataIngestionJobsResponsePrivate::ListDataIngestionJobsResponsePrivate(
    ListDataIngestionJobsResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment ListDataIngestionJobs response element from \a xml.
 */
void ListDataIngestionJobsResponsePrivate::parseListDataIngestionJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDataIngestionJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
