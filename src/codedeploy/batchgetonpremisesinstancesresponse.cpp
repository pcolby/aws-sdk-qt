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

#include "batchgetonpremisesinstancesresponse.h"
#include "batchgetonpremisesinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  BatchGetOnPremisesInstancesResponse
 *
 * @brief  Handles CodeDeploy BatchGetOnPremisesInstances responses.
 *
 * @see    CodeDeployClient::batchGetOnPremisesInstances
 */

/**
 * @brief  Constructs a new BatchGetOnPremisesInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchGetOnPremisesInstancesResponse::BatchGetOnPremisesInstancesResponse(
        const BatchGetOnPremisesInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new BatchGetOnPremisesInstancesResponsePrivate(this), parent)
{
    setRequest(new BatchGetOnPremisesInstancesRequest(request));
    setReply(reply);
}

const BatchGetOnPremisesInstancesRequest * BatchGetOnPremisesInstancesResponse::request() const
{
    Q_D(const BatchGetOnPremisesInstancesResponse);
    return static_cast<const BatchGetOnPremisesInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy BatchGetOnPremisesInstances response.
 *
 * @param  response  Response to parse.
 */
void BatchGetOnPremisesInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(BatchGetOnPremisesInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchGetOnPremisesInstancesResponsePrivate
 *
 * @brief  Private implementation for BatchGetOnPremisesInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetOnPremisesInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchGetOnPremisesInstancesResponse instance.
 */
BatchGetOnPremisesInstancesResponsePrivate::BatchGetOnPremisesInstancesResponsePrivate(
    BatchGetOnPremisesInstancesResponse * const q) : CodeDeployResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy BatchGetOnPremisesInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchGetOnPremisesInstancesResponsePrivate::BatchGetOnPremisesInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetOnPremisesInstancesResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace QtAws
