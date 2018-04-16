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

#include "describeelasticsearchinstancetypelimitsresponse.h"
#include "describeelasticsearchinstancetypelimitsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::DescribeElasticsearchInstanceTypeLimitsResponse
 *
 * \brief The DescribeElasticsearchInstanceTypeLimitsResponse class encapsulates ElasticsearchService DescribeElasticsearchInstanceTypeLimits responses.
 *
 * \ingroup ElasticsearchService
 *
 *  <fullname>Amazon Elasticsearch Configuration Service</fullname>
 * 
 *  Use the Amazon Elasticsearch configuration API to create, configure, and manage Elasticsearch
 * 
 *  domains>
 * 
 *  The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 *  es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticsearch-service-regions" target="_blank">Regions and
 *
 * \sa ElasticsearchServiceClient::describeElasticsearchInstanceTypeLimits
 */

/*!
 * @brief  Constructs a new DescribeElasticsearchInstanceTypeLimitsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeElasticsearchInstanceTypeLimitsResponse::DescribeElasticsearchInstanceTypeLimitsResponse(
        const DescribeElasticsearchInstanceTypeLimitsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchServiceResponse(new DescribeElasticsearchInstanceTypeLimitsResponsePrivate(this), parent)
{
    setRequest(new DescribeElasticsearchInstanceTypeLimitsRequest(request));
    setReply(reply);
}

const DescribeElasticsearchInstanceTypeLimitsRequest * DescribeElasticsearchInstanceTypeLimitsResponse::request() const
{
    Q_D(const DescribeElasticsearchInstanceTypeLimitsResponse);
    return static_cast<const DescribeElasticsearchInstanceTypeLimitsRequest *>(d->request);
}

/*!
 * @brief  Parse a ElasticsearchService DescribeElasticsearchInstanceTypeLimits response.
 *
 * @param  response  Response to parse.
 */
void DescribeElasticsearchInstanceTypeLimitsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeElasticsearchInstanceTypeLimitsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeElasticsearchInstanceTypeLimitsResponsePrivate
 *
 * \brief Private implementation for DescribeElasticsearchInstanceTypeLimitsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeElasticsearchInstanceTypeLimitsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeElasticsearchInstanceTypeLimitsResponse instance.
 */
DescribeElasticsearchInstanceTypeLimitsResponsePrivate::DescribeElasticsearchInstanceTypeLimitsResponsePrivate(
    DescribeElasticsearchInstanceTypeLimitsResponse * const q) : ElasticsearchServiceResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ElasticsearchService DescribeElasticsearchInstanceTypeLimitsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeElasticsearchInstanceTypeLimitsResponsePrivate::parseDescribeElasticsearchInstanceTypeLimitsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeElasticsearchInstanceTypeLimitsResponse"));
    /// @todo
}

} // namespace ElasticsearchService
} // namespace QtAws
