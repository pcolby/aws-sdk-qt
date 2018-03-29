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

#include "createthingresponse.h"
#include "createthingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  CreateThingResponse
 *
 * @brief  Handles IoT CreateThing responses.
 *
 * @see    IoTClient::createThing
 */

/**
 * @brief  Constructs a new CreateThingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateThingResponse::CreateThingResponse(
        const CreateThingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new CreateThingResponsePrivate(this), parent)
{
    setRequest(new CreateThingRequest(request));
    setReply(reply);
}

const CreateThingRequest * CreateThingResponse::request() const
{
    Q_D(const CreateThingResponse);
    return static_cast<const CreateThingRequest *>(d->request);
}

/**
 * @brief  Parse a IoT CreateThing response.
 *
 * @param  response  Response to parse.
 */
void CreateThingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateThingResponsePrivate
 *
 * @brief  Private implementation for CreateThingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateThingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateThingResponse instance.
 */
CreateThingResponsePrivate::CreateThingResponsePrivate(
    CreateThingQueueResponse * const q) : CreateThingPrivate(q)
{

}

/**
 * @brief  Parse an IoT CreateThingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateThingResponsePrivate::CreateThingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateThingResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
