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

#include "describeclusterparametersresponse.h"
#include "describeclusterparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  DescribeClusterParametersResponse
 *
 * @brief  Handles Redshift DescribeClusterParameters responses.
 *
 * @see    RedshiftClient::describeClusterParameters
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeClusterParametersResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DescribeClusterParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeClusterParametersRequest(request));
    setReply(reply);
}

const DescribeClusterParametersRequest * DescribeClusterParametersResponse::request() const
{
    Q_D(const DescribeClusterParametersResponse);
    return static_cast<const DescribeClusterParametersRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DescribeClusterParameters response.
 *
 * @param  response  Response to parse.
 */
void DescribeClusterParametersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeClusterParametersResponsePrivate
 *
 * @brief  Private implementation for DescribeClusterParametersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClusterParametersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeClusterParametersResponse instance.
 */
DescribeClusterParametersResponsePrivate::DescribeClusterParametersResponsePrivate(
    DescribeClusterParametersQueueResponse * const q) : DescribeClusterParametersPrivate(q)
{

}

/**
 * @brief  Parse an Redshift DescribeClusterParametersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeClusterParametersResponsePrivate::DescribeClusterParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeClusterParametersResponse"));
    /// @todo
}
