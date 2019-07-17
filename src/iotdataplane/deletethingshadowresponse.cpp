/*
    Copyright 2013-2019 Paul Colby

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

#include "deletethingshadowresponse.h"
#include "deletethingshadowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTDataPlane {

/*!
 * \class QtAws::IoTDataPlane::DeleteThingShadowResponse
 * \brief The DeleteThingShadowResponse class provides an interace for IoTDataPlane DeleteThingShadow responses.
 *
 * \inmodule QtAwsIoTDataPlane
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT-Data enables secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. It implements a broker for applications and things to publish
 *  messages over HTTP (Publish) and retrieve, update, and delete thing shadows. A thing shadow is a persistent
 *  representation of your things and their state in the AWS
 *
 * \sa IoTDataPlaneClient::deleteThingShadow
 */

/*!
 * Constructs a DeleteThingShadowResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteThingShadowResponse::DeleteThingShadowResponse(
        const DeleteThingShadowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTDataPlaneResponse(new DeleteThingShadowResponsePrivate(this), parent)
{
    setRequest(new DeleteThingShadowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteThingShadowRequest * DeleteThingShadowResponse::request() const
{
    Q_D(const DeleteThingShadowResponse);
    return static_cast<const DeleteThingShadowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTDataPlane DeleteThingShadow \a response.
 */
void DeleteThingShadowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteThingShadowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTDataPlane::DeleteThingShadowResponsePrivate
 * \brief The DeleteThingShadowResponsePrivate class provides private implementation for DeleteThingShadowResponse.
 * \internal
 *
 * \inmodule QtAwsIoTDataPlane
 */

/*!
 * Constructs a DeleteThingShadowResponsePrivate object with public implementation \a q.
 */
DeleteThingShadowResponsePrivate::DeleteThingShadowResponsePrivate(
    DeleteThingShadowResponse * const q) : IoTDataPlaneResponsePrivate(q)
{

}

/*!
 * Parses a IoTDataPlane DeleteThingShadow response element from \a xml.
 */
void DeleteThingShadowResponsePrivate::parseDeleteThingShadowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteThingShadowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTDataPlane
} // namespace QtAws
