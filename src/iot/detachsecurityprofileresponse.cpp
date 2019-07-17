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

#include "detachsecurityprofileresponse.h"
#include "detachsecurityprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DetachSecurityProfileResponse
 * \brief The DetachSecurityProfileResponse class provides an interace for IoT DetachSecurityProfile responses.
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
 *  Guide</a>>
 * 
 *  For information about how to use the credentials provider for AWS IoT, see <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing Direct Calls to AWS
 *
 * \sa IoTClient::detachSecurityProfile
 */

/*!
 * Constructs a DetachSecurityProfileResponse object for \a reply to \a request, with parent \a parent.
 */
DetachSecurityProfileResponse::DetachSecurityProfileResponse(
        const DetachSecurityProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DetachSecurityProfileResponsePrivate(this), parent)
{
    setRequest(new DetachSecurityProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetachSecurityProfileRequest * DetachSecurityProfileResponse::request() const
{
    Q_D(const DetachSecurityProfileResponse);
    return static_cast<const DetachSecurityProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT DetachSecurityProfile \a response.
 */
void DetachSecurityProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetachSecurityProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::DetachSecurityProfileResponsePrivate
 * \brief The DetachSecurityProfileResponsePrivate class provides private implementation for DetachSecurityProfileResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a DetachSecurityProfileResponsePrivate object with public implementation \a q.
 */
DetachSecurityProfileResponsePrivate::DetachSecurityProfileResponsePrivate(
    DetachSecurityProfileResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT DetachSecurityProfile response element from \a xml.
 */
void DetachSecurityProfileResponsePrivate::parseDetachSecurityProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachSecurityProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
