// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsensorstatisticsresponse.h"
#include "listsensorstatisticsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::ListSensorStatisticsResponse
 * \brief The ListSensorStatisticsResponse class provides an interace for LookoutEquipment ListSensorStatistics responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::listSensorStatistics
 */

/*!
 * Constructs a ListSensorStatisticsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSensorStatisticsResponse::ListSensorStatisticsResponse(
        const ListSensorStatisticsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new ListSensorStatisticsResponsePrivate(this), parent)
{
    setRequest(new ListSensorStatisticsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSensorStatisticsRequest * ListSensorStatisticsResponse::request() const
{
    Q_D(const ListSensorStatisticsResponse);
    return static_cast<const ListSensorStatisticsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment ListSensorStatistics \a response.
 */
void ListSensorStatisticsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSensorStatisticsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::ListSensorStatisticsResponsePrivate
 * \brief The ListSensorStatisticsResponsePrivate class provides private implementation for ListSensorStatisticsResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a ListSensorStatisticsResponsePrivate object with public implementation \a q.
 */
ListSensorStatisticsResponsePrivate::ListSensorStatisticsResponsePrivate(
    ListSensorStatisticsResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment ListSensorStatistics response element from \a xml.
 */
void ListSensorStatisticsResponsePrivate::parseListSensorStatisticsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSensorStatisticsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
