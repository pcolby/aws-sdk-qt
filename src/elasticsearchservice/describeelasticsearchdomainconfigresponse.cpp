/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeelasticsearchdomainconfigresponse.h"
#include "describeelasticsearchdomainconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::DescribeElasticsearchDomainConfigResponse
 * \brief The DescribeElasticsearchDomainConfigResponse class provides an interace for ElasticsearchService DescribeElasticsearchDomainConfig responses.
 *
 * \inmodule QtAwsElasticsearchService
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
 * \sa ElasticsearchServiceClient::describeElasticsearchDomainConfig
 */

/*!
 * Constructs a DescribeElasticsearchDomainConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeElasticsearchDomainConfigResponse::DescribeElasticsearchDomainConfigResponse(
        const DescribeElasticsearchDomainConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchServiceResponse(new DescribeElasticsearchDomainConfigResponsePrivate(this), parent)
{
    setRequest(new DescribeElasticsearchDomainConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeElasticsearchDomainConfigRequest * DescribeElasticsearchDomainConfigResponse::request() const
{
    Q_D(const DescribeElasticsearchDomainConfigResponse);
    return static_cast<const DescribeElasticsearchDomainConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticsearchService DescribeElasticsearchDomainConfig \a response.
 */
void DescribeElasticsearchDomainConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeElasticsearchDomainConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticsearchService::DescribeElasticsearchDomainConfigResponsePrivate
 * \brief The DescribeElasticsearchDomainConfigResponsePrivate class provides private implementation for DescribeElasticsearchDomainConfigResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearchService
 */

/*!
 * Constructs a DescribeElasticsearchDomainConfigResponsePrivate object with public implementation \a q.
 */
DescribeElasticsearchDomainConfigResponsePrivate::DescribeElasticsearchDomainConfigResponsePrivate(
    DescribeElasticsearchDomainConfigResponse * const q) : ElasticsearchServiceResponsePrivate(q)
{

}

/*!
 * Parses a ElasticsearchService DescribeElasticsearchDomainConfig response element from \a xml.
 */
void DescribeElasticsearchDomainConfigResponsePrivate::parseDescribeElasticsearchDomainConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeElasticsearchDomainConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticsearchService
} // namespace QtAws
