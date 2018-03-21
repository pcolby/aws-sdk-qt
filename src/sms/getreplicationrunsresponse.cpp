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

#include "getreplicationrunsresponse.h"
#include "getreplicationrunsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SMS {

/**
 * @class  GetReplicationRunsResponse
 *
 * @brief  Handles SMS GetReplicationRuns responses.
 *
 * @see    SMSClient::getReplicationRuns
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetReplicationRunsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SMSResponse(new GetReplicationRunsResponsePrivate(this), parent)
{
    setRequest(new GetReplicationRunsRequest(request));
    setReply(reply);
}

const GetReplicationRunsRequest * GetReplicationRunsResponse::request() const
{
    Q_D(const GetReplicationRunsResponse);
    return static_cast<const GetReplicationRunsRequest *>(d->request);
}

/**
 * @brief  Parse a SMS GetReplicationRuns response.
 *
 * @param  response  Response to parse.
 */
void GetReplicationRunsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetReplicationRunsResponsePrivate
 *
 * @brief  Private implementation for GetReplicationRunsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetReplicationRunsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetReplicationRunsResponse instance.
 */
GetReplicationRunsResponsePrivate::GetReplicationRunsResponsePrivate(
    GetReplicationRunsQueueResponse * const q) : GetReplicationRunsPrivate(q)
{

}

/**
 * @brief  Parse an SMS GetReplicationRunsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetReplicationRunsResponsePrivate::GetReplicationRunsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReplicationRunsResponse"));
    /// @todo
}

} // namespace SMS
} // namespace AWS
