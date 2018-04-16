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

#include "stopthingregistrationtaskresponse.h"
#include "stopthingregistrationtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::StopThingRegistrationTaskResponse
 *
 * \brief The StopThingRegistrationTaskResponse class provides an interace for IoT StopThingRegistrationTask responses.
 *
 * \ingroup IoT
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
 * \sa IoTClient::stopThingRegistrationTask
 */

/*!
 * @brief  Constructs a new StopThingRegistrationTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopThingRegistrationTaskResponse::StopThingRegistrationTaskResponse(
        const StopThingRegistrationTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new StopThingRegistrationTaskResponsePrivate(this), parent)
{
    setRequest(new StopThingRegistrationTaskRequest(request));
    setReply(reply);
}

const StopThingRegistrationTaskRequest * StopThingRegistrationTaskResponse::request() const
{
    Q_D(const StopThingRegistrationTaskResponse);
    return static_cast<const StopThingRegistrationTaskRequest *>(d->request);
}

/*!
 * @brief  Parse a IoT StopThingRegistrationTask response.
 *
 * @param  response  Response to parse.
 */
void StopThingRegistrationTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(StopThingRegistrationTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class StopThingRegistrationTaskResponsePrivate
 *
 * \brief Private implementation for StopThingRegistrationTaskResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StopThingRegistrationTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopThingRegistrationTaskResponse instance.
 */
StopThingRegistrationTaskResponsePrivate::StopThingRegistrationTaskResponsePrivate(
    StopThingRegistrationTaskResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * @brief  Parse an IoT StopThingRegistrationTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopThingRegistrationTaskResponsePrivate::parseStopThingRegistrationTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopThingRegistrationTaskResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
