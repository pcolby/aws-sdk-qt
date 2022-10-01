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

#include "getretainedmessageresponse.h"
#include "getretainedmessageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTDataPlane {

/*!
 * \class QtAws::IoTDataPlane::GetRetainedMessageResponse
 * \brief The GetRetainedMessageResponse class provides an interace for IoTDataPlane GetRetainedMessage responses.
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
 * \sa IoTDataPlaneClient::getRetainedMessage
 */

/*!
 * Constructs a GetRetainedMessageResponse object for \a reply to \a request, with parent \a parent.
 */
GetRetainedMessageResponse::GetRetainedMessageResponse(
        const GetRetainedMessageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTDataPlaneResponse(new GetRetainedMessageResponsePrivate(this), parent)
{
    setRequest(new GetRetainedMessageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRetainedMessageRequest * GetRetainedMessageResponse::request() const
{
    Q_D(const GetRetainedMessageResponse);
    return static_cast<const GetRetainedMessageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTDataPlane GetRetainedMessage \a response.
 */
void GetRetainedMessageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRetainedMessageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTDataPlane::GetRetainedMessageResponsePrivate
 * \brief The GetRetainedMessageResponsePrivate class provides private implementation for GetRetainedMessageResponse.
 * \internal
 *
 * \inmodule QtAwsIoTDataPlane
 */

/*!
 * Constructs a GetRetainedMessageResponsePrivate object with public implementation \a q.
 */
GetRetainedMessageResponsePrivate::GetRetainedMessageResponsePrivate(
    GetRetainedMessageResponse * const q) : IoTDataPlaneResponsePrivate(q)
{

}

/*!
 * Parses a IoTDataPlane GetRetainedMessage response element from \a xml.
 */
void GetRetainedMessageResponsePrivate::parseGetRetainedMessageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRetainedMessageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTDataPlane
} // namespace QtAws
