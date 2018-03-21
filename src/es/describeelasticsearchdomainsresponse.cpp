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

#include "describeelasticsearchdomainsresponse.h"
#include "describeelasticsearchdomainsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticsearchService {

/**
 * @class  DescribeElasticsearchDomainsResponse
 *
 * @brief  Handles ElasticsearchService DescribeElasticsearchDomains responses.
 *
 * @see    ElasticsearchServiceClient::describeElasticsearchDomains
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeElasticsearchDomainsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchServiceResponse(new DescribeElasticsearchDomainsResponsePrivate(this), parent)
{
    setRequest(new DescribeElasticsearchDomainsRequest(request));
    setReply(reply);
}

const DescribeElasticsearchDomainsRequest * DescribeElasticsearchDomainsResponse::request() const
{
    Q_D(const DescribeElasticsearchDomainsResponse);
    return static_cast<const DescribeElasticsearchDomainsRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticsearchService DescribeElasticsearchDomains response.
 *
 * @param  response  Response to parse.
 */
void DescribeElasticsearchDomainsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeElasticsearchDomainsResponsePrivate
 *
 * @brief  Private implementation for DescribeElasticsearchDomainsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeElasticsearchDomainsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeElasticsearchDomainsResponse instance.
 */
DescribeElasticsearchDomainsResponsePrivate::DescribeElasticsearchDomainsResponsePrivate(
    DescribeElasticsearchDomainsQueueResponse * const q) : DescribeElasticsearchDomainsPrivate(q)
{

}

/**
 * @brief  Parse an ElasticsearchService DescribeElasticsearchDomainsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeElasticsearchDomainsResponsePrivate::DescribeElasticsearchDomainsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeElasticsearchDomainsResponse"));
    /// @todo
}

} // namespace ElasticsearchService
} // namespace AWS
