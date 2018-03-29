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

#include "stopqueryexecutionresponse.h"
#include "stopqueryexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Athena {

/**
 * @class  StopQueryExecutionResponse
 *
 * @brief  Handles Athena StopQueryExecution responses.
 *
 * @see    AthenaClient::stopQueryExecution
 */

/**
 * @brief  Constructs a new StopQueryExecutionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopQueryExecutionResponse::StopQueryExecutionResponse(
        const StopQueryExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AthenaResponse(new StopQueryExecutionResponsePrivate(this), parent)
{
    setRequest(new StopQueryExecutionRequest(request));
    setReply(reply);
}

const StopQueryExecutionRequest * StopQueryExecutionResponse::request() const
{
    Q_D(const StopQueryExecutionResponse);
    return static_cast<const StopQueryExecutionRequest *>(d->request);
}

/**
 * @brief  Parse a Athena StopQueryExecution response.
 *
 * @param  response  Response to parse.
 */
void StopQueryExecutionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopQueryExecutionResponsePrivate
 *
 * @brief  Private implementation for StopQueryExecutionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopQueryExecutionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopQueryExecutionResponse instance.
 */
StopQueryExecutionResponsePrivate::StopQueryExecutionResponsePrivate(
    StopQueryExecutionResponse * const q) : AthenaResponsePrivate(q)
{

}

/**
 * @brief  Parse an Athena StopQueryExecutionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopQueryExecutionResponsePrivate::StopQueryExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopQueryExecutionResponse"));
    /// @todo
}

} // namespace Athena
} // namespace QtAws
