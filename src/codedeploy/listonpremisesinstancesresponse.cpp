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

#include "listonpremisesinstancesresponse.h"
#include "listonpremisesinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  ListOnPremisesInstancesResponse
 *
 * @brief  Handles CodeDeploy ListOnPremisesInstances responses.
 *
 * @see    CodeDeployClient::listOnPremisesInstances
 */

/**
 * @brief  Constructs a new ListOnPremisesInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListOnPremisesInstancesResponse::ListOnPremisesInstancesResponse(
        const ListOnPremisesInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new ListOnPremisesInstancesResponsePrivate(this), parent)
{
    setRequest(new ListOnPremisesInstancesRequest(request));
    setReply(reply);
}

const ListOnPremisesInstancesRequest * ListOnPremisesInstancesResponse::request() const
{
    Q_D(const ListOnPremisesInstancesResponse);
    return static_cast<const ListOnPremisesInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy ListOnPremisesInstances response.
 *
 * @param  response  Response to parse.
 */
void ListOnPremisesInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListOnPremisesInstancesResponsePrivate
 *
 * @brief  Private implementation for ListOnPremisesInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListOnPremisesInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListOnPremisesInstancesResponse instance.
 */
ListOnPremisesInstancesResponsePrivate::ListOnPremisesInstancesResponsePrivate(
    ListOnPremisesInstancesQueueResponse * const q) : ListOnPremisesInstancesPrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy ListOnPremisesInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListOnPremisesInstancesResponsePrivate::ListOnPremisesInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOnPremisesInstancesResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace QtAws
