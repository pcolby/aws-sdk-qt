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

#include "listthingtypesresponse.h"
#include "listthingtypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  ListThingTypesResponse
 *
 * @brief  Handles IoT ListThingTypes responses.
 *
 * @see    IoTClient::listThingTypes
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListThingTypesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListThingTypesResponsePrivate(this), parent)
{
    setRequest(new ListThingTypesRequest(request));
    setReply(reply);
}

const ListThingTypesRequest * ListThingTypesResponse::request() const
{
    Q_D(const ListThingTypesResponse);
    return static_cast<const ListThingTypesRequest *>(d->request);
}

/**
 * @brief  Parse a IoT ListThingTypes response.
 *
 * @param  response  Response to parse.
 */
void ListThingTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListThingTypesResponsePrivate
 *
 * @brief  Private implementation for ListThingTypesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListThingTypesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListThingTypesResponse instance.
 */
ListThingTypesResponsePrivate::ListThingTypesResponsePrivate(
    ListThingTypesQueueResponse * const q) : ListThingTypesPrivate(q)
{

}

/**
 * @brief  Parse an IoT ListThingTypesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListThingTypesResponsePrivate::ListThingTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListThingTypesResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
