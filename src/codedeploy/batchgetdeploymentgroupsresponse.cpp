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

#include "batchgetdeploymentgroupsresponse.h"
#include "batchgetdeploymentgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeDeploy {

/**
 * @class  BatchGetDeploymentGroupsResponse
 *
 * @brief  Handles CodeDeploy BatchGetDeploymentGroups responses.
 *
 * @see    CodeDeployClient::batchGetDeploymentGroups
 */

/**
 * @brief  Constructs a new BatchGetDeploymentGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchGetDeploymentGroupsResponse::BatchGetDeploymentGroupsResponse(
        const BatchGetDeploymentGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new BatchGetDeploymentGroupsResponsePrivate(this), parent)
{
    setRequest(new BatchGetDeploymentGroupsRequest(request));
    setReply(reply);
}

const BatchGetDeploymentGroupsRequest * BatchGetDeploymentGroupsResponse::request() const
{
    Q_D(const BatchGetDeploymentGroupsResponse);
    return static_cast<const BatchGetDeploymentGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy BatchGetDeploymentGroups response.
 *
 * @param  response  Response to parse.
 */
void BatchGetDeploymentGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchGetDeploymentGroupsResponsePrivate
 *
 * @brief  Private implementation for BatchGetDeploymentGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetDeploymentGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchGetDeploymentGroupsResponse instance.
 */
BatchGetDeploymentGroupsResponsePrivate::BatchGetDeploymentGroupsResponsePrivate(
    BatchGetDeploymentGroupsQueueResponse * const q) : BatchGetDeploymentGroupsPrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy BatchGetDeploymentGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchGetDeploymentGroupsResponsePrivate::BatchGetDeploymentGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetDeploymentGroupsResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace AWS
