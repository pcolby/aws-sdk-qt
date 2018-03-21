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

#include "deletebotresponse.h"
#include "deletebotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  DeleteBotResponse
 *
 * @brief  Handles LexModelBuildingService DeleteBot responses.
 *
 * @see    LexModelBuildingServiceClient::deleteBot
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBotResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new DeleteBotResponsePrivate(this), parent)
{
    setRequest(new DeleteBotRequest(request));
    setReply(reply);
}

const DeleteBotRequest * DeleteBotResponse::request() const
{
    Q_D(const DeleteBotResponse);
    return static_cast<const DeleteBotRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService DeleteBot response.
 *
 * @param  response  Response to parse.
 */
void DeleteBotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteBotResponsePrivate
 *
 * @brief  Private implementation for DeleteBotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBotResponse instance.
 */
DeleteBotResponsePrivate::DeleteBotResponsePrivate(
    DeleteBotQueueResponse * const q) : DeleteBotPrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService DeleteBotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBotResponsePrivate::DeleteBotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBotResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace AWS
