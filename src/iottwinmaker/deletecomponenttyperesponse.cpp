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

#include "deletecomponenttyperesponse.h"
#include "deletecomponenttyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::DeleteComponentTypeResponse
 * \brief The DeleteComponentTypeResponse class provides an interace for IoTTwinMaker DeleteComponentType responses.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::deleteComponentType
 */

/*!
 * Constructs a DeleteComponentTypeResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteComponentTypeResponse::DeleteComponentTypeResponse(
        const DeleteComponentTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTTwinMakerResponse(new DeleteComponentTypeResponsePrivate(this), parent)
{
    setRequest(new DeleteComponentTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteComponentTypeRequest * DeleteComponentTypeResponse::request() const
{
    Q_D(const DeleteComponentTypeResponse);
    return static_cast<const DeleteComponentTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTTwinMaker DeleteComponentType \a response.
 */
void DeleteComponentTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteComponentTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTTwinMaker::DeleteComponentTypeResponsePrivate
 * \brief The DeleteComponentTypeResponsePrivate class provides private implementation for DeleteComponentTypeResponse.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a DeleteComponentTypeResponsePrivate object with public implementation \a q.
 */
DeleteComponentTypeResponsePrivate::DeleteComponentTypeResponsePrivate(
    DeleteComponentTypeResponse * const q) : IoTTwinMakerResponsePrivate(q)
{

}

/*!
 * Parses a IoTTwinMaker DeleteComponentType response element from \a xml.
 */
void DeleteComponentTypeResponsePrivate::parseDeleteComponentTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteComponentTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTTwinMaker
} // namespace QtAws
