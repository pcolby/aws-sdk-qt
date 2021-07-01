/*
    Copyright 2013-2021 Paul Colby

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

#include "purchasereservedelasticsearchinstanceofferingresponse.h"
#include "purchasereservedelasticsearchinstanceofferingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::PurchaseReservedElasticsearchInstanceOfferingResponse
 * \brief The PurchaseReservedElasticsearchInstanceOfferingResponse class provides an interace for ElasticsearchService PurchaseReservedElasticsearchInstanceOffering responses.
 *
 * \inmodule QtAwsElasticsearchService
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
 * \sa ElasticsearchServiceClient::purchaseReservedElasticsearchInstanceOffering
 */

/*!
 * Constructs a PurchaseReservedElasticsearchInstanceOfferingResponse object for \a reply to \a request, with parent \a parent.
 */
PurchaseReservedElasticsearchInstanceOfferingResponse::PurchaseReservedElasticsearchInstanceOfferingResponse(
        const PurchaseReservedElasticsearchInstanceOfferingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchServiceResponse(new PurchaseReservedElasticsearchInstanceOfferingResponsePrivate(this), parent)
{
    setRequest(new PurchaseReservedElasticsearchInstanceOfferingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PurchaseReservedElasticsearchInstanceOfferingRequest * PurchaseReservedElasticsearchInstanceOfferingResponse::request() const
{
    Q_D(const PurchaseReservedElasticsearchInstanceOfferingResponse);
    return static_cast<const PurchaseReservedElasticsearchInstanceOfferingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticsearchService PurchaseReservedElasticsearchInstanceOffering \a response.
 */
void PurchaseReservedElasticsearchInstanceOfferingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PurchaseReservedElasticsearchInstanceOfferingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticsearchService::PurchaseReservedElasticsearchInstanceOfferingResponsePrivate
 * \brief The PurchaseReservedElasticsearchInstanceOfferingResponsePrivate class provides private implementation for PurchaseReservedElasticsearchInstanceOfferingResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearchService
 */

/*!
 * Constructs a PurchaseReservedElasticsearchInstanceOfferingResponsePrivate object with public implementation \a q.
 */
PurchaseReservedElasticsearchInstanceOfferingResponsePrivate::PurchaseReservedElasticsearchInstanceOfferingResponsePrivate(
    PurchaseReservedElasticsearchInstanceOfferingResponse * const q) : ElasticsearchServiceResponsePrivate(q)
{

}

/*!
 * Parses a ElasticsearchService PurchaseReservedElasticsearchInstanceOffering response element from \a xml.
 */
void PurchaseReservedElasticsearchInstanceOfferingResponsePrivate::parsePurchaseReservedElasticsearchInstanceOfferingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PurchaseReservedElasticsearchInstanceOfferingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticsearchService
} // namespace QtAws
