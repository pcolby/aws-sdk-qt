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

#include "getreplicationrunsresponse.h"
#include "getreplicationrunsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/**
 * @class  GetReplicationRunsResponse
 *
 * @brief  Handles SMS GetReplicationRuns responses.
 *
 * @see    SMSClient::getReplicationRuns
 */

/**
 * @brief  Constructs a new GetReplicationRunsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetReplicationRunsResponse::GetReplicationRunsResponse(
        const GetReplicationRunsRequest &request,
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
    Q_D(GetReplicationRunsResponse);
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
    GetReplicationRunsResponse * const q) : SMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SMS GetReplicationRunsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetReplicationRunsResponsePrivate::parseGetReplicationRunsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReplicationRunsResponse"));
    /// @todo
}

} // namespace SMS
} // namespace QtAws
