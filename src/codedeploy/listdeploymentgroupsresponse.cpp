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

#include "listdeploymentgroupsresponse.h"
#include "listdeploymentgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  ListDeploymentGroupsResponse
 *
 * @brief  Handles CodeDeploy ListDeploymentGroups responses.
 *
 * @see    CodeDeployClient::listDeploymentGroups
 */

/**
 * @brief  Constructs a new ListDeploymentGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDeploymentGroupsResponse::ListDeploymentGroupsResponse(
        const ListDeploymentGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new ListDeploymentGroupsResponsePrivate(this), parent)
{
    setRequest(new ListDeploymentGroupsRequest(request));
    setReply(reply);
}

const ListDeploymentGroupsRequest * ListDeploymentGroupsResponse::request() const
{
    Q_D(const ListDeploymentGroupsResponse);
    return static_cast<const ListDeploymentGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy ListDeploymentGroups response.
 *
 * @param  response  Response to parse.
 */
void ListDeploymentGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListDeploymentGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListDeploymentGroupsResponsePrivate
 *
 * @brief  Private implementation for ListDeploymentGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDeploymentGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListDeploymentGroupsResponse instance.
 */
ListDeploymentGroupsResponsePrivate::ListDeploymentGroupsResponsePrivate(
    ListDeploymentGroupsResponse * const q) : CodeDeployResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy ListDeploymentGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDeploymentGroupsResponsePrivate::parseListDeploymentGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeploymentGroupsResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace QtAws
