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

#include "deploysysteminstanceresponse.h"
#include "deploysysteminstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::DeploySystemInstanceResponse
 * \brief The DeploySystemInstanceResponse class provides an interace for IoTThingsGraph DeploySystemInstance responses.
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
 *  Guide</a>>
 * 
 *  The AWS IoT Things Graph service is
 *
 * \sa IoTThingsGraphClient::deploySystemInstance
 */

/*!
 * Constructs a DeploySystemInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
DeploySystemInstanceResponse::DeploySystemInstanceResponse(
        const DeploySystemInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new DeploySystemInstanceResponsePrivate(this), parent)
{
    setRequest(new DeploySystemInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeploySystemInstanceRequest * DeploySystemInstanceResponse::request() const
{
    Q_D(const DeploySystemInstanceResponse);
    return static_cast<const DeploySystemInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph DeploySystemInstance \a response.
 */
void DeploySystemInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeploySystemInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::DeploySystemInstanceResponsePrivate
 * \brief The DeploySystemInstanceResponsePrivate class provides private implementation for DeploySystemInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a DeploySystemInstanceResponsePrivate object with public implementation \a q.
 */
DeploySystemInstanceResponsePrivate::DeploySystemInstanceResponsePrivate(
    DeploySystemInstanceResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph DeploySystemInstance response element from \a xml.
 */
void DeploySystemInstanceResponsePrivate::parseDeploySystemInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeploySystemInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
