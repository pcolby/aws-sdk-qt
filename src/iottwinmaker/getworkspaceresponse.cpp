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

#include "getworkspaceresponse.h"
#include "getworkspaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::GetWorkspaceResponse
 * \brief The GetWorkspaceResponse class provides an interace for IoTTwinMaker GetWorkspace responses.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::getWorkspace
 */

/*!
 * Constructs a GetWorkspaceResponse object for \a reply to \a request, with parent \a parent.
 */
GetWorkspaceResponse::GetWorkspaceResponse(
        const GetWorkspaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTTwinMakerResponse(new GetWorkspaceResponsePrivate(this), parent)
{
    setRequest(new GetWorkspaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWorkspaceRequest * GetWorkspaceResponse::request() const
{
    Q_D(const GetWorkspaceResponse);
    return static_cast<const GetWorkspaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTTwinMaker GetWorkspace \a response.
 */
void GetWorkspaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWorkspaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTTwinMaker::GetWorkspaceResponsePrivate
 * \brief The GetWorkspaceResponsePrivate class provides private implementation for GetWorkspaceResponse.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a GetWorkspaceResponsePrivate object with public implementation \a q.
 */
GetWorkspaceResponsePrivate::GetWorkspaceResponsePrivate(
    GetWorkspaceResponse * const q) : IoTTwinMakerResponsePrivate(q)
{

}

/*!
 * Parses a IoTTwinMaker GetWorkspace response element from \a xml.
 */
void GetWorkspaceResponsePrivate::parseGetWorkspaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWorkspaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTTwinMaker
} // namespace QtAws
