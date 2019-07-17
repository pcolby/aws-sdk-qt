/*
    Copyright 2013-2019 Paul Colby

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

#include "dissociateentityfromthingresponse.h"
#include "dissociateentityfromthingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::DissociateEntityFromThingResponse
 * \brief The DissociateEntityFromThingResponse class provides an interace for IoTThingsGraph DissociateEntityFromThing responses.
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
 * \sa IoTThingsGraphClient::dissociateEntityFromThing
 */

/*!
 * Constructs a DissociateEntityFromThingResponse object for \a reply to \a request, with parent \a parent.
 */
DissociateEntityFromThingResponse::DissociateEntityFromThingResponse(
        const DissociateEntityFromThingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new DissociateEntityFromThingResponsePrivate(this), parent)
{
    setRequest(new DissociateEntityFromThingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DissociateEntityFromThingRequest * DissociateEntityFromThingResponse::request() const
{
    Q_D(const DissociateEntityFromThingResponse);
    return static_cast<const DissociateEntityFromThingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph DissociateEntityFromThing \a response.
 */
void DissociateEntityFromThingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DissociateEntityFromThingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::DissociateEntityFromThingResponsePrivate
 * \brief The DissociateEntityFromThingResponsePrivate class provides private implementation for DissociateEntityFromThingResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a DissociateEntityFromThingResponsePrivate object with public implementation \a q.
 */
DissociateEntityFromThingResponsePrivate::DissociateEntityFromThingResponsePrivate(
    DissociateEntityFromThingResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph DissociateEntityFromThing response element from \a xml.
 */
void DissociateEntityFromThingResponsePrivate::parseDissociateEntityFromThingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DissociateEntityFromThingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
