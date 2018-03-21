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

#include "deletealiasresponse.h"
#include "deletealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  DeleteAliasResponse
 *
 * @brief  Handles GameLift DeleteAlias responses.
 *
 * @see    GameLiftClient::deleteAlias
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteAliasResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new DeleteAliasResponsePrivate(this), parent)
{
    setRequest(new DeleteAliasRequest(request));
    setReply(reply);
}

const DeleteAliasRequest * DeleteAliasResponse::request() const
{
    Q_D(const DeleteAliasResponse);
    return static_cast<const DeleteAliasRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DeleteAlias response.
 *
 * @param  response  Response to parse.
 */
void DeleteAliasResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteAliasResponsePrivate
 *
 * @brief  Private implementation for DeleteAliasResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAliasResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteAliasResponse instance.
 */
DeleteAliasResponsePrivate::DeleteAliasResponsePrivate(
    DeleteAliasQueueResponse * const q) : DeleteAliasPrivate(q)
{

}

/**
 * @brief  Parse an GameLift DeleteAliasResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteAliasResponsePrivate::DeleteAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAliasResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace AWS
