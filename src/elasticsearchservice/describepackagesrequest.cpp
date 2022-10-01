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

#include "describepackagesrequest.h"
#include "describepackagesrequest_p.h"
#include "describepackagesresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DescribePackagesRequest
 * \brief The DescribePackagesRequest class provides an interface for Elasticsearch DescribePackages requests.
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
 * \sa ElasticsearchClient::describePackages
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePackagesRequest::DescribePackagesRequest(const DescribePackagesRequest &other)
    : ElasticsearchRequest(new DescribePackagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePackagesRequest object.
 */
DescribePackagesRequest::DescribePackagesRequest()
    : ElasticsearchRequest(new DescribePackagesRequestPrivate(ElasticsearchRequest::DescribePackagesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePackagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePackagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePackagesRequest::response(QNetworkReply * const reply) const
{
    return new DescribePackagesResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::DescribePackagesRequestPrivate
 * \brief The DescribePackagesRequestPrivate class provides private implementation for DescribePackagesRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DescribePackagesRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
DescribePackagesRequestPrivate::DescribePackagesRequestPrivate(
    const ElasticsearchRequest::Action action, DescribePackagesRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePackagesRequest
 * class' copy constructor.
 */
DescribePackagesRequestPrivate::DescribePackagesRequestPrivate(
    const DescribePackagesRequestPrivate &other, DescribePackagesRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
