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

#include "getentityresponse.h"
#include "getentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::GetEntityResponse
 * \brief The GetEntityResponse class provides an interace for IoTTwinMaker GetEntity responses.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::getEntity
 */

/*!
 * Constructs a GetEntityResponse object for \a reply to \a request, with parent \a parent.
 */
GetEntityResponse::GetEntityResponse(
        const GetEntityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTTwinMakerResponse(new GetEntityResponsePrivate(this), parent)
{
    setRequest(new GetEntityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEntityRequest * GetEntityResponse::request() const
{
    Q_D(const GetEntityResponse);
    return static_cast<const GetEntityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTTwinMaker GetEntity \a response.
 */
void GetEntityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEntityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTTwinMaker::GetEntityResponsePrivate
 * \brief The GetEntityResponsePrivate class provides private implementation for GetEntityResponse.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a GetEntityResponsePrivate object with public implementation \a q.
 */
GetEntityResponsePrivate::GetEntityResponsePrivate(
    GetEntityResponse * const q) : IoTTwinMakerResponsePrivate(q)
{

}

/*!
 * Parses a IoTTwinMaker GetEntity response element from \a xml.
 */
void GetEntityResponsePrivate::parseGetEntityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEntityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTTwinMaker
} // namespace QtAws
