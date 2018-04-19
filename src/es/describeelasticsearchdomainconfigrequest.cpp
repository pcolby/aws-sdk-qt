/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeelasticsearchdomainconfigrequest.h"
#include "describeelasticsearchdomainconfigrequest_p.h"
#include "describeelasticsearchdomainconfigresponse.h"
#include "elasticsearchservicerequest_p.h"

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::DescribeElasticsearchDomainConfigRequest
 * \brief The DescribeElasticsearchDomainConfigRequest class provides an interface for ElasticsearchService DescribeElasticsearchDomainConfig requests.
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
 * \sa ElasticsearchServiceClient::describeElasticsearchDomainConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeElasticsearchDomainConfigRequest::DescribeElasticsearchDomainConfigRequest(const DescribeElasticsearchDomainConfigRequest &other)
    : ElasticsearchServiceRequest(new DescribeElasticsearchDomainConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeElasticsearchDomainConfigRequest object.
 */
DescribeElasticsearchDomainConfigRequest::DescribeElasticsearchDomainConfigRequest()
    : ElasticsearchServiceRequest(new DescribeElasticsearchDomainConfigRequestPrivate(ElasticsearchServiceRequest::DescribeElasticsearchDomainConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeElasticsearchDomainConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeElasticsearchDomainConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeElasticsearchDomainConfigRequest::response(QNetworkReply * const reply) const
{
    return new DescribeElasticsearchDomainConfigResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticsearchService::DescribeElasticsearchDomainConfigRequestPrivate
 * \brief The DescribeElasticsearchDomainConfigRequestPrivate class provides private implementation for DescribeElasticsearchDomainConfigRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearchService
 */

/*!
 *
 * Constructs a DescribeElasticsearchDomainConfigRequestPrivate object for ElasticsearchService \a action with,
 * public implementation \a q.
 */
DescribeElasticsearchDomainConfigRequestPrivate::DescribeElasticsearchDomainConfigRequestPrivate(
    const ElasticsearchServiceRequest::Action action, DescribeElasticsearchDomainConfigRequest * const q)
    : ElasticsearchServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeElasticsearchDomainConfigRequest
 * class' copy constructor.
 */
DescribeElasticsearchDomainConfigRequestPrivate::DescribeElasticsearchDomainConfigRequestPrivate(
    const DescribeElasticsearchDomainConfigRequestPrivate &other, DescribeElasticsearchDomainConfigRequest * const q)
    : ElasticsearchServiceRequestPrivate(other, q)
{

}

} // namespace ElasticsearchService
} // namespace QtAws
