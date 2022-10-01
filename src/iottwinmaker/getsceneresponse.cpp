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

#include "getsceneresponse.h"
#include "getsceneresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::GetSceneResponse
 * \brief The GetSceneResponse class provides an interace for IoTTwinMaker GetScene responses.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::getScene
 */

/*!
 * Constructs a GetSceneResponse object for \a reply to \a request, with parent \a parent.
 */
GetSceneResponse::GetSceneResponse(
        const GetSceneRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTTwinMakerResponse(new GetSceneResponsePrivate(this), parent)
{
    setRequest(new GetSceneRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSceneRequest * GetSceneResponse::request() const
{
    Q_D(const GetSceneResponse);
    return static_cast<const GetSceneRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTTwinMaker GetScene \a response.
 */
void GetSceneResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSceneResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTTwinMaker::GetSceneResponsePrivate
 * \brief The GetSceneResponsePrivate class provides private implementation for GetSceneResponse.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a GetSceneResponsePrivate object with public implementation \a q.
 */
GetSceneResponsePrivate::GetSceneResponsePrivate(
    GetSceneResponse * const q) : IoTTwinMakerResponsePrivate(q)
{

}

/*!
 * Parses a IoTTwinMaker GetScene response element from \a xml.
 */
void GetSceneResponsePrivate::parseGetSceneResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSceneResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTTwinMaker
} // namespace QtAws
