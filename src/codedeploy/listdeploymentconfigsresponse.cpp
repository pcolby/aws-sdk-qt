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

#include "listdeploymentconfigsresponse.h"
#include "listdeploymentconfigsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  ListDeploymentConfigsResponse
 *
 * @brief  Handles CodeDeploy ListDeploymentConfigs responses.
 *
 * @see    CodeDeployClient::listDeploymentConfigs
 */

/**
 * @brief  Constructs a new ListDeploymentConfigsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDeploymentConfigsResponse::ListDeploymentConfigsResponse(
        const ListDeploymentConfigsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new ListDeploymentConfigsResponsePrivate(this), parent)
{
    setRequest(new ListDeploymentConfigsRequest(request));
    setReply(reply);
}

const ListDeploymentConfigsRequest * ListDeploymentConfigsResponse::request() const
{
    Q_D(const ListDeploymentConfigsResponse);
    return static_cast<const ListDeploymentConfigsRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy ListDeploymentConfigs response.
 *
 * @param  response  Response to parse.
 */
void ListDeploymentConfigsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListDeploymentConfigsResponsePrivate
 *
 * @brief  Private implementation for ListDeploymentConfigsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDeploymentConfigsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListDeploymentConfigsResponse instance.
 */
ListDeploymentConfigsResponsePrivate::ListDeploymentConfigsResponsePrivate(
    ListDeploymentConfigsQueueResponse * const q) : ListDeploymentConfigsPrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy ListDeploymentConfigsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDeploymentConfigsResponsePrivate::ListDeploymentConfigsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeploymentConfigsResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace QtAws
