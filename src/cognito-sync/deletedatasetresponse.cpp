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

#include "deletedatasetresponse.h"
#include "deletedatasetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoSync {

/**
 * @class  DeleteDatasetResponse
 *
 * @brief  Handles CognitoSync DeleteDataset responses.
 *
 * @see    CognitoSyncClient::deleteDataset
 */

/**
 * @brief  Constructs a new DeleteDatasetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDatasetResponse::DeleteDatasetResponse(
        const DeleteDatasetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoSyncResponse(new DeleteDatasetResponsePrivate(this), parent)
{
    setRequest(new DeleteDatasetRequest(request));
    setReply(reply);
}

const DeleteDatasetRequest * DeleteDatasetResponse::request() const
{
    Q_D(const DeleteDatasetResponse);
    return static_cast<const DeleteDatasetRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoSync DeleteDataset response.
 *
 * @param  response  Response to parse.
 */
void DeleteDatasetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDatasetResponsePrivate
 *
 * @brief  Private implementation for DeleteDatasetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDatasetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDatasetResponse instance.
 */
DeleteDatasetResponsePrivate::DeleteDatasetResponsePrivate(
    DeleteDatasetQueueResponse * const q) : DeleteDatasetPrivate(q)
{

}

/**
 * @brief  Parse an CognitoSync DeleteDatasetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDatasetResponsePrivate::DeleteDatasetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDatasetResponse"));
    /// @todo
}

} // namespace CognitoSync
} // namespace AWS
