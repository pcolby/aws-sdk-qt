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

#include "listdeploymentsresponse.h"
#include "listdeploymentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeDeploy {

/**
 * @class  ListDeploymentsResponse
 *
 * @brief  Handles CodeDeploy ListDeployments responses.
 *
 * @see    CodeDeployClient::listDeployments
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDeploymentsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new ListDeploymentsResponsePrivate(this), parent)
{
    setRequest(new ListDeploymentsRequest(request));
    setReply(reply);
}

const ListDeploymentsRequest * ListDeploymentsResponse::request() const
{
    Q_D(const ListDeploymentsResponse);
    return static_cast<const ListDeploymentsRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy ListDeployments response.
 *
 * @param  response  Response to parse.
 */
void ListDeploymentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListDeploymentsResponsePrivate
 *
 * @brief  Private implementation for ListDeploymentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDeploymentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListDeploymentsResponse instance.
 */
ListDeploymentsResponsePrivate::ListDeploymentsResponsePrivate(
    ListDeploymentsQueueResponse * const q) : ListDeploymentsPrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy ListDeploymentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDeploymentsResponsePrivate::ListDeploymentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeploymentsResponse"));
    /// @todo
}
