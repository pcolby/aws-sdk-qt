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

#include "createsceneresponse.h"
#include "createsceneresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::CreateSceneResponse
 * \brief The CreateSceneResponse class provides an interace for IoTTwinMaker CreateScene responses.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::createScene
 */

/*!
 * Constructs a CreateSceneResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSceneResponse::CreateSceneResponse(
        const CreateSceneRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTTwinMakerResponse(new CreateSceneResponsePrivate(this), parent)
{
    setRequest(new CreateSceneRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSceneRequest * CreateSceneResponse::request() const
{
    Q_D(const CreateSceneResponse);
    return static_cast<const CreateSceneRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTTwinMaker CreateScene \a response.
 */
void CreateSceneResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSceneResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTTwinMaker::CreateSceneResponsePrivate
 * \brief The CreateSceneResponsePrivate class provides private implementation for CreateSceneResponse.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a CreateSceneResponsePrivate object with public implementation \a q.
 */
CreateSceneResponsePrivate::CreateSceneResponsePrivate(
    CreateSceneResponse * const q) : IoTTwinMakerResponsePrivate(q)
{

}

/*!
 * Parses a IoTTwinMaker CreateScene response element from \a xml.
 */
void CreateSceneResponsePrivate::parseCreateSceneResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSceneResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTTwinMaker
} // namespace QtAws
