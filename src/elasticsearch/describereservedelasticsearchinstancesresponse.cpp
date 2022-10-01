// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereservedelasticsearchinstancesresponse.h"
#include "describereservedelasticsearchinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DescribeReservedElasticsearchInstancesResponse
 * \brief The DescribeReservedElasticsearchInstancesResponse class provides an interace for Elasticsearch DescribeReservedElasticsearchInstances responses.
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
 * \sa ElasticsearchClient::describeReservedElasticsearchInstances
 */

/*!
 * Constructs a DescribeReservedElasticsearchInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReservedElasticsearchInstancesResponse::DescribeReservedElasticsearchInstancesResponse(
        const DescribeReservedElasticsearchInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new DescribeReservedElasticsearchInstancesResponsePrivate(this), parent)
{
    setRequest(new DescribeReservedElasticsearchInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReservedElasticsearchInstancesRequest * DescribeReservedElasticsearchInstancesResponse::request() const
{
    Q_D(const DescribeReservedElasticsearchInstancesResponse);
    return static_cast<const DescribeReservedElasticsearchInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch DescribeReservedElasticsearchInstances \a response.
 */
void DescribeReservedElasticsearchInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReservedElasticsearchInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::DescribeReservedElasticsearchInstancesResponsePrivate
 * \brief The DescribeReservedElasticsearchInstancesResponsePrivate class provides private implementation for DescribeReservedElasticsearchInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DescribeReservedElasticsearchInstancesResponsePrivate object with public implementation \a q.
 */
DescribeReservedElasticsearchInstancesResponsePrivate::DescribeReservedElasticsearchInstancesResponsePrivate(
    DescribeReservedElasticsearchInstancesResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch DescribeReservedElasticsearchInstances response element from \a xml.
 */
void DescribeReservedElasticsearchInstancesResponsePrivate::parseDescribeReservedElasticsearchInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReservedElasticsearchInstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
