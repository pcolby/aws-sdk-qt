/*
    Copyright 2013-2020 Paul Colby

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

#include "describeelasticsearchdomainsresponse.h"
#include "describeelasticsearchdomainsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::DescribeElasticsearchDomainsResponse
 * \brief The DescribeElasticsearchDomainsResponse class provides an interace for ElasticsearchService DescribeElasticsearchDomains responses.
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
 * \sa ElasticsearchServiceClient::describeElasticsearchDomains
 */

/*!
 * Constructs a DescribeElasticsearchDomainsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeElasticsearchDomainsResponse::DescribeElasticsearchDomainsResponse(
        const DescribeElasticsearchDomainsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchServiceResponse(new DescribeElasticsearchDomainsResponsePrivate(this), parent)
{
    setRequest(new DescribeElasticsearchDomainsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeElasticsearchDomainsRequest * DescribeElasticsearchDomainsResponse::request() const
{
    Q_D(const DescribeElasticsearchDomainsResponse);
    return static_cast<const DescribeElasticsearchDomainsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticsearchService DescribeElasticsearchDomains \a response.
 */
void DescribeElasticsearchDomainsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeElasticsearchDomainsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticsearchService::DescribeElasticsearchDomainsResponsePrivate
 * \brief The DescribeElasticsearchDomainsResponsePrivate class provides private implementation for DescribeElasticsearchDomainsResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearchService
 */

/*!
 * Constructs a DescribeElasticsearchDomainsResponsePrivate object with public implementation \a q.
 */
DescribeElasticsearchDomainsResponsePrivate::DescribeElasticsearchDomainsResponsePrivate(
    DescribeElasticsearchDomainsResponse * const q) : ElasticsearchServiceResponsePrivate(q)
{

}

/*!
 * Parses a ElasticsearchService DescribeElasticsearchDomains response element from \a xml.
 */
void DescribeElasticsearchDomainsResponsePrivate::parseDescribeElasticsearchDomainsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeElasticsearchDomainsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticsearchService
} // namespace QtAws
