/*
    Copyright 2013-2020 Paul Colby

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

#include "disassociatedevicefromplacementresponse.h"
#include "disassociatedevicefromplacementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::DisassociateDeviceFromPlacementResponse
 * \brief The DisassociateDeviceFromPlacementResponse class provides an interace for IoT1ClickProjects DisassociateDeviceFromPlacement responses.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Projects API
 *
 * \sa IoT1ClickProjectsClient::disassociateDeviceFromPlacement
 */

/*!
 * Constructs a DisassociateDeviceFromPlacementResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateDeviceFromPlacementResponse::DisassociateDeviceFromPlacementResponse(
        const DisassociateDeviceFromPlacementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickProjectsResponse(new DisassociateDeviceFromPlacementResponsePrivate(this), parent)
{
    setRequest(new DisassociateDeviceFromPlacementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateDeviceFromPlacementRequest * DisassociateDeviceFromPlacementResponse::request() const
{
    Q_D(const DisassociateDeviceFromPlacementResponse);
    return static_cast<const DisassociateDeviceFromPlacementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickProjects DisassociateDeviceFromPlacement \a response.
 */
void DisassociateDeviceFromPlacementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateDeviceFromPlacementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickProjects::DisassociateDeviceFromPlacementResponsePrivate
 * \brief The DisassociateDeviceFromPlacementResponsePrivate class provides private implementation for DisassociateDeviceFromPlacementResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a DisassociateDeviceFromPlacementResponsePrivate object with public implementation \a q.
 */
DisassociateDeviceFromPlacementResponsePrivate::DisassociateDeviceFromPlacementResponsePrivate(
    DisassociateDeviceFromPlacementResponse * const q) : IoT1ClickProjectsResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickProjects DisassociateDeviceFromPlacement response element from \a xml.
 */
void DisassociateDeviceFromPlacementResponsePrivate::parseDisassociateDeviceFromPlacementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateDeviceFromPlacementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickProjects
} // namespace QtAws
