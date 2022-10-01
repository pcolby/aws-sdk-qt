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

#include "listcomponenttypesresponse.h"
#include "listcomponenttypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::ListComponentTypesResponse
 * \brief The ListComponentTypesResponse class provides an interace for IoTTwinMaker ListComponentTypes responses.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::listComponentTypes
 */

/*!
 * Constructs a ListComponentTypesResponse object for \a reply to \a request, with parent \a parent.
 */
ListComponentTypesResponse::ListComponentTypesResponse(
        const ListComponentTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTTwinMakerResponse(new ListComponentTypesResponsePrivate(this), parent)
{
    setRequest(new ListComponentTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListComponentTypesRequest * ListComponentTypesResponse::request() const
{
    Q_D(const ListComponentTypesResponse);
    return static_cast<const ListComponentTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTTwinMaker ListComponentTypes \a response.
 */
void ListComponentTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListComponentTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTTwinMaker::ListComponentTypesResponsePrivate
 * \brief The ListComponentTypesResponsePrivate class provides private implementation for ListComponentTypesResponse.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a ListComponentTypesResponsePrivate object with public implementation \a q.
 */
ListComponentTypesResponsePrivate::ListComponentTypesResponsePrivate(
    ListComponentTypesResponse * const q) : IoTTwinMakerResponsePrivate(q)
{

}

/*!
 * Parses a IoTTwinMaker ListComponentTypes response element from \a xml.
 */
void ListComponentTypesResponsePrivate::parseListComponentTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListComponentTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTTwinMaker
} // namespace QtAws
