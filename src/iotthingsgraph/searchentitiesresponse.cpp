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

#include "searchentitiesresponse.h"
#include "searchentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::SearchEntitiesResponse
 * \brief The SearchEntitiesResponse class provides an interace for IoTThingsGraph SearchEntities responses.
 *
 * \inmodule QtAwsIoTThingsGraph
 *
 *  <fullname>AWS IoT Things Graph</fullname>
 * 
 *  AWS IoT Things Graph provides an integrated set of tools that enable developers to connect devices and services that use
 *  different standards, such as units of measure and communication protocols. AWS IoT Things Graph makes it possible to
 *  build IoT applications with little to no code by connecting devices and services and defining how they interact at an
 *  abstract
 * 
 *  level>
 * 
 *  For more information about how AWS IoT Things Graph works, see the <a
 *  href="https://docs.aws.amazon.com/thingsgraph/latest/ug/iot-tg-whatis.html">User
 *
 * \sa IoTThingsGraphClient::searchEntities
 */

/*!
 * Constructs a SearchEntitiesResponse object for \a reply to \a request, with parent \a parent.
 */
SearchEntitiesResponse::SearchEntitiesResponse(
        const SearchEntitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new SearchEntitiesResponsePrivate(this), parent)
{
    setRequest(new SearchEntitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchEntitiesRequest * SearchEntitiesResponse::request() const
{
    Q_D(const SearchEntitiesResponse);
    return static_cast<const SearchEntitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph SearchEntities \a response.
 */
void SearchEntitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchEntitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::SearchEntitiesResponsePrivate
 * \brief The SearchEntitiesResponsePrivate class provides private implementation for SearchEntitiesResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a SearchEntitiesResponsePrivate object with public implementation \a q.
 */
SearchEntitiesResponsePrivate::SearchEntitiesResponsePrivate(
    SearchEntitiesResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph SearchEntities response element from \a xml.
 */
void SearchEntitiesResponsePrivate::parseSearchEntitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchEntitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
