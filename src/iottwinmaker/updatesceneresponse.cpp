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

#include "updatesceneresponse.h"
#include "updatesceneresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::UpdateSceneResponse
 * \brief The UpdateSceneResponse class provides an interace for IoTTwinMaker UpdateScene responses.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::updateScene
 */

/*!
 * Constructs a UpdateSceneResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSceneResponse::UpdateSceneResponse(
        const UpdateSceneRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTTwinMakerResponse(new UpdateSceneResponsePrivate(this), parent)
{
    setRequest(new UpdateSceneRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSceneRequest * UpdateSceneResponse::request() const
{
    Q_D(const UpdateSceneResponse);
    return static_cast<const UpdateSceneRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTTwinMaker UpdateScene \a response.
 */
void UpdateSceneResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSceneResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTTwinMaker::UpdateSceneResponsePrivate
 * \brief The UpdateSceneResponsePrivate class provides private implementation for UpdateSceneResponse.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a UpdateSceneResponsePrivate object with public implementation \a q.
 */
UpdateSceneResponsePrivate::UpdateSceneResponsePrivate(
    UpdateSceneResponse * const q) : IoTTwinMakerResponsePrivate(q)
{

}

/*!
 * Parses a IoTTwinMaker UpdateScene response element from \a xml.
 */
void UpdateSceneResponsePrivate::parseUpdateSceneResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSceneResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTTwinMaker
} // namespace QtAws
