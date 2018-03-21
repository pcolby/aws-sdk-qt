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

#include "getdatabasesresponse.h"
#include "getdatabasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  GetDatabasesResponse
 *
 * @brief  Handles Glue GetDatabases responses.
 *
 * @see    GlueClient::getDatabases
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDatabasesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetDatabasesResponsePrivate(this), parent)
{
    setRequest(new GetDatabasesRequest(request));
    setReply(reply);
}

const GetDatabasesRequest * GetDatabasesResponse::request() const
{
    Q_D(const GetDatabasesResponse);
    return static_cast<const GetDatabasesRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetDatabases response.
 *
 * @param  response  Response to parse.
 */
void GetDatabasesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDatabasesResponsePrivate
 *
 * @brief  Private implementation for GetDatabasesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDatabasesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDatabasesResponse instance.
 */
GetDatabasesResponsePrivate::GetDatabasesResponsePrivate(
    GetDatabasesQueueResponse * const q) : GetDatabasesPrivate(q)
{

}

/**
 * @brief  Parse an Glue GetDatabasesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDatabasesResponsePrivate::GetDatabasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDatabasesResponse"));
    /// @todo
}
