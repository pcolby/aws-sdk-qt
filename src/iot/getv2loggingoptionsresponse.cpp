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

#include "getv2loggingoptionsresponse.h"
#include "getv2loggingoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::GetV2LoggingOptionsResponse
 * \brief The GetV2LoggingOptionsResponse class provides an interace for IoT GetV2LoggingOptions responses.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected devices (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  device (Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  devices>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 * 
 *  Guide</a>>
 * 
 *  For information about how to use the credentials provider for AWS IoT, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing Direct Calls to AWS
 *
 * \sa IoTClient::getV2LoggingOptions
 */

/*!
 * Constructs a GetV2LoggingOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetV2LoggingOptionsResponse::GetV2LoggingOptionsResponse(
        const GetV2LoggingOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new GetV2LoggingOptionsResponsePrivate(this), parent)
{
    setRequest(new GetV2LoggingOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetV2LoggingOptionsRequest * GetV2LoggingOptionsResponse::request() const
{
    Q_D(const GetV2LoggingOptionsResponse);
    return static_cast<const GetV2LoggingOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT GetV2LoggingOptions \a response.
 */
void GetV2LoggingOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetV2LoggingOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::GetV2LoggingOptionsResponsePrivate
 * \brief The GetV2LoggingOptionsResponsePrivate class provides private implementation for GetV2LoggingOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a GetV2LoggingOptionsResponsePrivate object with public implementation \a q.
 */
GetV2LoggingOptionsResponsePrivate::GetV2LoggingOptionsResponsePrivate(
    GetV2LoggingOptionsResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT GetV2LoggingOptions response element from \a xml.
 */
void GetV2LoggingOptionsResponsePrivate::parseGetV2LoggingOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetV2LoggingOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
