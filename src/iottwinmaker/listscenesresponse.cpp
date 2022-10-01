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

#include "listscenesresponse.h"
#include "listscenesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::ListScenesResponse
 * \brief The ListScenesResponse class provides an interace for IoTTwinMaker ListScenes responses.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::listScenes
 */

/*!
 * Constructs a ListScenesResponse object for \a reply to \a request, with parent \a parent.
 */
ListScenesResponse::ListScenesResponse(
        const ListScenesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTTwinMakerResponse(new ListScenesResponsePrivate(this), parent)
{
    setRequest(new ListScenesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListScenesRequest * ListScenesResponse::request() const
{
    Q_D(const ListScenesResponse);
    return static_cast<const ListScenesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTTwinMaker ListScenes \a response.
 */
void ListScenesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListScenesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTTwinMaker::ListScenesResponsePrivate
 * \brief The ListScenesResponsePrivate class provides private implementation for ListScenesResponse.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a ListScenesResponsePrivate object with public implementation \a q.
 */
ListScenesResponsePrivate::ListScenesResponsePrivate(
    ListScenesResponse * const q) : IoTTwinMakerResponsePrivate(q)
{

}

/*!
 * Parses a IoTTwinMaker ListScenes response element from \a xml.
 */
void ListScenesResponsePrivate::parseListScenesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListScenesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTTwinMaker
} // namespace QtAws
