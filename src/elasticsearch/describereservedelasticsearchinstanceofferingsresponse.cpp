// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereservedelasticsearchinstanceofferingsresponse.h"
#include "describereservedelasticsearchinstanceofferingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DescribeReservedElasticsearchInstanceOfferingsResponse
 * \brief The DescribeReservedElasticsearchInstanceOfferingsResponse class provides an interace for Elasticsearch DescribeReservedElasticsearchInstanceOfferings responses.
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
 * \sa ElasticsearchClient::describeReservedElasticsearchInstanceOfferings
 */

/*!
 * Constructs a DescribeReservedElasticsearchInstanceOfferingsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReservedElasticsearchInstanceOfferingsResponse::DescribeReservedElasticsearchInstanceOfferingsResponse(
        const DescribeReservedElasticsearchInstanceOfferingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new DescribeReservedElasticsearchInstanceOfferingsResponsePrivate(this), parent)
{
    setRequest(new DescribeReservedElasticsearchInstanceOfferingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReservedElasticsearchInstanceOfferingsRequest * DescribeReservedElasticsearchInstanceOfferingsResponse::request() const
{
    Q_D(const DescribeReservedElasticsearchInstanceOfferingsResponse);
    return static_cast<const DescribeReservedElasticsearchInstanceOfferingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch DescribeReservedElasticsearchInstanceOfferings \a response.
 */
void DescribeReservedElasticsearchInstanceOfferingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReservedElasticsearchInstanceOfferingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::DescribeReservedElasticsearchInstanceOfferingsResponsePrivate
 * \brief The DescribeReservedElasticsearchInstanceOfferingsResponsePrivate class provides private implementation for DescribeReservedElasticsearchInstanceOfferingsResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DescribeReservedElasticsearchInstanceOfferingsResponsePrivate object with public implementation \a q.
 */
DescribeReservedElasticsearchInstanceOfferingsResponsePrivate::DescribeReservedElasticsearchInstanceOfferingsResponsePrivate(
    DescribeReservedElasticsearchInstanceOfferingsResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch DescribeReservedElasticsearchInstanceOfferings response element from \a xml.
 */
void DescribeReservedElasticsearchInstanceOfferingsResponsePrivate::parseDescribeReservedElasticsearchInstanceOfferingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReservedElasticsearchInstanceOfferingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
