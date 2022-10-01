// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addtagsrequest.h"
#include "addtagsrequest_p.h"
#include "addtagsresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::AddTagsRequest
 * \brief The AddTagsRequest class provides an interface for Elasticsearch AddTags requests.
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
 * \sa ElasticsearchClient::addTags
 */

/*!
 * Constructs a copy of \a other.
 */
AddTagsRequest::AddTagsRequest(const AddTagsRequest &other)
    : ElasticsearchRequest(new AddTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddTagsRequest object.
 */
AddTagsRequest::AddTagsRequest()
    : ElasticsearchRequest(new AddTagsRequestPrivate(ElasticsearchRequest::AddTagsAction, this))
{

}

/*!
 * \reimp
 */
bool AddTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddTagsRequest::response(QNetworkReply * const reply) const
{
    return new AddTagsResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::AddTagsRequestPrivate
 * \brief The AddTagsRequestPrivate class provides private implementation for AddTagsRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a AddTagsRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
AddTagsRequestPrivate::AddTagsRequestPrivate(
    const ElasticsearchRequest::Action action, AddTagsRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddTagsRequest
 * class' copy constructor.
 */
AddTagsRequestPrivate::AddTagsRequestPrivate(
    const AddTagsRequestPrivate &other, AddTagsRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
