/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "registerthingresponse.h"
#include "registerthingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  RegisterThingResponse
 *
 * @brief  Handles IoT RegisterThing responses.
 *
 * @see    IoTClient::registerThing
 */

/**
 * @brief  Constructs a new RegisterThingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterThingResponse::RegisterThingResponse(
        const RegisterThingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new RegisterThingResponsePrivate(this), parent)
{
    setRequest(new RegisterThingRequest(request));
    setReply(reply);
}

const RegisterThingRequest * RegisterThingResponse::request() const
{
    Q_D(const RegisterThingResponse);
    return static_cast<const RegisterThingRequest *>(d->request);
}

/**
 * @brief  Parse a IoT RegisterThing response.
 *
 * @param  response  Response to parse.
 */
void RegisterThingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterThingResponsePrivate
 *
 * @brief  Private implementation for RegisterThingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterThingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterThingResponse instance.
 */
RegisterThingResponsePrivate::RegisterThingResponsePrivate(
    RegisterThingQueueResponse * const q) : RegisterThingPrivate(q)
{

}

/**
 * @brief  Parse an IoT RegisterThingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterThingResponsePrivate::RegisterThingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterThingResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
