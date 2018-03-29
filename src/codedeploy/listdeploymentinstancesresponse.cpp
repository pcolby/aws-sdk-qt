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

#include "listdeploymentinstancesresponse.h"
#include "listdeploymentinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  ListDeploymentInstancesResponse
 *
 * @brief  Handles CodeDeploy ListDeploymentInstances responses.
 *
 * @see    CodeDeployClient::listDeploymentInstances
 */

/**
 * @brief  Constructs a new ListDeploymentInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDeploymentInstancesResponse::ListDeploymentInstancesResponse(
        const ListDeploymentInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListDeploymentInstancesResponse(new ListDeploymentInstancesResponsePrivate(this), parent)
{
    setRequest(new ListDeploymentInstancesRequest(request));
    setReply(reply);
}

const ListDeploymentInstancesRequest * ListDeploymentInstancesResponse::request() const
{
    Q_D(const ListDeploymentInstancesResponse);
    return static_cast<const ListDeploymentInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy ListDeploymentInstances response.
 *
 * @param  response  Response to parse.
 */
void ListDeploymentInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListDeploymentInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListDeploymentInstancesResponsePrivate
 *
 * @brief  Private implementation for ListDeploymentInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDeploymentInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListDeploymentInstancesResponse instance.
 */
ListDeploymentInstancesResponsePrivate::ListDeploymentInstancesResponsePrivate(
    ListDeploymentInstancesResponse * const q) : CodeDeployResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy ListDeploymentInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDeploymentInstancesResponsePrivate::parseListDeploymentInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeploymentInstancesResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace QtAws
