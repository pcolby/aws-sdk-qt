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

#include "undeploysysteminstanceresponse.h"
#include "undeploysysteminstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::UndeploySystemInstanceResponse
 * \brief The UndeploySystemInstanceResponse class provides an interace for IoTThingsGraph UndeploySystemInstance responses.
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
 * \sa IoTThingsGraphClient::undeploySystemInstance
 */

/*!
 * Constructs a UndeploySystemInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
UndeploySystemInstanceResponse::UndeploySystemInstanceResponse(
        const UndeploySystemInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new UndeploySystemInstanceResponsePrivate(this), parent)
{
    setRequest(new UndeploySystemInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UndeploySystemInstanceRequest * UndeploySystemInstanceResponse::request() const
{
    Q_D(const UndeploySystemInstanceResponse);
    return static_cast<const UndeploySystemInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph UndeploySystemInstance \a response.
 */
void UndeploySystemInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UndeploySystemInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::UndeploySystemInstanceResponsePrivate
 * \brief The UndeploySystemInstanceResponsePrivate class provides private implementation for UndeploySystemInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a UndeploySystemInstanceResponsePrivate object with public implementation \a q.
 */
UndeploySystemInstanceResponsePrivate::UndeploySystemInstanceResponsePrivate(
    UndeploySystemInstanceResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph UndeploySystemInstance response element from \a xml.
 */
void UndeploySystemInstanceResponsePrivate::parseUndeploySystemInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UndeploySystemInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
