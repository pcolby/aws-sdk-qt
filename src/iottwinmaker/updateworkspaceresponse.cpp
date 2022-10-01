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

#include "updateworkspaceresponse.h"
#include "updateworkspaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::UpdateWorkspaceResponse
 * \brief The UpdateWorkspaceResponse class provides an interace for IoTTwinMaker UpdateWorkspace responses.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::updateWorkspace
 */

/*!
 * Constructs a UpdateWorkspaceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateWorkspaceResponse::UpdateWorkspaceResponse(
        const UpdateWorkspaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTTwinMakerResponse(new UpdateWorkspaceResponsePrivate(this), parent)
{
    setRequest(new UpdateWorkspaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateWorkspaceRequest * UpdateWorkspaceResponse::request() const
{
    Q_D(const UpdateWorkspaceResponse);
    return static_cast<const UpdateWorkspaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTTwinMaker UpdateWorkspace \a response.
 */
void UpdateWorkspaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateWorkspaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTTwinMaker::UpdateWorkspaceResponsePrivate
 * \brief The UpdateWorkspaceResponsePrivate class provides private implementation for UpdateWorkspaceResponse.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a UpdateWorkspaceResponsePrivate object with public implementation \a q.
 */
UpdateWorkspaceResponsePrivate::UpdateWorkspaceResponsePrivate(
    UpdateWorkspaceResponse * const q) : IoTTwinMakerResponsePrivate(q)
{

}

/*!
 * Parses a IoTTwinMaker UpdateWorkspace response element from \a xml.
 */
void UpdateWorkspaceResponsePrivate::parseUpdateWorkspaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateWorkspaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTTwinMaker
} // namespace QtAws
