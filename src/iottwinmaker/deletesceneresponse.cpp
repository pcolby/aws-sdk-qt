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

#include "deletesceneresponse.h"
#include "deletesceneresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::DeleteSceneResponse
 * \brief The DeleteSceneResponse class provides an interace for IoTTwinMaker DeleteScene responses.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::deleteScene
 */

/*!
 * Constructs a DeleteSceneResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSceneResponse::DeleteSceneResponse(
        const DeleteSceneRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTTwinMakerResponse(new DeleteSceneResponsePrivate(this), parent)
{
    setRequest(new DeleteSceneRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSceneRequest * DeleteSceneResponse::request() const
{
    Q_D(const DeleteSceneResponse);
    return static_cast<const DeleteSceneRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTTwinMaker DeleteScene \a response.
 */
void DeleteSceneResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSceneResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTTwinMaker::DeleteSceneResponsePrivate
 * \brief The DeleteSceneResponsePrivate class provides private implementation for DeleteSceneResponse.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a DeleteSceneResponsePrivate object with public implementation \a q.
 */
DeleteSceneResponsePrivate::DeleteSceneResponsePrivate(
    DeleteSceneResponse * const q) : IoTTwinMakerResponsePrivate(q)
{

}

/*!
 * Parses a IoTTwinMaker DeleteScene response element from \a xml.
 */
void DeleteSceneResponsePrivate::parseDeleteSceneResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSceneResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTTwinMaker
} // namespace QtAws
