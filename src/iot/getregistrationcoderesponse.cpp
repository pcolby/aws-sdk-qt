/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getregistrationcoderesponse.h"
#include "getregistrationcoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::GetRegistrationCodeResponse
 * \brief The GetRegistrationCodeResponse class provides an interace for IoT GetRegistrationCode responses.
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
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 *
 * \sa IoTClient::getRegistrationCode
 */

/*!
 * Constructs a GetRegistrationCodeResponse object for \a reply to \a request, with parent \a parent.
 */
GetRegistrationCodeResponse::GetRegistrationCodeResponse(
        const GetRegistrationCodeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new GetRegistrationCodeResponsePrivate(this), parent)
{
    setRequest(new GetRegistrationCodeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRegistrationCodeRequest * GetRegistrationCodeResponse::request() const
{
    Q_D(const GetRegistrationCodeResponse);
    return static_cast<const GetRegistrationCodeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT GetRegistrationCode \a response.
 */
void GetRegistrationCodeResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetRegistrationCodeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::GetRegistrationCodeResponsePrivate
 * \brief The GetRegistrationCodeResponsePrivate class provides private implementation for GetRegistrationCodeResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a GetRegistrationCodeResponsePrivate object with public implementation \a q.
 */
GetRegistrationCodeResponsePrivate::GetRegistrationCodeResponsePrivate(
    GetRegistrationCodeResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT GetRegistrationCode response element from \a xml.
 */
void GetRegistrationCodeResponsePrivate::parseGetRegistrationCodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRegistrationCodeResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
