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

#include "describelistenercertificatesresponse.h"
#include "describelistenercertificatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DescribeListenerCertificatesResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 DescribeListenerCertificates responses.
 *
 * @see    ElasticLoadBalancingv2Client::describeListenerCertificates
 */

/**
 * @brief  Constructs a new DescribeListenerCertificatesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeListenerCertificatesResponse::DescribeListenerCertificatesResponse(
        const DescribeListenerCertificatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new DescribeListenerCertificatesResponsePrivate(this), parent)
{
    setRequest(new DescribeListenerCertificatesRequest(request));
    setReply(reply);
}

const DescribeListenerCertificatesRequest * DescribeListenerCertificatesResponse::request() const
{
    Q_D(const DescribeListenerCertificatesResponse);
    return static_cast<const DescribeListenerCertificatesRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 DescribeListenerCertificates response.
 *
 * @param  response  Response to parse.
 */
void DescribeListenerCertificatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeListenerCertificatesResponsePrivate
 *
 * @brief  Private implementation for DescribeListenerCertificatesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeListenerCertificatesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeListenerCertificatesResponse instance.
 */
DescribeListenerCertificatesResponsePrivate::DescribeListenerCertificatesResponsePrivate(
    DescribeListenerCertificatesQueueResponse * const q) : DescribeListenerCertificatesPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 DescribeListenerCertificatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeListenerCertificatesResponsePrivate::DescribeListenerCertificatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeListenerCertificatesResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancingv2
} // namespace AWS
