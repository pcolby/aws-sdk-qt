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

#include "batchgetdeploymentinstancesresponse.h"
#include "batchgetdeploymentinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeDeploy {

/**
 * @class  BatchGetDeploymentInstancesResponse
 *
 * @brief  Handles CodeDeploy BatchGetDeploymentInstances responses.
 *
 * @see    CodeDeployClient::batchGetDeploymentInstances
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchGetDeploymentInstancesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new BatchGetDeploymentInstancesResponsePrivate(this), parent)
{
    setRequest(new BatchGetDeploymentInstancesRequest(request));
    setReply(reply);
}

const BatchGetDeploymentInstancesRequest * BatchGetDeploymentInstancesResponse::request() const
{
    Q_D(const BatchGetDeploymentInstancesResponse);
    return static_cast<const BatchGetDeploymentInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy BatchGetDeploymentInstances response.
 *
 * @param  response  Response to parse.
 */
void BatchGetDeploymentInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchGetDeploymentInstancesResponsePrivate
 *
 * @brief  Private implementation for BatchGetDeploymentInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetDeploymentInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchGetDeploymentInstancesResponse instance.
 */
BatchGetDeploymentInstancesResponsePrivate::BatchGetDeploymentInstancesResponsePrivate(
    BatchGetDeploymentInstancesQueueResponse * const q) : BatchGetDeploymentInstancesPrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy BatchGetDeploymentInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchGetDeploymentInstancesResponsePrivate::BatchGetDeploymentInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetDeploymentInstancesResponse"));
    /// @todo
}
