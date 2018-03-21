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

#include "deleteusageplankeyresponse.h"
#include "deleteusageplankeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  DeleteUsagePlanKeyResponse
 *
 * @brief  Handles APIGateway DeleteUsagePlanKey responses.
 *
 * @see    APIGatewayClient::deleteUsagePlanKey
 */

/**
 * @brief  Constructs a new DeleteUsagePlanKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteUsagePlanKeyResponse::DeleteUsagePlanKeyResponse(
        const DeleteUsagePlanKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteUsagePlanKeyResponsePrivate(this), parent)
{
    setRequest(new DeleteUsagePlanKeyRequest(request));
    setReply(reply);
}

const DeleteUsagePlanKeyRequest * DeleteUsagePlanKeyResponse::request() const
{
    Q_D(const DeleteUsagePlanKeyResponse);
    return static_cast<const DeleteUsagePlanKeyRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway DeleteUsagePlanKey response.
 *
 * @param  response  Response to parse.
 */
void DeleteUsagePlanKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteUsagePlanKeyResponsePrivate
 *
 * @brief  Private implementation for DeleteUsagePlanKeyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUsagePlanKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteUsagePlanKeyResponse instance.
 */
DeleteUsagePlanKeyResponsePrivate::DeleteUsagePlanKeyResponsePrivate(
    DeleteUsagePlanKeyQueueResponse * const q) : DeleteUsagePlanKeyPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway DeleteUsagePlanKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteUsagePlanKeyResponsePrivate::DeleteUsagePlanKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUsagePlanKeyResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
