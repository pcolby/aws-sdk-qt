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

#include "describeorderableclusteroptionsresponse.h"
#include "describeorderableclusteroptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  DescribeOrderableClusterOptionsResponse
 *
 * @brief  Handles Redshift DescribeOrderableClusterOptions responses.
 *
 * @see    RedshiftClient::describeOrderableClusterOptions
 */

/**
 * @brief  Constructs a new DescribeOrderableClusterOptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeOrderableClusterOptionsResponse::DescribeOrderableClusterOptionsResponse(
        const DescribeOrderableClusterOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DescribeOrderableClusterOptionsResponsePrivate(this), parent)
{
    setRequest(new DescribeOrderableClusterOptionsRequest(request));
    setReply(reply);
}

const DescribeOrderableClusterOptionsRequest * DescribeOrderableClusterOptionsResponse::request() const
{
    Q_D(const DescribeOrderableClusterOptionsResponse);
    return static_cast<const DescribeOrderableClusterOptionsRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DescribeOrderableClusterOptions response.
 *
 * @param  response  Response to parse.
 */
void DescribeOrderableClusterOptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeOrderableClusterOptionsResponsePrivate
 *
 * @brief  Private implementation for DescribeOrderableClusterOptionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeOrderableClusterOptionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeOrderableClusterOptionsResponse instance.
 */
DescribeOrderableClusterOptionsResponsePrivate::DescribeOrderableClusterOptionsResponsePrivate(
    DescribeOrderableClusterOptionsQueueResponse * const q) : DescribeOrderableClusterOptionsPrivate(q)
{

}

/**
 * @brief  Parse an Redshift DescribeOrderableClusterOptionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeOrderableClusterOptionsResponsePrivate::DescribeOrderableClusterOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeOrderableClusterOptionsResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
