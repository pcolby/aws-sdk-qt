// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
