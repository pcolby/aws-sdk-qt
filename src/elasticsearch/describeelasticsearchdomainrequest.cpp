// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeelasticsearchdomainrequest.h"
#include "describeelasticsearchdomainrequest_p.h"
#include "describeelasticsearchdomainresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DescribeElasticsearchDomainRequest
 * \brief The DescribeElasticsearchDomainRequest class provides an interface for Elasticsearch DescribeElasticsearchDomain requests.
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
 * \sa ElasticsearchClient::describeElasticsearchDomain
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeElasticsearchDomainRequest::DescribeElasticsearchDomainRequest(const DescribeElasticsearchDomainRequest &other)
    : ElasticsearchRequest(new DescribeElasticsearchDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeElasticsearchDomainRequest object.
 */
DescribeElasticsearchDomainRequest::DescribeElasticsearchDomainRequest()
    : ElasticsearchRequest(new DescribeElasticsearchDomainRequestPrivate(ElasticsearchRequest::DescribeElasticsearchDomainAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeElasticsearchDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeElasticsearchDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeElasticsearchDomainRequest::response(QNetworkReply * const reply) const
{
    return new DescribeElasticsearchDomainResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::DescribeElasticsearchDomainRequestPrivate
 * \brief The DescribeElasticsearchDomainRequestPrivate class provides private implementation for DescribeElasticsearchDomainRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DescribeElasticsearchDomainRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
DescribeElasticsearchDomainRequestPrivate::DescribeElasticsearchDomainRequestPrivate(
    const ElasticsearchRequest::Action action, DescribeElasticsearchDomainRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeElasticsearchDomainRequest
 * class' copy constructor.
 */
DescribeElasticsearchDomainRequestPrivate::DescribeElasticsearchDomainRequestPrivate(
    const DescribeElasticsearchDomainRequestPrivate &other, DescribeElasticsearchDomainRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
