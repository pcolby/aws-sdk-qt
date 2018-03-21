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

#include "startdevicesyncresponse.h"
#include "startdevicesyncresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  StartDeviceSyncResponse
 *
 * @brief  Handles AlexaForBusiness StartDeviceSync responses.
 *
 * @see    AlexaForBusinessClient::startDeviceSync
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartDeviceSyncResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new StartDeviceSyncResponsePrivate(this), parent)
{
    setRequest(new StartDeviceSyncRequest(request));
    setReply(reply);
}

const StartDeviceSyncRequest * StartDeviceSyncResponse::request() const
{
    Q_D(const StartDeviceSyncResponse);
    return static_cast<const StartDeviceSyncRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness StartDeviceSync response.
 *
 * @param  response  Response to parse.
 */
void StartDeviceSyncResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartDeviceSyncResponsePrivate
 *
 * @brief  Private implementation for StartDeviceSyncResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartDeviceSyncResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartDeviceSyncResponse instance.
 */
StartDeviceSyncResponsePrivate::StartDeviceSyncResponsePrivate(
    StartDeviceSyncQueueResponse * const q) : StartDeviceSyncPrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness StartDeviceSyncResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartDeviceSyncResponsePrivate::StartDeviceSyncResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartDeviceSyncResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace AWS
