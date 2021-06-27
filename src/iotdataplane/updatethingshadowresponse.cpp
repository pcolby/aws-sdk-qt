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

#include "updatethingshadowresponse.h"
#include "updatethingshadowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTDataPlane {

/*!
 * \class QtAws::IoTDataPlane::UpdateThingShadowResponse
 * \brief The UpdateThingShadowResponse class provides an interace for IoTDataPlane UpdateThingShadow responses.
 *
 * \inmodule QtAwsIoTDataPlane
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT-Data enables secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. It implements a broker for applications and things to publish
 *  messages over HTTP (Publish) and retrieve, update, and delete shadows. A shadow is a persistent representation of your
 *  things and their state in the AWS
 * 
 *  cloud>
 * 
 *  Find the endpoint address for actions in the AWS IoT data plane by running this CLI
 * 
 *  command>
 * 
 *  <code>aws iot describe-endpoint --endpoint-type iot:Data-ATS</code>
 * 
 *  </p
 * 
 *  The service name used by <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">AWS Signature
 *  Version 4</a> to sign requests is:
 *
 * \sa IoTDataPlaneClient::updateThingShadow
 */

/*!
 * Constructs a UpdateThingShadowResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateThingShadowResponse::UpdateThingShadowResponse(
        const UpdateThingShadowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTDataPlaneResponse(new UpdateThingShadowResponsePrivate(this), parent)
{
    setRequest(new UpdateThingShadowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateThingShadowRequest * UpdateThingShadowResponse::request() const
{
    return static_cast<const UpdateThingShadowRequest *>(IoTDataPlaneResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTDataPlane UpdateThingShadow \a response.
 */
void UpdateThingShadowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateThingShadowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTDataPlane::UpdateThingShadowResponsePrivate
 * \brief The UpdateThingShadowResponsePrivate class provides private implementation for UpdateThingShadowResponse.
 * \internal
 *
 * \inmodule QtAwsIoTDataPlane
 */

/*!
 * Constructs a UpdateThingShadowResponsePrivate object with public implementation \a q.
 */
UpdateThingShadowResponsePrivate::UpdateThingShadowResponsePrivate(
    UpdateThingShadowResponse * const q) : IoTDataPlaneResponsePrivate(q)
{

}

/*!
 * Parses a IoTDataPlane UpdateThingShadow response element from \a xml.
 */
void UpdateThingShadowResponsePrivate::parseUpdateThingShadowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateThingShadowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTDataPlane
} // namespace QtAws
