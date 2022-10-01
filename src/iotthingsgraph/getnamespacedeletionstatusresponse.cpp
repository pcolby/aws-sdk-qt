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

#include "getnamespacedeletionstatusresponse.h"
#include "getnamespacedeletionstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::GetNamespaceDeletionStatusResponse
 * \brief The GetNamespaceDeletionStatusResponse class provides an interace for IoTThingsGraph GetNamespaceDeletionStatus responses.
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
 * \sa IoTThingsGraphClient::getNamespaceDeletionStatus
 */

/*!
 * Constructs a GetNamespaceDeletionStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetNamespaceDeletionStatusResponse::GetNamespaceDeletionStatusResponse(
        const GetNamespaceDeletionStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTThingsGraphResponse(new GetNamespaceDeletionStatusResponsePrivate(this), parent)
{
    setRequest(new GetNamespaceDeletionStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetNamespaceDeletionStatusRequest * GetNamespaceDeletionStatusResponse::request() const
{
    Q_D(const GetNamespaceDeletionStatusResponse);
    return static_cast<const GetNamespaceDeletionStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTThingsGraph GetNamespaceDeletionStatus \a response.
 */
void GetNamespaceDeletionStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNamespaceDeletionStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTThingsGraph::GetNamespaceDeletionStatusResponsePrivate
 * \brief The GetNamespaceDeletionStatusResponsePrivate class provides private implementation for GetNamespaceDeletionStatusResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a GetNamespaceDeletionStatusResponsePrivate object with public implementation \a q.
 */
GetNamespaceDeletionStatusResponsePrivate::GetNamespaceDeletionStatusResponsePrivate(
    GetNamespaceDeletionStatusResponse * const q) : IoTThingsGraphResponsePrivate(q)
{

}

/*!
 * Parses a IoTThingsGraph GetNamespaceDeletionStatus response element from \a xml.
 */
void GetNamespaceDeletionStatusResponsePrivate::parseGetNamespaceDeletionStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNamespaceDeletionStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTThingsGraph
} // namespace QtAws
