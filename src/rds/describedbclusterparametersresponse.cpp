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

#include "describedbclusterparametersresponse.h"
#include "describedbclusterparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  DescribeDBClusterParametersResponse
 *
 * @brief  Handles RDS DescribeDBClusterParameters responses.
 *
 * @see    RDSClient::describeDBClusterParameters
 */

/**
 * @brief  Constructs a new DescribeDBClusterParametersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDBClusterParametersResponse::DescribeDBClusterParametersResponse(
        const DescribeDBClusterParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DescribeDBClusterParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeDBClusterParametersRequest(request));
    setReply(reply);
}

const DescribeDBClusterParametersRequest * DescribeDBClusterParametersResponse::request() const
{
    Q_D(const DescribeDBClusterParametersResponse);
    return static_cast<const DescribeDBClusterParametersRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DescribeDBClusterParameters response.
 *
 * @param  response  Response to parse.
 */
void DescribeDBClusterParametersResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeDBClusterParametersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDBClusterParametersResponsePrivate
 *
 * @brief  Private implementation for DescribeDBClusterParametersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBClusterParametersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDBClusterParametersResponse instance.
 */
DescribeDBClusterParametersResponsePrivate::DescribeDBClusterParametersResponsePrivate(
    DescribeDBClusterParametersResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribeDBClusterParametersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDBClusterParametersResponsePrivate::DescribeDBClusterParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBClusterParametersResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
