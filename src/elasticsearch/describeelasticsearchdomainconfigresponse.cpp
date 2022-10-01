// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeelasticsearchdomainconfigresponse.h"
#include "describeelasticsearchdomainconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DescribeElasticsearchDomainConfigResponse
 * \brief The DescribeElasticsearchDomainConfigResponse class provides an interace for Elasticsearch DescribeElasticsearchDomainConfig responses.
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
 * \sa ElasticsearchClient::describeElasticsearchDomainConfig
 */

/*!
 * Constructs a DescribeElasticsearchDomainConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeElasticsearchDomainConfigResponse::DescribeElasticsearchDomainConfigResponse(
        const DescribeElasticsearchDomainConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new DescribeElasticsearchDomainConfigResponsePrivate(this), parent)
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
 * Parses a successful Elasticsearch DescribeElasticsearchDomainConfig \a response.
 */
void DescribeElasticsearchDomainConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeElasticsearchDomainConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::DescribeElasticsearchDomainConfigResponsePrivate
 * \brief The DescribeElasticsearchDomainConfigResponsePrivate class provides private implementation for DescribeElasticsearchDomainConfigResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DescribeElasticsearchDomainConfigResponsePrivate object with public implementation \a q.
 */
DescribeElasticsearchDomainConfigResponsePrivate::DescribeElasticsearchDomainConfigResponsePrivate(
    DescribeElasticsearchDomainConfigResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch DescribeElasticsearchDomainConfig response element from \a xml.
 */
void DescribeElasticsearchDomainConfigResponsePrivate::parseDescribeElasticsearchDomainConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeElasticsearchDomainConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
