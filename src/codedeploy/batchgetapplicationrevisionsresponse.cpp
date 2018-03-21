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

#include "batchgetapplicationrevisionsresponse.h"
#include "batchgetapplicationrevisionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeDeploy {

/**
 * @class  BatchGetApplicationRevisionsResponse
 *
 * @brief  Handles CodeDeploy BatchGetApplicationRevisions responses.
 *
 * @see    CodeDeployClient::batchGetApplicationRevisions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchGetApplicationRevisionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new BatchGetApplicationRevisionsResponsePrivate(this), parent)
{
    setRequest(new BatchGetApplicationRevisionsRequest(request));
    setReply(reply);
}

const BatchGetApplicationRevisionsRequest * BatchGetApplicationRevisionsResponse::request() const
{
    Q_D(const BatchGetApplicationRevisionsResponse);
    return static_cast<const BatchGetApplicationRevisionsRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy BatchGetApplicationRevisions response.
 *
 * @param  response  Response to parse.
 */
void BatchGetApplicationRevisionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchGetApplicationRevisionsResponsePrivate
 *
 * @brief  Private implementation for BatchGetApplicationRevisionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetApplicationRevisionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchGetApplicationRevisionsResponse instance.
 */
BatchGetApplicationRevisionsResponsePrivate::BatchGetApplicationRevisionsResponsePrivate(
    BatchGetApplicationRevisionsQueueResponse * const q) : BatchGetApplicationRevisionsPrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy BatchGetApplicationRevisionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchGetApplicationRevisionsResponsePrivate::BatchGetApplicationRevisionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetApplicationRevisionsResponse"));
    /// @todo
}
