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

#include "updateindexingconfigurationresponse.h"
#include "updateindexingconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::UpdateIndexingConfigurationResponse
 *
 * \brief The UpdateIndexingConfigurationResponse class encapsulates IoT UpdateIndexingConfiguration responses.
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
 * \sa IoTClient::updateIndexingConfiguration
 */

/*!
 * @brief  Constructs a new UpdateIndexingConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateIndexingConfigurationResponse::UpdateIndexingConfigurationResponse(
        const UpdateIndexingConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new UpdateIndexingConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateIndexingConfigurationRequest(request));
    setReply(reply);
}

const UpdateIndexingConfigurationRequest * UpdateIndexingConfigurationResponse::request() const
{
    Q_D(const UpdateIndexingConfigurationResponse);
    return static_cast<const UpdateIndexingConfigurationRequest *>(d->request);
}

/*!
 * @brief  Parse a IoT UpdateIndexingConfiguration response.
 *
 * @param  response  Response to parse.
 */
void UpdateIndexingConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateIndexingConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateIndexingConfigurationResponsePrivate
 *
 * \brief Private implementation for UpdateIndexingConfigurationResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateIndexingConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateIndexingConfigurationResponse instance.
 */
UpdateIndexingConfigurationResponsePrivate::UpdateIndexingConfigurationResponsePrivate(
    UpdateIndexingConfigurationResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * @brief  Parse an IoT UpdateIndexingConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateIndexingConfigurationResponsePrivate::parseUpdateIndexingConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateIndexingConfigurationResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
