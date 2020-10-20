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

#include "publishresponse.h"
#include "publishresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTDataPlane {

/*!
 * \class QtAws::IoTDataPlane::PublishResponse
 * \brief The PublishResponse class provides an interace for IoTDataPlane Publish responses.
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
 * \sa IoTDataPlaneClient::publish
 */

/*!
 * Constructs a PublishResponse object for \a reply to \a request, with parent \a parent.
 */
PublishResponse::PublishResponse(
        const PublishRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTDataPlaneResponse(new PublishResponsePrivate(this), parent)
{
    setRequest(new PublishRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PublishRequest * PublishResponse::request() const
{
    Q_D(const PublishResponse);
    return static_cast<const PublishRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTDataPlane Publish \a response.
 */
void PublishResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PublishResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTDataPlane::PublishResponsePrivate
 * \brief The PublishResponsePrivate class provides private implementation for PublishResponse.
 * \internal
 *
 * \inmodule QtAwsIoTDataPlane
 */

/*!
 * Constructs a PublishResponsePrivate object with public implementation \a q.
 */
PublishResponsePrivate::PublishResponsePrivate(
    PublishResponse * const q) : IoTDataPlaneResponsePrivate(q)
{

}

/*!
 * Parses a IoTDataPlane Publish response element from \a xml.
 */
void PublishResponsePrivate::parsePublishResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PublishResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTDataPlane
} // namespace QtAws
