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

#include "testauthorizationresponse.h"
#include "testauthorizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::TestAuthorizationResponse
 * \brief The TestAuthorizationResponse class provides an interace for IoT TestAuthorization responses.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  thing (Thing Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  things>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 *
 * \sa IoTClient::testAuthorization
 */

/*!
 * Constructs a TestAuthorizationResponse object for \a reply to \a request, with parent \a parent.
 */
TestAuthorizationResponse::TestAuthorizationResponse(
        const TestAuthorizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new TestAuthorizationResponsePrivate(this), parent)
{
    setRequest(new TestAuthorizationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TestAuthorizationRequest * TestAuthorizationResponse::request() const
{
    Q_D(const TestAuthorizationResponse);
    return static_cast<const TestAuthorizationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT TestAuthorization \a response.
 */
void TestAuthorizationResponse::parseSuccess(QIODevice &response)
{
    Q_D(TestAuthorizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::TestAuthorizationResponsePrivate
 * \brief The TestAuthorizationResponsePrivate class provides private implementation for TestAuthorizationResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a TestAuthorizationResponsePrivate object with public implementation \a q.
 */
TestAuthorizationResponsePrivate::TestAuthorizationResponsePrivate(
    TestAuthorizationResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT TestAuthorization response element from \a xml.
 */
void TestAuthorizationResponsePrivate::parseTestAuthorizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestAuthorizationResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
