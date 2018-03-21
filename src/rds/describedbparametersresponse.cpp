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

#include "describedbparametersresponse.h"
#include "describedbparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  DescribeDBParametersResponse
 *
 * @brief  Handles RDS DescribeDBParameters responses.
 *
 * @see    RDSClient::describeDBParameters
 */

/**
 * @brief  Constructs a new DescribeDBParametersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDBParametersResponse::DescribeDBParametersResponse(
        const DescribeDBParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DescribeDBParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeDBParametersRequest(request));
    setReply(reply);
}

const DescribeDBParametersRequest * DescribeDBParametersResponse::request() const
{
    Q_D(const DescribeDBParametersResponse);
    return static_cast<const DescribeDBParametersRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DescribeDBParameters response.
 *
 * @param  response  Response to parse.
 */
void DescribeDBParametersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDBParametersResponsePrivate
 *
 * @brief  Private implementation for DescribeDBParametersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBParametersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDBParametersResponse instance.
 */
DescribeDBParametersResponsePrivate::DescribeDBParametersResponsePrivate(
    DescribeDBParametersQueueResponse * const q) : DescribeDBParametersPrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribeDBParametersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDBParametersResponsePrivate::DescribeDBParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBParametersResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS
