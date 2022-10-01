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

#include "getcomponenttyperesponse.h"
#include "getcomponenttyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::GetComponentTypeResponse
 * \brief The GetComponentTypeResponse class provides an interace for IoTTwinMaker GetComponentType responses.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::getComponentType
 */

/*!
 * Constructs a GetComponentTypeResponse object for \a reply to \a request, with parent \a parent.
 */
GetComponentTypeResponse::GetComponentTypeResponse(
        const GetComponentTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTTwinMakerResponse(new GetComponentTypeResponsePrivate(this), parent)
{
    setRequest(new GetComponentTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetComponentTypeRequest * GetComponentTypeResponse::request() const
{
    Q_D(const GetComponentTypeResponse);
    return static_cast<const GetComponentTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTTwinMaker GetComponentType \a response.
 */
void GetComponentTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetComponentTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTTwinMaker::GetComponentTypeResponsePrivate
 * \brief The GetComponentTypeResponsePrivate class provides private implementation for GetComponentTypeResponse.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a GetComponentTypeResponsePrivate object with public implementation \a q.
 */
GetComponentTypeResponsePrivate::GetComponentTypeResponsePrivate(
    GetComponentTypeResponse * const q) : IoTTwinMakerResponsePrivate(q)
{

}

/*!
 * Parses a IoTTwinMaker GetComponentType response element from \a xml.
 */
void GetComponentTypeResponsePrivate::parseGetComponentTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetComponentTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTTwinMaker
} // namespace QtAws
