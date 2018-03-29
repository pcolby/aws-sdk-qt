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

#include "describeenginedefaultparametersresponse.h"
#include "describeenginedefaultparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  DescribeEngineDefaultParametersResponse
 *
 * @brief  Handles RDS DescribeEngineDefaultParameters responses.
 *
 * @see    RDSClient::describeEngineDefaultParameters
 */

/**
 * @brief  Constructs a new DescribeEngineDefaultParametersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEngineDefaultParametersResponse::DescribeEngineDefaultParametersResponse(
        const DescribeEngineDefaultParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DescribeEngineDefaultParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeEngineDefaultParametersRequest(request));
    setReply(reply);
}

const DescribeEngineDefaultParametersRequest * DescribeEngineDefaultParametersResponse::request() const
{
    Q_D(const DescribeEngineDefaultParametersResponse);
    return static_cast<const DescribeEngineDefaultParametersRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DescribeEngineDefaultParameters response.
 *
 * @param  response  Response to parse.
 */
void DescribeEngineDefaultParametersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEngineDefaultParametersResponsePrivate
 *
 * @brief  Private implementation for DescribeEngineDefaultParametersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEngineDefaultParametersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEngineDefaultParametersResponse instance.
 */
DescribeEngineDefaultParametersResponsePrivate::DescribeEngineDefaultParametersResponsePrivate(
    DescribeEngineDefaultParametersQueueResponse * const q) : DescribeEngineDefaultParametersPrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribeEngineDefaultParametersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEngineDefaultParametersResponsePrivate::DescribeEngineDefaultParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEngineDefaultParametersResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS
