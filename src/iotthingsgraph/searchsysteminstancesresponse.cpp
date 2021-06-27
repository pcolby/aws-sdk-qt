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

#include "searchsysteminstancesresponse.h"
#include "searchsysteminstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::SearchSystemInstancesResponse
 * \brief The SearchSystemInstancesResponse class provides an interace for IoTThingsGraph SearchSystemInstances responses.
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
 * \sa IoTThingsGraphClient::searchSystemInstances
 */

/*!
 * Constructs a SearchSystemInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
SearchSystemInstancesResponse::SearchSystemInstancesResponse(
        const SearchSystemInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new SearchSystemInstancesResponsePrivate(this), parent)
{
    setRequest(new SearchSystemInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchSystemInstancesRequest * SearchSystemInstancesResponse::request() const
{
    return static_cast<const SearchSystemInstancesRequest *>(IoTThingsGraphResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph SearchSystemInstances \a response.
 */
void SearchSystemInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchSystemInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::SearchSystemInstancesResponsePrivate
 * \brief The SearchSystemInstancesResponsePrivate class provides private implementation for SearchSystemInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a SearchSystemInstancesResponsePrivate object with public implementation \a q.
 */
SearchSystemInstancesResponsePrivate::SearchSystemInstancesResponsePrivate(
    SearchSystemInstancesResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph SearchSystemInstances response element from \a xml.
 */
void SearchSystemInstancesResponsePrivate::parseSearchSystemInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchSystemInstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
