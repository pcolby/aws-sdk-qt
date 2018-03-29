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

#include "removetagsfromonpremisesinstancesresponse.h"
#include "removetagsfromonpremisesinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  RemoveTagsFromOnPremisesInstancesResponse
 *
 * @brief  Handles CodeDeploy RemoveTagsFromOnPremisesInstances responses.
 *
 * @see    CodeDeployClient::removeTagsFromOnPremisesInstances
 */

/**
 * @brief  Constructs a new RemoveTagsFromOnPremisesInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveTagsFromOnPremisesInstancesResponse::RemoveTagsFromOnPremisesInstancesResponse(
        const RemoveTagsFromOnPremisesInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new RemoveTagsFromOnPremisesInstancesResponsePrivate(this), parent)
{
    setRequest(new RemoveTagsFromOnPremisesInstancesRequest(request));
    setReply(reply);
}

const RemoveTagsFromOnPremisesInstancesRequest * RemoveTagsFromOnPremisesInstancesResponse::request() const
{
    Q_D(const RemoveTagsFromOnPremisesInstancesResponse);
    return static_cast<const RemoveTagsFromOnPremisesInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy RemoveTagsFromOnPremisesInstances response.
 *
 * @param  response  Response to parse.
 */
void RemoveTagsFromOnPremisesInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RemoveTagsFromOnPremisesInstancesResponsePrivate
 *
 * @brief  Private implementation for RemoveTagsFromOnPremisesInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveTagsFromOnPremisesInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RemoveTagsFromOnPremisesInstancesResponse instance.
 */
RemoveTagsFromOnPremisesInstancesResponsePrivate::RemoveTagsFromOnPremisesInstancesResponsePrivate(
    RemoveTagsFromOnPremisesInstancesQueueResponse * const q) : RemoveTagsFromOnPremisesInstancesPrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy RemoveTagsFromOnPremisesInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RemoveTagsFromOnPremisesInstancesResponsePrivate::RemoveTagsFromOnPremisesInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveTagsFromOnPremisesInstancesResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace QtAws
