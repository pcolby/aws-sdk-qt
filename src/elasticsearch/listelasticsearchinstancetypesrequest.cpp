// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listelasticsearchinstancetypesrequest.h"
#include "listelasticsearchinstancetypesrequest_p.h"
#include "listelasticsearchinstancetypesresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::ListElasticsearchInstanceTypesRequest
 * \brief The ListElasticsearchInstanceTypesRequest class provides an interface for Elasticsearch ListElasticsearchInstanceTypes requests.
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
 * \sa ElasticsearchClient::listElasticsearchInstanceTypes
 */

/*!
 * Constructs a copy of \a other.
 */
ListElasticsearchInstanceTypesRequest::ListElasticsearchInstanceTypesRequest(const ListElasticsearchInstanceTypesRequest &other)
    : ElasticsearchRequest(new ListElasticsearchInstanceTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListElasticsearchInstanceTypesRequest object.
 */
ListElasticsearchInstanceTypesRequest::ListElasticsearchInstanceTypesRequest()
    : ElasticsearchRequest(new ListElasticsearchInstanceTypesRequestPrivate(ElasticsearchRequest::ListElasticsearchInstanceTypesAction, this))
{

}

/*!
 * \reimp
 */
bool ListElasticsearchInstanceTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListElasticsearchInstanceTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListElasticsearchInstanceTypesRequest::response(QNetworkReply * const reply) const
{
    return new ListElasticsearchInstanceTypesResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::ListElasticsearchInstanceTypesRequestPrivate
 * \brief The ListElasticsearchInstanceTypesRequestPrivate class provides private implementation for ListElasticsearchInstanceTypesRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a ListElasticsearchInstanceTypesRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
ListElasticsearchInstanceTypesRequestPrivate::ListElasticsearchInstanceTypesRequestPrivate(
    const ElasticsearchRequest::Action action, ListElasticsearchInstanceTypesRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListElasticsearchInstanceTypesRequest
 * class' copy constructor.
 */
ListElasticsearchInstanceTypesRequestPrivate::ListElasticsearchInstanceTypesRequestPrivate(
    const ListElasticsearchInstanceTypesRequestPrivate &other, ListElasticsearchInstanceTypesRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
