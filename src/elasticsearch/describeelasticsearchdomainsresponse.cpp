// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeelasticsearchdomainsresponse.h"
#include "describeelasticsearchdomainsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DescribeElasticsearchDomainsResponse
 * \brief The DescribeElasticsearchDomainsResponse class provides an interace for Elasticsearch DescribeElasticsearchDomains responses.
 *
 * \inmodule QtAwsElasticsearch
 *
 *  <fullname>Amazon Elasticsearch Configuration Service</fullname>
 * 
 *  Use the Amazon Elasticsearch Configuration API to create, configure, and manage Elasticsearch
 * 
 *  domains>
 * 
 *  For sample code that uses the Configuration API, see the <a
 *  href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-configuration-samples.html">Amazon
 *  Elasticsearch Service Developer Guide</a>. The guide also contains <a
 *  href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-request-signing.html">sample code for
 *  sending signed HTTP requests to the Elasticsearch
 * 
 *  APIs</a>>
 * 
 *  The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 *  es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticsearch-service-regions" target="_blank">Regions and
 *
 * \sa ElasticsearchClient::describeElasticsearchDomains
 */

/*!
 * Constructs a DescribeElasticsearchDomainsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeElasticsearchDomainsResponse::DescribeElasticsearchDomainsResponse(
        const DescribeElasticsearchDomainsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new DescribeElasticsearchDomainsResponsePrivate(this), parent)
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
 * Parses a successful Elasticsearch DescribeElasticsearchDomains \a response.
 */
void DescribeElasticsearchDomainsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeElasticsearchDomainsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::DescribeElasticsearchDomainsResponsePrivate
 * \brief The DescribeElasticsearchDomainsResponsePrivate class provides private implementation for DescribeElasticsearchDomainsResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DescribeElasticsearchDomainsResponsePrivate object with public implementation \a q.
 */
DescribeElasticsearchDomainsResponsePrivate::DescribeElasticsearchDomainsResponsePrivate(
    DescribeElasticsearchDomainsResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch DescribeElasticsearchDomains response element from \a xml.
 */
void DescribeElasticsearchDomainsResponsePrivate::parseDescribeElasticsearchDomainsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeElasticsearchDomainsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
