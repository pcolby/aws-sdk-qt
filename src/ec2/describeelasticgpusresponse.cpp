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

#include "describeelasticgpusresponse.h"
#include "describeelasticgpusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeElasticGpusResponse
 *
 * @brief  Handles EC2 DescribeElasticGpus responses.
 *
 * @see    EC2Client::describeElasticGpus
 */

/**
 * @brief  Constructs a new DescribeElasticGpusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeElasticGpusResponse::DescribeElasticGpusResponse(
        const DescribeElasticGpusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeElasticGpusResponsePrivate(this), parent)
{
    setRequest(new DescribeElasticGpusRequest(request));
    setReply(reply);
}

const DescribeElasticGpusRequest * DescribeElasticGpusResponse::request() const
{
    Q_D(const DescribeElasticGpusResponse);
    return static_cast<const DescribeElasticGpusRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeElasticGpus response.
 *
 * @param  response  Response to parse.
 */
void DescribeElasticGpusResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeElasticGpusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeElasticGpusResponsePrivate
 *
 * @brief  Private implementation for DescribeElasticGpusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeElasticGpusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeElasticGpusResponse instance.
 */
DescribeElasticGpusResponsePrivate::DescribeElasticGpusResponsePrivate(
    DescribeElasticGpusResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeElasticGpusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeElasticGpusResponsePrivate::parseDescribeElasticGpusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeElasticGpusResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
