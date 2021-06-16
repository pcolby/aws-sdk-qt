/*
    Copyright 2013-2021 Paul Colby

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

#include "describeelasticsearchdomainsrequest.h"
#include "describeelasticsearchdomainsrequest_p.h"
#include "describeelasticsearchdomainsresponse.h"
#include "elasticsearchservicerequest_p.h"

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::DescribeElasticsearchDomainsRequest
 * \brief The DescribeElasticsearchDomainsRequest class provides an interface for ElasticsearchService DescribeElasticsearchDomains requests.
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
 * \sa ElasticsearchServiceClient::describeElasticsearchDomains
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeElasticsearchDomainsRequest::DescribeElasticsearchDomainsRequest(const DescribeElasticsearchDomainsRequest &other)
    : ElasticsearchServiceRequest(new DescribeElasticsearchDomainsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeElasticsearchDomainsRequest object.
 */
DescribeElasticsearchDomainsRequest::DescribeElasticsearchDomainsRequest()
    : ElasticsearchServiceRequest(new DescribeElasticsearchDomainsRequestPrivate(ElasticsearchServiceRequest::DescribeElasticsearchDomainsAction, this))
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
 * \class QtAws::ElasticsearchService::DescribeElasticsearchDomainsRequestPrivate
 * \brief The DescribeElasticsearchDomainsRequestPrivate class provides private implementation for DescribeElasticsearchDomainsRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearchService
 */

/*!
 * Constructs a DescribeElasticsearchDomainsRequestPrivate object for ElasticsearchService \a action,
 * with public implementation \a q.
 */
DescribeElasticsearchDomainsRequestPrivate::DescribeElasticsearchDomainsRequestPrivate(
    const ElasticsearchServiceRequest::Action action, DescribeElasticsearchDomainsRequest * const q)
    : ElasticsearchServiceRequestPrivate(action, q)
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
    : ElasticsearchServiceRequestPrivate(other, q)
{

}

} // namespace ElasticsearchService
} // namespace QtAws
