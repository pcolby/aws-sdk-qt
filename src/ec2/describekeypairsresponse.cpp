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

#include "describekeypairsresponse.h"
#include "describekeypairsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeKeyPairsResponse
 *
 * @brief  Handles EC2 DescribeKeyPairs responses.
 *
 * @see    EC2Client::describeKeyPairs
 */

/**
 * @brief  Constructs a new DescribeKeyPairsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeKeyPairsResponse::DescribeKeyPairsResponse(
        const DescribeKeyPairsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeKeyPairsResponsePrivate(this), parent)
{
    setRequest(new DescribeKeyPairsRequest(request));
    setReply(reply);
}

const DescribeKeyPairsRequest * DescribeKeyPairsResponse::request() const
{
    Q_D(const DescribeKeyPairsResponse);
    return static_cast<const DescribeKeyPairsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeKeyPairs response.
 *
 * @param  response  Response to parse.
 */
void DescribeKeyPairsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeKeyPairsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeKeyPairsResponsePrivate
 *
 * @brief  Private implementation for DescribeKeyPairsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeKeyPairsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeKeyPairsResponse instance.
 */
DescribeKeyPairsResponsePrivate::DescribeKeyPairsResponsePrivate(
    DescribeKeyPairsResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeKeyPairsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeKeyPairsResponsePrivate::parseDescribeKeyPairsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeKeyPairsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
