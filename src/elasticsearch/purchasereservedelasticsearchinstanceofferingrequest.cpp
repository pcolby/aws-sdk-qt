// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "purchasereservedelasticsearchinstanceofferingrequest.h"
#include "purchasereservedelasticsearchinstanceofferingrequest_p.h"
#include "purchasereservedelasticsearchinstanceofferingresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::PurchaseReservedElasticsearchInstanceOfferingRequest
 * \brief The PurchaseReservedElasticsearchInstanceOfferingRequest class provides an interface for Elasticsearch PurchaseReservedElasticsearchInstanceOffering requests.
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
 * \sa ElasticsearchClient::purchaseReservedElasticsearchInstanceOffering
 */

/*!
 * Constructs a copy of \a other.
 */
PurchaseReservedElasticsearchInstanceOfferingRequest::PurchaseReservedElasticsearchInstanceOfferingRequest(const PurchaseReservedElasticsearchInstanceOfferingRequest &other)
    : ElasticsearchRequest(new PurchaseReservedElasticsearchInstanceOfferingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PurchaseReservedElasticsearchInstanceOfferingRequest object.
 */
PurchaseReservedElasticsearchInstanceOfferingRequest::PurchaseReservedElasticsearchInstanceOfferingRequest()
    : ElasticsearchRequest(new PurchaseReservedElasticsearchInstanceOfferingRequestPrivate(ElasticsearchRequest::PurchaseReservedElasticsearchInstanceOfferingAction, this))
{

}

/*!
 * \reimp
 */
bool PurchaseReservedElasticsearchInstanceOfferingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PurchaseReservedElasticsearchInstanceOfferingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PurchaseReservedElasticsearchInstanceOfferingRequest::response(QNetworkReply * const reply) const
{
    return new PurchaseReservedElasticsearchInstanceOfferingResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::PurchaseReservedElasticsearchInstanceOfferingRequestPrivate
 * \brief The PurchaseReservedElasticsearchInstanceOfferingRequestPrivate class provides private implementation for PurchaseReservedElasticsearchInstanceOfferingRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a PurchaseReservedElasticsearchInstanceOfferingRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
PurchaseReservedElasticsearchInstanceOfferingRequestPrivate::PurchaseReservedElasticsearchInstanceOfferingRequestPrivate(
    const ElasticsearchRequest::Action action, PurchaseReservedElasticsearchInstanceOfferingRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PurchaseReservedElasticsearchInstanceOfferingRequest
 * class' copy constructor.
 */
PurchaseReservedElasticsearchInstanceOfferingRequestPrivate::PurchaseReservedElasticsearchInstanceOfferingRequestPrivate(
    const PurchaseReservedElasticsearchInstanceOfferingRequestPrivate &other, PurchaseReservedElasticsearchInstanceOfferingRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
