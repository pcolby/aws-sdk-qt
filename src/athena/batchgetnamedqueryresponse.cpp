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

#include "batchgetnamedqueryresponse.h"
#include "batchgetnamedqueryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Athena {

/**
 * @class  BatchGetNamedQueryResponse
 *
 * @brief  Handles Athena BatchGetNamedQuery responses.
 *
 * @see    AthenaClient::batchGetNamedQuery
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchGetNamedQueryResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AthenaResponse(new BatchGetNamedQueryResponsePrivate(this), parent)
{
    setRequest(new BatchGetNamedQueryRequest(request));
    setReply(reply);
}

const BatchGetNamedQueryRequest * BatchGetNamedQueryResponse::request() const
{
    Q_D(const BatchGetNamedQueryResponse);
    return static_cast<const BatchGetNamedQueryRequest *>(d->request);
}

/**
 * @brief  Parse a Athena BatchGetNamedQuery response.
 *
 * @param  response  Response to parse.
 */
void BatchGetNamedQueryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchGetNamedQueryResponsePrivate
 *
 * @brief  Private implementation for BatchGetNamedQueryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetNamedQueryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchGetNamedQueryResponse instance.
 */
BatchGetNamedQueryResponsePrivate::BatchGetNamedQueryResponsePrivate(
    BatchGetNamedQueryQueueResponse * const q) : BatchGetNamedQueryPrivate(q)
{

}

/**
 * @brief  Parse an Athena BatchGetNamedQueryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchGetNamedQueryResponsePrivate::BatchGetNamedQueryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetNamedQueryResponse"));
    /// @todo
}
