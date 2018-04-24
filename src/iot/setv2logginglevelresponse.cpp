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

#include "setv2logginglevelresponse.h"
#include "setv2logginglevelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::SetV2LoggingLevelResponse
 * \brief The SetV2LoggingLevelResponse class provides an interace for IoT SetV2LoggingLevel responses.
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
 * \sa IoTClient::setV2LoggingLevel
 */

/*!
 * Constructs a SetV2LoggingLevelResponse object for \a reply to \a request, with parent \a parent.
 */
SetV2LoggingLevelResponse::SetV2LoggingLevelResponse(
        const SetV2LoggingLevelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new SetV2LoggingLevelResponsePrivate(this), parent)
{
    setRequest(new SetV2LoggingLevelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetV2LoggingLevelRequest * SetV2LoggingLevelResponse::request() const
{
    Q_D(const SetV2LoggingLevelResponse);
    return static_cast<const SetV2LoggingLevelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT SetV2LoggingLevel \a response.
 */
void SetV2LoggingLevelResponse::parseSuccess(QIODevice &response)
{
    Q_D(SetV2LoggingLevelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::SetV2LoggingLevelResponsePrivate
 * \brief The SetV2LoggingLevelResponsePrivate class provides private implementation for SetV2LoggingLevelResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a SetV2LoggingLevelResponsePrivate object with public implementation \a q.
 */
SetV2LoggingLevelResponsePrivate::SetV2LoggingLevelResponsePrivate(
    SetV2LoggingLevelResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT SetV2LoggingLevel response element from \a xml.
 */
void SetV2LoggingLevelResponsePrivate::parseSetV2LoggingLevelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetV2LoggingLevelResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
