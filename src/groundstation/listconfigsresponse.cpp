/*
    Copyright 2013-2020 Paul Colby

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

#include "listconfigsresponse.h"
#include "listconfigsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::ListConfigsResponse
 * \brief The ListConfigsResponse class provides an interace for GroundStation ListConfigs responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::listConfigs
 */

/*!
 * Constructs a ListConfigsResponse object for \a reply to \a request, with parent \a parent.
 */
ListConfigsResponse::ListConfigsResponse(
        const ListConfigsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new ListConfigsResponsePrivate(this), parent)
{
    setRequest(new ListConfigsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListConfigsRequest * ListConfigsResponse::request() const
{
    Q_D(const ListConfigsResponse);
    return static_cast<const ListConfigsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation ListConfigs \a response.
 */
void ListConfigsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListConfigsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::ListConfigsResponsePrivate
 * \brief The ListConfigsResponsePrivate class provides private implementation for ListConfigsResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a ListConfigsResponsePrivate object with public implementation \a q.
 */
ListConfigsResponsePrivate::ListConfigsResponsePrivate(
    ListConfigsResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation ListConfigs response element from \a xml.
 */
void ListConfigsResponsePrivate::parseListConfigsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListConfigsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
