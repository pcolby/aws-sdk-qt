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

#include "updatethingresponse.h"
#include "updatethingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::UpdateThingResponse
 *
 * \brief The UpdateThingResponse class provides an interace for IoT UpdateThing responses.
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
 * \sa IoTClient::updateThing
 */

/*!
 * @brief  Constructs a new UpdateThingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateThingResponse::UpdateThingResponse(
        const UpdateThingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new UpdateThingResponsePrivate(this), parent)
{
    setRequest(new UpdateThingRequest(request));
    setReply(reply);
}

const UpdateThingRequest * UpdateThingResponse::request() const
{
    Q_D(const UpdateThingResponse);
    return static_cast<const UpdateThingRequest *>(d->request);
}

/*!
 * @brief  Parse a IoT UpdateThing response.
 *
 * @param  response  Response to parse.
 */
void UpdateThingResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateThingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateThingResponsePrivate
 *
 * \brief Private implementation for UpdateThingResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateThingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateThingResponse instance.
 */
UpdateThingResponsePrivate::UpdateThingResponsePrivate(
    UpdateThingResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * @brief  Parse an IoT UpdateThingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateThingResponsePrivate::parseUpdateThingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateThingResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
