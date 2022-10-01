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

#include "getthingshadowresponse.h"
#include "getthingshadowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTDataPlane {

/*!
 * \class QtAws::IoTDataPlane::GetThingShadowResponse
 * \brief The GetThingShadowResponse class provides an interace for IoTDataPlane GetThingShadow responses.
 *
 * \inmodule QtAwsIoTDataPlane
 *
 *  <fullname>IoT data</fullname>
 * 
 *  IoT data enables secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the Amazon Web Services cloud. It implements a broker for applications and
 *  things to publish messages over HTTP (Publish) and retrieve, update, and delete shadows. A shadow is a persistent
 *  representation of your things and their state in the Amazon Web Services
 * 
 *  cloud>
 * 
 *  Find the endpoint address for actions in IoT data by running this CLI
 * 
 *  command>
 * 
 *  <code>aws iot describe-endpoint --endpoint-type iot:Data-ATS</code>
 * 
 *  </p
 * 
 *  The service name used by <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Amazon Web
 *  ServicesSignature Version 4</a> to sign requests is:
 *
 * \sa IoTDataPlaneClient::getThingShadow
 */

/*!
 * Constructs a GetThingShadowResponse object for \a reply to \a request, with parent \a parent.
 */
GetThingShadowResponse::GetThingShadowResponse(
        const GetThingShadowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTDataPlaneResponse(new GetThingShadowResponsePrivate(this), parent)
{
    setRequest(new GetThingShadowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetThingShadowRequest * GetThingShadowResponse::request() const
{
    Q_D(const GetThingShadowResponse);
    return static_cast<const GetThingShadowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTDataPlane GetThingShadow \a response.
 */
void GetThingShadowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetThingShadowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTDataPlane::GetThingShadowResponsePrivate
 * \brief The GetThingShadowResponsePrivate class provides private implementation for GetThingShadowResponse.
 * \internal
 *
 * \inmodule QtAwsIoTDataPlane
 */

/*!
 * Constructs a GetThingShadowResponsePrivate object with public implementation \a q.
 */
GetThingShadowResponsePrivate::GetThingShadowResponsePrivate(
    GetThingShadowResponse * const q) : IoTDataPlaneResponsePrivate(q)
{

}

/*!
 * Parses a IoTDataPlane GetThingShadow response element from \a xml.
 */
void GetThingShadowResponsePrivate::parseGetThingShadowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetThingShadowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTDataPlane
} // namespace QtAws
