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

#include "deletebotaliasresponse.h"
#include "deletebotaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  DeleteBotAliasResponse
 *
 * @brief  Handles LexModelBuildingService DeleteBotAlias responses.
 *
 * @see    LexModelBuildingServiceClient::deleteBotAlias
 */

/**
 * @brief  Constructs a new DeleteBotAliasResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBotAliasResponse::DeleteBotAliasResponse(
        const DeleteBotAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new DeleteBotAliasResponsePrivate(this), parent)
{
    setRequest(new DeleteBotAliasRequest(request));
    setReply(reply);
}

const DeleteBotAliasRequest * DeleteBotAliasResponse::request() const
{
    Q_D(const DeleteBotAliasResponse);
    return static_cast<const DeleteBotAliasRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService DeleteBotAlias response.
 *
 * @param  response  Response to parse.
 */
void DeleteBotAliasResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteBotAliasResponsePrivate
 *
 * @brief  Private implementation for DeleteBotAliasResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBotAliasResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBotAliasResponse instance.
 */
DeleteBotAliasResponsePrivate::DeleteBotAliasResponsePrivate(
    DeleteBotAliasQueueResponse * const q) : DeleteBotAliasPrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService DeleteBotAliasResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBotAliasResponsePrivate::DeleteBotAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBotAliasResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace AWS
