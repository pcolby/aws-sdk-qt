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

#include "getentitiesresponse.h"
#include "getentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::GetEntitiesResponse
 * \brief The GetEntitiesResponse class provides an interace for IoTThingsGraph GetEntities responses.
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
 * \sa IoTThingsGraphClient::getEntities
 */

/*!
 * Constructs a GetEntitiesResponse object for \a reply to \a request, with parent \a parent.
 */
GetEntitiesResponse::GetEntitiesResponse(
        const GetEntitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new GetEntitiesResponsePrivate(this), parent)
{
    setRequest(new GetEntitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEntitiesRequest * GetEntitiesResponse::request() const
{
    return static_cast<const GetEntitiesRequest *>(IoTThingsGraphResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph GetEntities \a response.
 */
void GetEntitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEntitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::GetEntitiesResponsePrivate
 * \brief The GetEntitiesResponsePrivate class provides private implementation for GetEntitiesResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a GetEntitiesResponsePrivate object with public implementation \a q.
 */
GetEntitiesResponsePrivate::GetEntitiesResponsePrivate(
    GetEntitiesResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph GetEntities response element from \a xml.
 */
void GetEntitiesResponsePrivate::parseGetEntitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEntitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
