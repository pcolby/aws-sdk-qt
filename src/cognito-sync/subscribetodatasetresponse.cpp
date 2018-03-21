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

#include "subscribetodatasetresponse.h"
#include "subscribetodatasetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoSync {

/**
 * @class  SubscribeToDatasetResponse
 *
 * @brief  Handles CognitoSync SubscribeToDataset responses.
 *
 * @see    CognitoSyncClient::subscribeToDataset
 */

/**
 * @brief  Constructs a new SubscribeToDatasetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SubscribeToDatasetResponse::SubscribeToDatasetResponse(
        const SubscribeToDatasetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoSyncResponse(new SubscribeToDatasetResponsePrivate(this), parent)
{
    setRequest(new SubscribeToDatasetRequest(request));
    setReply(reply);
}

const SubscribeToDatasetRequest * SubscribeToDatasetResponse::request() const
{
    Q_D(const SubscribeToDatasetResponse);
    return static_cast<const SubscribeToDatasetRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoSync SubscribeToDataset response.
 *
 * @param  response  Response to parse.
 */
void SubscribeToDatasetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SubscribeToDatasetResponsePrivate
 *
 * @brief  Private implementation for SubscribeToDatasetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SubscribeToDatasetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SubscribeToDatasetResponse instance.
 */
SubscribeToDatasetResponsePrivate::SubscribeToDatasetResponsePrivate(
    SubscribeToDatasetQueueResponse * const q) : SubscribeToDatasetPrivate(q)
{

}

/**
 * @brief  Parse an CognitoSync SubscribeToDatasetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SubscribeToDatasetResponsePrivate::SubscribeToDatasetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SubscribeToDatasetResponse"));
    /// @todo
}

} // namespace CognitoSync
} // namespace AWS
