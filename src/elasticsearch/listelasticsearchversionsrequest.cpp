// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listelasticsearchversionsrequest.h"
#include "listelasticsearchversionsrequest_p.h"
#include "listelasticsearchversionsresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::ListElasticsearchVersionsRequest
 * \brief The ListElasticsearchVersionsRequest class provides an interface for Elasticsearch ListElasticsearchVersions requests.
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
 * \sa ElasticsearchClient::listElasticsearchVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListElasticsearchVersionsRequest::ListElasticsearchVersionsRequest(const ListElasticsearchVersionsRequest &other)
    : ElasticsearchRequest(new ListElasticsearchVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListElasticsearchVersionsRequest object.
 */
ListElasticsearchVersionsRequest::ListElasticsearchVersionsRequest()
    : ElasticsearchRequest(new ListElasticsearchVersionsRequestPrivate(ElasticsearchRequest::ListElasticsearchVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListElasticsearchVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListElasticsearchVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListElasticsearchVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListElasticsearchVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::ListElasticsearchVersionsRequestPrivate
 * \brief The ListElasticsearchVersionsRequestPrivate class provides private implementation for ListElasticsearchVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a ListElasticsearchVersionsRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
ListElasticsearchVersionsRequestPrivate::ListElasticsearchVersionsRequestPrivate(
    const ElasticsearchRequest::Action action, ListElasticsearchVersionsRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListElasticsearchVersionsRequest
 * class' copy constructor.
 */
ListElasticsearchVersionsRequestPrivate::ListElasticsearchVersionsRequestPrivate(
    const ListElasticsearchVersionsRequestPrivate &other, ListElasticsearchVersionsRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
