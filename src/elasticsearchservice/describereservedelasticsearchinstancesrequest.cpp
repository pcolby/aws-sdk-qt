/*
    Copyright 2013-2020 Paul Colby

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

#include "describereservedelasticsearchinstancesrequest.h"
#include "describereservedelasticsearchinstancesrequest_p.h"
#include "describereservedelasticsearchinstancesresponse.h"
#include "elasticsearchservicerequest_p.h"

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::DescribeReservedElasticsearchInstancesRequest
 * \brief The DescribeReservedElasticsearchInstancesRequest class provides an interface for ElasticsearchService DescribeReservedElasticsearchInstances requests.
 *
 * \inmodule QtAwsElasticsearchService
 *
 *  <fullname>Amazon Elasticsearch Configuration Service</fullname>
 * 
 *  Use the Amazon Elasticsearch configuration API to create, configure, and manage Elasticsearch
 * 
 *  domains>
 * 
 *  The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 *  es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticsearch-service-regions" target="_blank">Regions and
 *
 * \sa ElasticsearchServiceClient::describeReservedElasticsearchInstances
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReservedElasticsearchInstancesRequest::DescribeReservedElasticsearchInstancesRequest(const DescribeReservedElasticsearchInstancesRequest &other)
    : ElasticsearchServiceRequest(new DescribeReservedElasticsearchInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReservedElasticsearchInstancesRequest object.
 */
DescribeReservedElasticsearchInstancesRequest::DescribeReservedElasticsearchInstancesRequest()
    : ElasticsearchServiceRequest(new DescribeReservedElasticsearchInstancesRequestPrivate(ElasticsearchServiceRequest::DescribeReservedElasticsearchInstancesAction, this))
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
 * \class QtAws::ElasticsearchService::DescribeReservedElasticsearchInstancesRequestPrivate
 * \brief The DescribeReservedElasticsearchInstancesRequestPrivate class provides private implementation for DescribeReservedElasticsearchInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearchService
 */

/*!
 * Constructs a DescribeReservedElasticsearchInstancesRequestPrivate object for ElasticsearchService \a action,
 * with public implementation \a q.
 */
DescribeReservedElasticsearchInstancesRequestPrivate::DescribeReservedElasticsearchInstancesRequestPrivate(
    const ElasticsearchServiceRequest::Action action, DescribeReservedElasticsearchInstancesRequest * const q)
    : ElasticsearchServiceRequestPrivate(action, q)
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
    : ElasticsearchServiceRequestPrivate(other, q)
{

}

} // namespace ElasticsearchService
} // namespace QtAws
