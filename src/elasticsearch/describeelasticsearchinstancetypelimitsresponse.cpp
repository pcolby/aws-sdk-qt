// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeelasticsearchinstancetypelimitsresponse.h"
#include "describeelasticsearchinstancetypelimitsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DescribeElasticsearchInstanceTypeLimitsResponse
 * \brief The DescribeElasticsearchInstanceTypeLimitsResponse class provides an interace for Elasticsearch DescribeElasticsearchInstanceTypeLimits responses.
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
 * \sa ElasticsearchClient::describeElasticsearchInstanceTypeLimits
 */

/*!
 * Constructs a DescribeElasticsearchInstanceTypeLimitsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeElasticsearchInstanceTypeLimitsResponse::DescribeElasticsearchInstanceTypeLimitsResponse(
        const DescribeElasticsearchInstanceTypeLimitsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new DescribeElasticsearchInstanceTypeLimitsResponsePrivate(this), parent)
{
    setRequest(new DescribeElasticsearchInstanceTypeLimitsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeElasticsearchInstanceTypeLimitsRequest * DescribeElasticsearchInstanceTypeLimitsResponse::request() const
{
    Q_D(const DescribeElasticsearchInstanceTypeLimitsResponse);
    return static_cast<const DescribeElasticsearchInstanceTypeLimitsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch DescribeElasticsearchInstanceTypeLimits \a response.
 */
void DescribeElasticsearchInstanceTypeLimitsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeElasticsearchInstanceTypeLimitsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::DescribeElasticsearchInstanceTypeLimitsResponsePrivate
 * \brief The DescribeElasticsearchInstanceTypeLimitsResponsePrivate class provides private implementation for DescribeElasticsearchInstanceTypeLimitsResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DescribeElasticsearchInstanceTypeLimitsResponsePrivate object with public implementation \a q.
 */
DescribeElasticsearchInstanceTypeLimitsResponsePrivate::DescribeElasticsearchInstanceTypeLimitsResponsePrivate(
    DescribeElasticsearchInstanceTypeLimitsResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch DescribeElasticsearchInstanceTypeLimits response element from \a xml.
 */
void DescribeElasticsearchInstanceTypeLimitsResponsePrivate::parseDescribeElasticsearchInstanceTypeLimitsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeElasticsearchInstanceTypeLimitsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
