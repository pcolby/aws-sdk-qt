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

#include "describeelasticsearchdomainresponse.h"
#include "describeelasticsearchdomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::DescribeElasticsearchDomainResponse
 *
 * \brief The DescribeElasticsearchDomainResponse class encapsulates ElasticsearchService DescribeElasticsearchDomain responses.
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
 * \sa ElasticsearchServiceClient::describeElasticsearchDomain
 */

/*!
 * @brief  Constructs a new DescribeElasticsearchDomainResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeElasticsearchDomainResponse::DescribeElasticsearchDomainResponse(
        const DescribeElasticsearchDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchServiceResponse(new DescribeElasticsearchDomainResponsePrivate(this), parent)
{
    setRequest(new DescribeElasticsearchDomainRequest(request));
    setReply(reply);
}

const DescribeElasticsearchDomainRequest * DescribeElasticsearchDomainResponse::request() const
{
    Q_D(const DescribeElasticsearchDomainResponse);
    return static_cast<const DescribeElasticsearchDomainRequest *>(d->request);
}

/*!
 * @brief  Parse a ElasticsearchService DescribeElasticsearchDomain response.
 *
 * @param  response  Response to parse.
 */
void DescribeElasticsearchDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeElasticsearchDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeElasticsearchDomainResponsePrivate
 *
 * \brief Private implementation for DescribeElasticsearchDomainResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeElasticsearchDomainResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeElasticsearchDomainResponse instance.
 */
DescribeElasticsearchDomainResponsePrivate::DescribeElasticsearchDomainResponsePrivate(
    DescribeElasticsearchDomainResponse * const q) : ElasticsearchServiceResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ElasticsearchService DescribeElasticsearchDomainResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeElasticsearchDomainResponsePrivate::parseDescribeElasticsearchDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeElasticsearchDomainResponse"));
    /// @todo
}

} // namespace ElasticsearchService
} // namespace QtAws
