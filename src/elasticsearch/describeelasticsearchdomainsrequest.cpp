// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeelasticsearchdomainsrequest.h"
#include "describeelasticsearchdomainsrequest_p.h"
#include "describeelasticsearchdomainsresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DescribeElasticsearchDomainsRequest
 * \brief The DescribeElasticsearchDomainsRequest class provides an interface for Elasticsearch DescribeElasticsearchDomains requests.
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
 * \sa ElasticsearchClient::describeElasticsearchDomains
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeElasticsearchDomainsRequest::DescribeElasticsearchDomainsRequest(const DescribeElasticsearchDomainsRequest &other)
    : ElasticsearchRequest(new DescribeElasticsearchDomainsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeElasticsearchDomainsRequest object.
 */
DescribeElasticsearchDomainsRequest::DescribeElasticsearchDomainsRequest()
    : ElasticsearchRequest(new DescribeElasticsearchDomainsRequestPrivate(ElasticsearchRequest::DescribeElasticsearchDomainsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeElasticsearchDomainsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeElasticsearchDomainsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeElasticsearchDomainsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeElasticsearchDomainsResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::DescribeElasticsearchDomainsRequestPrivate
 * \brief The DescribeElasticsearchDomainsRequestPrivate class provides private implementation for DescribeElasticsearchDomainsRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DescribeElasticsearchDomainsRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
DescribeElasticsearchDomainsRequestPrivate::DescribeElasticsearchDomainsRequestPrivate(
    const ElasticsearchRequest::Action action, DescribeElasticsearchDomainsRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeElasticsearchDomainsRequest
 * class' copy constructor.
 */
DescribeElasticsearchDomainsRequestPrivate::DescribeElasticsearchDomainsRequestPrivate(
    const DescribeElasticsearchDomainsRequestPrivate &other, DescribeElasticsearchDomainsRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
