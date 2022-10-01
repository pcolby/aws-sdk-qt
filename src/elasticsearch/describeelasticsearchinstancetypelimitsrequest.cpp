// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeelasticsearchinstancetypelimitsrequest.h"
#include "describeelasticsearchinstancetypelimitsrequest_p.h"
#include "describeelasticsearchinstancetypelimitsresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DescribeElasticsearchInstanceTypeLimitsRequest
 * \brief The DescribeElasticsearchInstanceTypeLimitsRequest class provides an interface for Elasticsearch DescribeElasticsearchInstanceTypeLimits requests.
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
 * \sa ElasticsearchClient::describeElasticsearchInstanceTypeLimits
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeElasticsearchInstanceTypeLimitsRequest::DescribeElasticsearchInstanceTypeLimitsRequest(const DescribeElasticsearchInstanceTypeLimitsRequest &other)
    : ElasticsearchRequest(new DescribeElasticsearchInstanceTypeLimitsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeElasticsearchInstanceTypeLimitsRequest object.
 */
DescribeElasticsearchInstanceTypeLimitsRequest::DescribeElasticsearchInstanceTypeLimitsRequest()
    : ElasticsearchRequest(new DescribeElasticsearchInstanceTypeLimitsRequestPrivate(ElasticsearchRequest::DescribeElasticsearchInstanceTypeLimitsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeElasticsearchInstanceTypeLimitsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeElasticsearchInstanceTypeLimitsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeElasticsearchInstanceTypeLimitsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeElasticsearchInstanceTypeLimitsResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::DescribeElasticsearchInstanceTypeLimitsRequestPrivate
 * \brief The DescribeElasticsearchInstanceTypeLimitsRequestPrivate class provides private implementation for DescribeElasticsearchInstanceTypeLimitsRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DescribeElasticsearchInstanceTypeLimitsRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
DescribeElasticsearchInstanceTypeLimitsRequestPrivate::DescribeElasticsearchInstanceTypeLimitsRequestPrivate(
    const ElasticsearchRequest::Action action, DescribeElasticsearchInstanceTypeLimitsRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeElasticsearchInstanceTypeLimitsRequest
 * class' copy constructor.
 */
DescribeElasticsearchInstanceTypeLimitsRequestPrivate::DescribeElasticsearchInstanceTypeLimitsRequestPrivate(
    const DescribeElasticsearchInstanceTypeLimitsRequestPrivate &other, DescribeElasticsearchInstanceTypeLimitsRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
