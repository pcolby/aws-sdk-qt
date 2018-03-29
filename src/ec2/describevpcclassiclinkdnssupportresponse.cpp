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

#include "describevpcclassiclinkdnssupportresponse.h"
#include "describevpcclassiclinkdnssupportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeVpcClassicLinkDnsSupportResponse
 *
 * @brief  Handles EC2 DescribeVpcClassicLinkDnsSupport responses.
 *
 * @see    EC2Client::describeVpcClassicLinkDnsSupport
 */

/**
 * @brief  Constructs a new DescribeVpcClassicLinkDnsSupportResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVpcClassicLinkDnsSupportResponse::DescribeVpcClassicLinkDnsSupportResponse(
        const DescribeVpcClassicLinkDnsSupportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeVpcClassicLinkDnsSupportResponsePrivate(this), parent)
{
    setRequest(new DescribeVpcClassicLinkDnsSupportRequest(request));
    setReply(reply);
}

const DescribeVpcClassicLinkDnsSupportRequest * DescribeVpcClassicLinkDnsSupportResponse::request() const
{
    Q_D(const DescribeVpcClassicLinkDnsSupportResponse);
    return static_cast<const DescribeVpcClassicLinkDnsSupportRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeVpcClassicLinkDnsSupport response.
 *
 * @param  response  Response to parse.
 */
void DescribeVpcClassicLinkDnsSupportResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeVpcClassicLinkDnsSupportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeVpcClassicLinkDnsSupportResponsePrivate
 *
 * @brief  Private implementation for DescribeVpcClassicLinkDnsSupportResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcClassicLinkDnsSupportResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeVpcClassicLinkDnsSupportResponse instance.
 */
DescribeVpcClassicLinkDnsSupportResponsePrivate::DescribeVpcClassicLinkDnsSupportResponsePrivate(
    DescribeVpcClassicLinkDnsSupportResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeVpcClassicLinkDnsSupportResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeVpcClassicLinkDnsSupportResponsePrivate::DescribeVpcClassicLinkDnsSupportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVpcClassicLinkDnsSupportResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
