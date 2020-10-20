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

#include "describereservedelasticsearchinstanceofferingsresponse.h"
#include "describereservedelasticsearchinstanceofferingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::DescribeReservedElasticsearchInstanceOfferingsResponse
 * \brief The DescribeReservedElasticsearchInstanceOfferingsResponse class provides an interace for ElasticsearchService DescribeReservedElasticsearchInstanceOfferings responses.
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
 * \sa ElasticsearchServiceClient::describeReservedElasticsearchInstanceOfferings
 */

/*!
 * Constructs a DescribeReservedElasticsearchInstanceOfferingsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReservedElasticsearchInstanceOfferingsResponse::DescribeReservedElasticsearchInstanceOfferingsResponse(
        const DescribeReservedElasticsearchInstanceOfferingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchServiceResponse(new DescribeReservedElasticsearchInstanceOfferingsResponsePrivate(this), parent)
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
 * Parses a successful ElasticsearchService DescribeReservedElasticsearchInstanceOfferings \a response.
 */
void DescribeReservedElasticsearchInstanceOfferingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReservedElasticsearchInstanceOfferingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticsearchService::DescribeReservedElasticsearchInstanceOfferingsResponsePrivate
 * \brief The DescribeReservedElasticsearchInstanceOfferingsResponsePrivate class provides private implementation for DescribeReservedElasticsearchInstanceOfferingsResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearchService
 */

/*!
 * Constructs a DescribeReservedElasticsearchInstanceOfferingsResponsePrivate object with public implementation \a q.
 */
DescribeReservedElasticsearchInstanceOfferingsResponsePrivate::DescribeReservedElasticsearchInstanceOfferingsResponsePrivate(
    DescribeReservedElasticsearchInstanceOfferingsResponse * const q) : ElasticsearchServiceResponsePrivate(q)
{

}

/*!
 * Parses a ElasticsearchService DescribeReservedElasticsearchInstanceOfferings response element from \a xml.
 */
void DescribeReservedElasticsearchInstanceOfferingsResponsePrivate::parseDescribeReservedElasticsearchInstanceOfferingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReservedElasticsearchInstanceOfferingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticsearchService
} // namespace QtAws
