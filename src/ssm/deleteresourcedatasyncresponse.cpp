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

#include "deleteresourcedatasyncresponse.h"
#include "deleteresourcedatasyncresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  DeleteResourceDataSyncResponse
 *
 * @brief  Handles SSM DeleteResourceDataSync responses.
 *
 * @see    SSMClient::deleteResourceDataSync
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteResourceDataSyncResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DeleteResourceDataSyncResponsePrivate(this), parent)
{
    setRequest(new DeleteResourceDataSyncRequest(request));
    setReply(reply);
}

const DeleteResourceDataSyncRequest * DeleteResourceDataSyncResponse::request() const
{
    Q_D(const DeleteResourceDataSyncResponse);
    return static_cast<const DeleteResourceDataSyncRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DeleteResourceDataSync response.
 *
 * @param  response  Response to parse.
 */
void DeleteResourceDataSyncResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteResourceDataSyncResponsePrivate
 *
 * @brief  Private implementation for DeleteResourceDataSyncResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteResourceDataSyncResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteResourceDataSyncResponse instance.
 */
DeleteResourceDataSyncResponsePrivate::DeleteResourceDataSyncResponsePrivate(
    DeleteResourceDataSyncQueueResponse * const q) : DeleteResourceDataSyncPrivate(q)
{

}

/**
 * @brief  Parse an SSM DeleteResourceDataSyncResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteResourceDataSyncResponsePrivate::DeleteResourceDataSyncResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteResourceDataSyncResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS
