// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeelasticsearchdomainresponse.h"
#include "describeelasticsearchdomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DescribeElasticsearchDomainResponse
 * \brief The DescribeElasticsearchDomainResponse class provides an interace for Elasticsearch DescribeElasticsearchDomain responses.
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
 * \sa ElasticsearchClient::describeElasticsearchDomain
 */

/*!
 * Constructs a DescribeElasticsearchDomainResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeElasticsearchDomainResponse::DescribeElasticsearchDomainResponse(
        const DescribeElasticsearchDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new DescribeElasticsearchDomainResponsePrivate(this), parent)
{
    setRequest(new DescribeElasticsearchDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeElasticsearchDomainRequest * DescribeElasticsearchDomainResponse::request() const
{
    Q_D(const DescribeElasticsearchDomainResponse);
    return static_cast<const DescribeElasticsearchDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch DescribeElasticsearchDomain \a response.
 */
void DescribeElasticsearchDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeElasticsearchDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::DescribeElasticsearchDomainResponsePrivate
 * \brief The DescribeElasticsearchDomainResponsePrivate class provides private implementation for DescribeElasticsearchDomainResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DescribeElasticsearchDomainResponsePrivate object with public implementation \a q.
 */
DescribeElasticsearchDomainResponsePrivate::DescribeElasticsearchDomainResponsePrivate(
    DescribeElasticsearchDomainResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch DescribeElasticsearchDomain response element from \a xml.
 */
void DescribeElasticsearchDomainResponsePrivate::parseDescribeElasticsearchDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeElasticsearchDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
