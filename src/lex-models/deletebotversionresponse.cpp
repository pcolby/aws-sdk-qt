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

#include "deletebotversionresponse.h"
#include "deletebotversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  DeleteBotVersionResponse
 *
 * @brief  Handles LexModelBuildingService DeleteBotVersion responses.
 *
 * @see    LexModelBuildingServiceClient::deleteBotVersion
 */

/**
 * @brief  Constructs a new DeleteBotVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBotVersionResponse::DeleteBotVersionResponse(
        const DeleteBotVersionRequest &request,
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
    Q_D(DeleteBotVersionResponse);
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
    DeleteBotVersionResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService DeleteBotVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBotVersionResponsePrivate::parseDeleteBotVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBotVersionResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
