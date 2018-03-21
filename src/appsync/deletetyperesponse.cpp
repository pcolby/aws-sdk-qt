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

#include "deletetyperesponse.h"
#include "deletetyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AppSync {

/**
 * @class  DeleteTypeResponse
 *
 * @brief  Handles AppSync DeleteType responses.
 *
 * @see    AppSyncClient::deleteType
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteTypeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new DeleteTypeResponsePrivate(this), parent)
{
    setRequest(new DeleteTypeRequest(request));
    setReply(reply);
}

const DeleteTypeRequest * DeleteTypeResponse::request() const
{
    Q_D(const DeleteTypeResponse);
    return static_cast<const DeleteTypeRequest *>(d->request);
}

/**
 * @brief  Parse a AppSync DeleteType response.
 *
 * @param  response  Response to parse.
 */
void DeleteTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteTypeResponsePrivate
 *
 * @brief  Private implementation for DeleteTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteTypeResponse instance.
 */
DeleteTypeResponsePrivate::DeleteTypeResponsePrivate(
    DeleteTypeQueueResponse * const q) : DeleteTypePrivate(q)
{

}

/**
 * @brief  Parse an AppSync DeleteTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteTypeResponsePrivate::DeleteTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTypeResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace AWS
