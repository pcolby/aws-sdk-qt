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

#include "getqueryexecutionresponse.h"
#include "getqueryexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Athena {

/**
 * @class  GetQueryExecutionResponse
 *
 * @brief  Handles Athena GetQueryExecution responses.
 *
 * @see    AthenaClient::getQueryExecution
 */

/**
 * @brief  Constructs a new GetQueryExecutionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetQueryExecutionResponse::GetQueryExecutionResponse(
        const GetQueryExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AthenaResponse(new GetQueryExecutionResponsePrivate(this), parent)
{
    setRequest(new GetQueryExecutionRequest(request));
    setReply(reply);
}

const GetQueryExecutionRequest * GetQueryExecutionResponse::request() const
{
    Q_D(const GetQueryExecutionResponse);
    return static_cast<const GetQueryExecutionRequest *>(d->request);
}

/**
 * @brief  Parse a Athena GetQueryExecution response.
 *
 * @param  response  Response to parse.
 */
void GetQueryExecutionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetQueryExecutionResponsePrivate
 *
 * @brief  Private implementation for GetQueryExecutionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetQueryExecutionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetQueryExecutionResponse instance.
 */
GetQueryExecutionResponsePrivate::GetQueryExecutionResponsePrivate(
    GetQueryExecutionQueueResponse * const q) : GetQueryExecutionPrivate(q)
{

}

/**
 * @brief  Parse an Athena GetQueryExecutionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetQueryExecutionResponsePrivate::GetQueryExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQueryExecutionResponse"));
    /// @todo
}

} // namespace Athena
} // namespace QtAws
