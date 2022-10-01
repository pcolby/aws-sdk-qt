// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgroundstationsresponse.h"
#include "listgroundstationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::ListGroundStationsResponse
 * \brief The ListGroundStationsResponse class provides an interace for GroundStation ListGroundStations responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::listGroundStations
 */

/*!
 * Constructs a ListGroundStationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListGroundStationsResponse::ListGroundStationsResponse(
        const ListGroundStationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new ListGroundStationsResponsePrivate(this), parent)
{
    setRequest(new ListGroundStationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGroundStationsRequest * ListGroundStationsResponse::request() const
{
    Q_D(const ListGroundStationsResponse);
    return static_cast<const ListGroundStationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation ListGroundStations \a response.
 */
void ListGroundStationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGroundStationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::ListGroundStationsResponsePrivate
 * \brief The ListGroundStationsResponsePrivate class provides private implementation for ListGroundStationsResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a ListGroundStationsResponsePrivate object with public implementation \a q.
 */
ListGroundStationsResponsePrivate::ListGroundStationsResponsePrivate(
    ListGroundStationsResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation ListGroundStations response element from \a xml.
 */
void ListGroundStationsResponsePrivate::parseListGroundStationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGroundStationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
