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

#include "deletebotchannelassociationresponse.h"
#include "deletebotchannelassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  DeleteBotChannelAssociationResponse
 *
 * @brief  Handles LexModelBuildingService DeleteBotChannelAssociation responses.
 *
 * @see    LexModelBuildingServiceClient::deleteBotChannelAssociation
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBotChannelAssociationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new DeleteBotChannelAssociationResponsePrivate(this), parent)
{
    setRequest(new DeleteBotChannelAssociationRequest(request));
    setReply(reply);
}

const DeleteBotChannelAssociationRequest * DeleteBotChannelAssociationResponse::request() const
{
    Q_D(const DeleteBotChannelAssociationResponse);
    return static_cast<const DeleteBotChannelAssociationRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService DeleteBotChannelAssociation response.
 *
 * @param  response  Response to parse.
 */
void DeleteBotChannelAssociationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteBotChannelAssociationResponsePrivate
 *
 * @brief  Private implementation for DeleteBotChannelAssociationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBotChannelAssociationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBotChannelAssociationResponse instance.
 */
DeleteBotChannelAssociationResponsePrivate::DeleteBotChannelAssociationResponsePrivate(
    DeleteBotChannelAssociationQueueResponse * const q) : DeleteBotChannelAssociationPrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService DeleteBotChannelAssociationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBotChannelAssociationResponsePrivate::DeleteBotChannelAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBotChannelAssociationResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace AWS
