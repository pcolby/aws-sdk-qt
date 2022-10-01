// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcompatibleelasticsearchversionsrequest.h"
#include "getcompatibleelasticsearchversionsrequest_p.h"
#include "getcompatibleelasticsearchversionsresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::GetCompatibleElasticsearchVersionsRequest
 * \brief The GetCompatibleElasticsearchVersionsRequest class provides an interface for Elasticsearch GetCompatibleElasticsearchVersions requests.
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
 * \sa ElasticsearchClient::getCompatibleElasticsearchVersions
 */

/*!
 * Constructs a copy of \a other.
 */
GetCompatibleElasticsearchVersionsRequest::GetCompatibleElasticsearchVersionsRequest(const GetCompatibleElasticsearchVersionsRequest &other)
    : ElasticsearchRequest(new GetCompatibleElasticsearchVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCompatibleElasticsearchVersionsRequest object.
 */
GetCompatibleElasticsearchVersionsRequest::GetCompatibleElasticsearchVersionsRequest()
    : ElasticsearchRequest(new GetCompatibleElasticsearchVersionsRequestPrivate(ElasticsearchRequest::GetCompatibleElasticsearchVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetCompatibleElasticsearchVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCompatibleElasticsearchVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCompatibleElasticsearchVersionsRequest::response(QNetworkReply * const reply) const
{
    return new GetCompatibleElasticsearchVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::GetCompatibleElasticsearchVersionsRequestPrivate
 * \brief The GetCompatibleElasticsearchVersionsRequestPrivate class provides private implementation for GetCompatibleElasticsearchVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a GetCompatibleElasticsearchVersionsRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
GetCompatibleElasticsearchVersionsRequestPrivate::GetCompatibleElasticsearchVersionsRequestPrivate(
    const ElasticsearchRequest::Action action, GetCompatibleElasticsearchVersionsRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCompatibleElasticsearchVersionsRequest
 * class' copy constructor.
 */
GetCompatibleElasticsearchVersionsRequestPrivate::GetCompatibleElasticsearchVersionsRequestPrivate(
    const GetCompatibleElasticsearchVersionsRequestPrivate &other, GetCompatibleElasticsearchVersionsRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
