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

#include "describedeploymentsresponse.h"
#include "describedeploymentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  DescribeDeploymentsResponse
 *
 * @brief  Handles OpsWorks DescribeDeployments responses.
 *
 * @see    OpsWorksClient::describeDeployments
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDeploymentsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DescribeDeploymentsResponsePrivate(this), parent)
{
    setRequest(new DescribeDeploymentsRequest(request));
    setReply(reply);
}

const DescribeDeploymentsRequest * DescribeDeploymentsResponse::request() const
{
    Q_D(const DescribeDeploymentsResponse);
    return static_cast<const DescribeDeploymentsRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DescribeDeployments response.
 *
 * @param  response  Response to parse.
 */
void DescribeDeploymentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDeploymentsResponsePrivate
 *
 * @brief  Private implementation for DescribeDeploymentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDeploymentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDeploymentsResponse instance.
 */
DescribeDeploymentsResponsePrivate::DescribeDeploymentsResponsePrivate(
    DescribeDeploymentsQueueResponse * const q) : DescribeDeploymentsPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DescribeDeploymentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDeploymentsResponsePrivate::DescribeDeploymentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDeploymentsResponse"));
    /// @todo
}
