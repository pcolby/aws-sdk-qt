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

#include "describeaccountattributesresponse.h"
#include "describeaccountattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  DescribeAccountAttributesResponse
 *
 * @brief  Handles ElasticBeanstalk DescribeAccountAttributes responses.
 *
 * @see    ElasticBeanstalkClient::describeAccountAttributes
 */

/**
 * @brief  Constructs a new DescribeAccountAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAccountAttributesResponse::DescribeAccountAttributesResponse(
        const DescribeAccountAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new DescribeAccountAttributesResponsePrivate(this), parent)
{
    setRequest(new DescribeAccountAttributesRequest(request));
    setReply(reply);
}

const DescribeAccountAttributesRequest * DescribeAccountAttributesResponse::request() const
{
    Q_D(const DescribeAccountAttributesResponse);
    return static_cast<const DescribeAccountAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk DescribeAccountAttributes response.
 *
 * @param  response  Response to parse.
 */
void DescribeAccountAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeAccountAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAccountAttributesResponsePrivate
 *
 * @brief  Private implementation for DescribeAccountAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAccountAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAccountAttributesResponse instance.
 */
DescribeAccountAttributesResponsePrivate::DescribeAccountAttributesResponsePrivate(
    DescribeAccountAttributesResponse * const q) : ElasticBeanstalkResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk DescribeAccountAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAccountAttributesResponsePrivate::parseDescribeAccountAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAccountAttributesResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace QtAws
