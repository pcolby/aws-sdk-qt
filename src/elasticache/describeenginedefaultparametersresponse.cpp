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

#include "describeenginedefaultparametersresponse.h"
#include "describeenginedefaultparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElastiCache {

/**
 * @class  DescribeEngineDefaultParametersResponse
 *
 * @brief  Handles ElastiCache DescribeEngineDefaultParameters responses.
 *
 * @see    ElastiCacheClient::describeEngineDefaultParameters
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEngineDefaultParametersResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DescribeEngineDefaultParametersResponsePrivate(this), parent)
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
 * @brief  Parse a ElastiCache DescribeEngineDefaultParameters response.
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
 * @brief  Parse an ElastiCache DescribeEngineDefaultParametersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEngineDefaultParametersResponsePrivate::DescribeEngineDefaultParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEngineDefaultParametersResponse"));
    /// @todo
}
