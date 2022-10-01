// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereservedelasticsearchinstancesrequest.h"
#include "describereservedelasticsearchinstancesrequest_p.h"
#include "describereservedelasticsearchinstancesresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DescribeReservedElasticsearchInstancesRequest
 * \brief The DescribeReservedElasticsearchInstancesRequest class provides an interface for Elasticsearch DescribeReservedElasticsearchInstances requests.
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
 * \sa ElasticsearchClient::describeReservedElasticsearchInstances
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReservedElasticsearchInstancesRequest::DescribeReservedElasticsearchInstancesRequest(const DescribeReservedElasticsearchInstancesRequest &other)
    : ElasticsearchRequest(new DescribeReservedElasticsearchInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReservedElasticsearchInstancesRequest object.
 */
DescribeReservedElasticsearchInstancesRequest::DescribeReservedElasticsearchInstancesRequest()
    : ElasticsearchRequest(new DescribeReservedElasticsearchInstancesRequestPrivate(ElasticsearchRequest::DescribeReservedElasticsearchInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReservedElasticsearchInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeReservedElasticsearchInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReservedElasticsearchInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReservedElasticsearchInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::DescribeReservedElasticsearchInstancesRequestPrivate
 * \brief The DescribeReservedElasticsearchInstancesRequestPrivate class provides private implementation for DescribeReservedElasticsearchInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DescribeReservedElasticsearchInstancesRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
DescribeReservedElasticsearchInstancesRequestPrivate::DescribeReservedElasticsearchInstancesRequestPrivate(
    const ElasticsearchRequest::Action action, DescribeReservedElasticsearchInstancesRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeReservedElasticsearchInstancesRequest
 * class' copy constructor.
 */
DescribeReservedElasticsearchInstancesRequestPrivate::DescribeReservedElasticsearchInstancesRequestPrivate(
    const DescribeReservedElasticsearchInstancesRequestPrivate &other, DescribeReservedElasticsearchInstancesRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
