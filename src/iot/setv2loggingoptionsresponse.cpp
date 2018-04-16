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

#include "setv2loggingoptionsresponse.h"
#include "setv2loggingoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::SetV2LoggingOptionsResponse
 *
 * \brief The SetV2LoggingOptionsResponse class encapsulates IoT SetV2LoggingOptions responses.
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
 * \sa IoTClient::setV2LoggingOptions
 */

/*!
 * @brief  Constructs a new SetV2LoggingOptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetV2LoggingOptionsResponse::SetV2LoggingOptionsResponse(
        const SetV2LoggingOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new SetV2LoggingOptionsResponsePrivate(this), parent)
{
    setRequest(new SetV2LoggingOptionsRequest(request));
    setReply(reply);
}

const SetV2LoggingOptionsRequest * SetV2LoggingOptionsResponse::request() const
{
    Q_D(const SetV2LoggingOptionsResponse);
    return static_cast<const SetV2LoggingOptionsRequest *>(d->request);
}

/*!
 * @brief  Parse a IoT SetV2LoggingOptions response.
 *
 * @param  response  Response to parse.
 */
void SetV2LoggingOptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(SetV2LoggingOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class SetV2LoggingOptionsResponsePrivate
 *
 * \brief Private implementation for SetV2LoggingOptionsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SetV2LoggingOptionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetV2LoggingOptionsResponse instance.
 */
SetV2LoggingOptionsResponsePrivate::SetV2LoggingOptionsResponsePrivate(
    SetV2LoggingOptionsResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * @brief  Parse an IoT SetV2LoggingOptionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetV2LoggingOptionsResponsePrivate::parseSetV2LoggingOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetV2LoggingOptionsResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
