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

#include "deletev2logginglevelresponse.h"
#include "deletev2logginglevelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DeleteV2LoggingLevelResponse
 *
 * \brief The DeleteV2LoggingLevelResponse class provides an interace for IoT DeleteV2LoggingLevel responses.
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
 * \sa IoTClient::deleteV2LoggingLevel
 */

/*!
 * @brief  Constructs a new DeleteV2LoggingLevelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteV2LoggingLevelResponse::DeleteV2LoggingLevelResponse(
        const DeleteV2LoggingLevelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DeleteV2LoggingLevelResponsePrivate(this), parent)
{
    setRequest(new DeleteV2LoggingLevelRequest(request));
    setReply(reply);
}

const DeleteV2LoggingLevelRequest * DeleteV2LoggingLevelResponse::request() const
{
    Q_D(const DeleteV2LoggingLevelResponse);
    return static_cast<const DeleteV2LoggingLevelRequest *>(d->request);
}

/*!
 * @brief  Parse a IoT DeleteV2LoggingLevel response.
 *
 * @param  response  Response to parse.
 */
void DeleteV2LoggingLevelResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteV2LoggingLevelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteV2LoggingLevelResponsePrivate
 *
 * \brief Private implementation for DeleteV2LoggingLevelResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteV2LoggingLevelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteV2LoggingLevelResponse instance.
 */
DeleteV2LoggingLevelResponsePrivate::DeleteV2LoggingLevelResponsePrivate(
    DeleteV2LoggingLevelResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * @brief  Parse an IoT DeleteV2LoggingLevelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteV2LoggingLevelResponsePrivate::parseDeleteV2LoggingLevelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteV2LoggingLevelResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
