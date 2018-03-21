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

#include "describeenginedefaultclusterparametersresponse.h"
#include "describeenginedefaultclusterparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  DescribeEngineDefaultClusterParametersResponse
 *
 * @brief  Handles RDS DescribeEngineDefaultClusterParameters responses.
 *
 * @see    RDSClient::describeEngineDefaultClusterParameters
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEngineDefaultClusterParametersResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DescribeEngineDefaultClusterParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeEngineDefaultClusterParametersRequest(request));
    setReply(reply);
}

const DescribeEngineDefaultClusterParametersRequest * DescribeEngineDefaultClusterParametersResponse::request() const
{
    Q_D(const DescribeEngineDefaultClusterParametersResponse);
    return static_cast<const DescribeEngineDefaultClusterParametersRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DescribeEngineDefaultClusterParameters response.
 *
 * @param  response  Response to parse.
 */
void DescribeEngineDefaultClusterParametersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEngineDefaultClusterParametersResponsePrivate
 *
 * @brief  Private implementation for DescribeEngineDefaultClusterParametersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEngineDefaultClusterParametersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEngineDefaultClusterParametersResponse instance.
 */
DescribeEngineDefaultClusterParametersResponsePrivate::DescribeEngineDefaultClusterParametersResponsePrivate(
    DescribeEngineDefaultClusterParametersQueueResponse * const q) : DescribeEngineDefaultClusterParametersPrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribeEngineDefaultClusterParametersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEngineDefaultClusterParametersResponsePrivate::DescribeEngineDefaultClusterParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEngineDefaultClusterParametersResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS
