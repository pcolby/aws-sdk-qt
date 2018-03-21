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

#include "getqueryresultsresponse.h"
#include "getqueryresultsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Athena {

/**
 * @class  GetQueryResultsResponse
 *
 * @brief  Handles Athena GetQueryResults responses.
 *
 * @see    AthenaClient::getQueryResults
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetQueryResultsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AthenaResponse(new GetQueryResultsResponsePrivate(this), parent)
{
    setRequest(new GetQueryResultsRequest(request));
    setReply(reply);
}

const GetQueryResultsRequest * GetQueryResultsResponse::request() const
{
    Q_D(const GetQueryResultsResponse);
    return static_cast<const GetQueryResultsRequest *>(d->request);
}

/**
 * @brief  Parse a Athena GetQueryResults response.
 *
 * @param  response  Response to parse.
 */
void GetQueryResultsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetQueryResultsResponsePrivate
 *
 * @brief  Private implementation for GetQueryResultsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetQueryResultsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetQueryResultsResponse instance.
 */
GetQueryResultsResponsePrivate::GetQueryResultsResponsePrivate(
    GetQueryResultsQueueResponse * const q) : GetQueryResultsPrivate(q)
{

}

/**
 * @brief  Parse an Athena GetQueryResultsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetQueryResultsResponsePrivate::GetQueryResultsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQueryResultsResponse"));
    /// @todo
}
