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

#include "getsnapshotlimitsresponse.h"
#include "getsnapshotlimitsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectoryService {

/**
 * @class  GetSnapshotLimitsResponse
 *
 * @brief  Handles DirectoryService GetSnapshotLimits responses.
 *
 * @see    DirectoryServiceClient::getSnapshotLimits
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSnapshotLimitsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new GetSnapshotLimitsResponsePrivate(this), parent)
{
    setRequest(new GetSnapshotLimitsRequest(request));
    setReply(reply);
}

const GetSnapshotLimitsRequest * GetSnapshotLimitsResponse::request() const
{
    Q_D(const GetSnapshotLimitsResponse);
    return static_cast<const GetSnapshotLimitsRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService GetSnapshotLimits response.
 *
 * @param  response  Response to parse.
 */
void GetSnapshotLimitsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSnapshotLimitsResponsePrivate
 *
 * @brief  Private implementation for GetSnapshotLimitsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSnapshotLimitsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSnapshotLimitsResponse instance.
 */
GetSnapshotLimitsResponsePrivate::GetSnapshotLimitsResponsePrivate(
    GetSnapshotLimitsQueueResponse * const q) : GetSnapshotLimitsPrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService GetSnapshotLimitsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSnapshotLimitsResponsePrivate::GetSnapshotLimitsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSnapshotLimitsResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace AWS
