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

#include "describerdsdbinstancesresponse.h"
#include "describerdsdbinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  DescribeRdsDbInstancesResponse
 *
 * @brief  Handles OpsWorks DescribeRdsDbInstances responses.
 *
 * @see    OpsWorksClient::describeRdsDbInstances
 */

/**
 * @brief  Constructs a new DescribeRdsDbInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeRdsDbInstancesResponse::DescribeRdsDbInstancesResponse(
        const DescribeRdsDbInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DescribeRdsDbInstancesResponsePrivate(this), parent)
{
    setRequest(new DescribeRdsDbInstancesRequest(request));
    setReply(reply);
}

const DescribeRdsDbInstancesRequest * DescribeRdsDbInstancesResponse::request() const
{
    Q_D(const DescribeRdsDbInstancesResponse);
    return static_cast<const DescribeRdsDbInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DescribeRdsDbInstances response.
 *
 * @param  response  Response to parse.
 */
void DescribeRdsDbInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeRdsDbInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeRdsDbInstancesResponsePrivate
 *
 * @brief  Private implementation for DescribeRdsDbInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRdsDbInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeRdsDbInstancesResponse instance.
 */
DescribeRdsDbInstancesResponsePrivate::DescribeRdsDbInstancesResponsePrivate(
    DescribeRdsDbInstancesResponse * const q) : OpsWorksResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DescribeRdsDbInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeRdsDbInstancesResponsePrivate::DescribeRdsDbInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRdsDbInstancesResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
