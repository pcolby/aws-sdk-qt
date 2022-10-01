// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdomainsforpackagerequest.h"
#include "listdomainsforpackagerequest_p.h"
#include "listdomainsforpackageresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::ListDomainsForPackageRequest
 * \brief The ListDomainsForPackageRequest class provides an interface for Elasticsearch ListDomainsForPackage requests.
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
 * \sa ElasticsearchClient::listDomainsForPackage
 */

/*!
 * Constructs a copy of \a other.
 */
ListDomainsForPackageRequest::ListDomainsForPackageRequest(const ListDomainsForPackageRequest &other)
    : ElasticsearchRequest(new ListDomainsForPackageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDomainsForPackageRequest object.
 */
ListDomainsForPackageRequest::ListDomainsForPackageRequest()
    : ElasticsearchRequest(new ListDomainsForPackageRequestPrivate(ElasticsearchRequest::ListDomainsForPackageAction, this))
{

}

/*!
 * \reimp
 */
bool ListDomainsForPackageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDomainsForPackageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDomainsForPackageRequest::response(QNetworkReply * const reply) const
{
    return new ListDomainsForPackageResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::ListDomainsForPackageRequestPrivate
 * \brief The ListDomainsForPackageRequestPrivate class provides private implementation for ListDomainsForPackageRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a ListDomainsForPackageRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
ListDomainsForPackageRequestPrivate::ListDomainsForPackageRequestPrivate(
    const ElasticsearchRequest::Action action, ListDomainsForPackageRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDomainsForPackageRequest
 * class' copy constructor.
 */
ListDomainsForPackageRequestPrivate::ListDomainsForPackageRequestPrivate(
    const ListDomainsForPackageRequestPrivate &other, ListDomainsForPackageRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
