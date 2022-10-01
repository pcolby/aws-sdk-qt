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

#include "createentityresponse.h"
#include "createentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::CreateEntityResponse
 * \brief The CreateEntityResponse class provides an interace for IoTTwinMaker CreateEntity responses.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::createEntity
 */

/*!
 * Constructs a CreateEntityResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEntityResponse::CreateEntityResponse(
        const CreateEntityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTTwinMakerResponse(new CreateEntityResponsePrivate(this), parent)
{
    setRequest(new CreateEntityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEntityRequest * CreateEntityResponse::request() const
{
    Q_D(const CreateEntityResponse);
    return static_cast<const CreateEntityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTTwinMaker CreateEntity \a response.
 */
void CreateEntityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEntityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTTwinMaker::CreateEntityResponsePrivate
 * \brief The CreateEntityResponsePrivate class provides private implementation for CreateEntityResponse.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a CreateEntityResponsePrivate object with public implementation \a q.
 */
CreateEntityResponsePrivate::CreateEntityResponsePrivate(
    CreateEntityResponse * const q) : IoTTwinMakerResponsePrivate(q)
{

}

/*!
 * Parses a IoTTwinMaker CreateEntity response element from \a xml.
 */
void CreateEntityResponsePrivate::parseCreateEntityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEntityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTTwinMaker
} // namespace QtAws
