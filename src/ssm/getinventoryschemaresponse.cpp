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

#include "getinventoryschemaresponse.h"
#include "getinventoryschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  GetInventorySchemaResponse
 *
 * @brief  Handles SSM GetInventorySchema responses.
 *
 * @see    SSMClient::getInventorySchema
 */

/**
 * @brief  Constructs a new GetInventorySchemaResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetInventorySchemaResponse::GetInventorySchemaResponse(
        const GetInventorySchemaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new GetInventorySchemaResponsePrivate(this), parent)
{
    setRequest(new GetInventorySchemaRequest(request));
    setReply(reply);
}

const GetInventorySchemaRequest * GetInventorySchemaResponse::request() const
{
    Q_D(const GetInventorySchemaResponse);
    return static_cast<const GetInventorySchemaRequest *>(d->request);
}

/**
 * @brief  Parse a SSM GetInventorySchema response.
 *
 * @param  response  Response to parse.
 */
void GetInventorySchemaResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetInventorySchemaResponsePrivate
 *
 * @brief  Private implementation for GetInventorySchemaResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInventorySchemaResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetInventorySchemaResponse instance.
 */
GetInventorySchemaResponsePrivate::GetInventorySchemaResponsePrivate(
    GetInventorySchemaQueueResponse * const q) : GetInventorySchemaPrivate(q)
{

}

/**
 * @brief  Parse an SSM GetInventorySchemaResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetInventorySchemaResponsePrivate::GetInventorySchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInventorySchemaResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
