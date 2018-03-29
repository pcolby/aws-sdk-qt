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

#include "getconnectionsresponse.h"
#include "getconnectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  GetConnectionsResponse
 *
 * @brief  Handles Glue GetConnections responses.
 *
 * @see    GlueClient::getConnections
 */

/**
 * @brief  Constructs a new GetConnectionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetConnectionsResponse::GetConnectionsResponse(
        const GetConnectionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetConnectionsResponsePrivate(this), parent)
{
    setRequest(new GetConnectionsRequest(request));
    setReply(reply);
}

const GetConnectionsRequest * GetConnectionsResponse::request() const
{
    Q_D(const GetConnectionsResponse);
    return static_cast<const GetConnectionsRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetConnections response.
 *
 * @param  response  Response to parse.
 */
void GetConnectionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetConnectionsResponsePrivate
 *
 * @brief  Private implementation for GetConnectionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetConnectionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetConnectionsResponse instance.
 */
GetConnectionsResponsePrivate::GetConnectionsResponsePrivate(
    GetConnectionsQueueResponse * const q) : GetConnectionsPrivate(q)
{

}

/**
 * @brief  Parse an Glue GetConnectionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetConnectionsResponsePrivate::GetConnectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConnectionsResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
