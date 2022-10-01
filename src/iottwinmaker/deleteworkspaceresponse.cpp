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

#include "deleteworkspaceresponse.h"
#include "deleteworkspaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::DeleteWorkspaceResponse
 * \brief The DeleteWorkspaceResponse class provides an interace for IoTTwinMaker DeleteWorkspace responses.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::deleteWorkspace
 */

/*!
 * Constructs a DeleteWorkspaceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWorkspaceResponse::DeleteWorkspaceResponse(
        const DeleteWorkspaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTTwinMakerResponse(new DeleteWorkspaceResponsePrivate(this), parent)
{
    setRequest(new DeleteWorkspaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWorkspaceRequest * DeleteWorkspaceResponse::request() const
{
    Q_D(const DeleteWorkspaceResponse);
    return static_cast<const DeleteWorkspaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTTwinMaker DeleteWorkspace \a response.
 */
void DeleteWorkspaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWorkspaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTTwinMaker::DeleteWorkspaceResponsePrivate
 * \brief The DeleteWorkspaceResponsePrivate class provides private implementation for DeleteWorkspaceResponse.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a DeleteWorkspaceResponsePrivate object with public implementation \a q.
 */
DeleteWorkspaceResponsePrivate::DeleteWorkspaceResponsePrivate(
    DeleteWorkspaceResponse * const q) : IoTTwinMakerResponsePrivate(q)
{

}

/*!
 * Parses a IoTTwinMaker DeleteWorkspace response element from \a xml.
 */
void DeleteWorkspaceResponsePrivate::parseDeleteWorkspaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWorkspaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTTwinMaker
} // namespace QtAws
