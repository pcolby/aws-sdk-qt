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

#include "deletebotversionresponse.h"
#include "deletebotversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  DeleteBotVersionResponse
 *
 * @brief  Handles LexModelBuildingService DeleteBotVersion responses.
 *
 * @see    LexModelBuildingServiceClient::deleteBotVersion
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBotVersionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new DeleteBotVersionResponsePrivate(this), parent)
{
    setRequest(new DeleteBotVersionRequest(request));
    setReply(reply);
}

const DeleteBotVersionRequest * DeleteBotVersionResponse::request() const
{
    Q_D(const DeleteBotVersionResponse);
    return static_cast<const DeleteBotVersionRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService DeleteBotVersion response.
 *
 * @param  response  Response to parse.
 */
void DeleteBotVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteBotVersionResponsePrivate
 *
 * @brief  Private implementation for DeleteBotVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBotVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBotVersionResponse instance.
 */
DeleteBotVersionResponsePrivate::DeleteBotVersionResponsePrivate(
    DeleteBotVersionQueueResponse * const q) : DeleteBotVersionPrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService DeleteBotVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBotVersionResponsePrivate::DeleteBotVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBotVersionResponse"));
    /// @todo
}
