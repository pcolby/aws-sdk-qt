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

#include "updateentityresponse.h"
#include "updateentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::UpdateEntityResponse
 * \brief The UpdateEntityResponse class provides an interace for IoTTwinMaker UpdateEntity responses.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::updateEntity
 */

/*!
 * Constructs a UpdateEntityResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateEntityResponse::UpdateEntityResponse(
        const UpdateEntityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTTwinMakerResponse(new UpdateEntityResponsePrivate(this), parent)
{
    setRequest(new UpdateEntityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateEntityRequest * UpdateEntityResponse::request() const
{
    Q_D(const UpdateEntityResponse);
    return static_cast<const UpdateEntityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTTwinMaker UpdateEntity \a response.
 */
void UpdateEntityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateEntityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTTwinMaker::UpdateEntityResponsePrivate
 * \brief The UpdateEntityResponsePrivate class provides private implementation for UpdateEntityResponse.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a UpdateEntityResponsePrivate object with public implementation \a q.
 */
UpdateEntityResponsePrivate::UpdateEntityResponsePrivate(
    UpdateEntityResponse * const q) : IoTTwinMakerResponsePrivate(q)
{

}

/*!
 * Parses a IoTTwinMaker UpdateEntity response element from \a xml.
 */
void UpdateEntityResponsePrivate::parseUpdateEntityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEntityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTTwinMaker
} // namespace QtAws
