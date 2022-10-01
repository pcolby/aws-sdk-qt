// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedomainchangeprogressrequest.h"
#include "describedomainchangeprogressrequest_p.h"
#include "describedomainchangeprogressresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DescribeDomainChangeProgressRequest
 * \brief The DescribeDomainChangeProgressRequest class provides an interface for Elasticsearch DescribeDomainChangeProgress requests.
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
 * \sa ElasticsearchClient::describeDomainChangeProgress
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDomainChangeProgressRequest::DescribeDomainChangeProgressRequest(const DescribeDomainChangeProgressRequest &other)
    : ElasticsearchRequest(new DescribeDomainChangeProgressRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDomainChangeProgressRequest object.
 */
DescribeDomainChangeProgressRequest::DescribeDomainChangeProgressRequest()
    : ElasticsearchRequest(new DescribeDomainChangeProgressRequestPrivate(ElasticsearchRequest::DescribeDomainChangeProgressAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDomainChangeProgressRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDomainChangeProgressResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDomainChangeProgressRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDomainChangeProgressResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::DescribeDomainChangeProgressRequestPrivate
 * \brief The DescribeDomainChangeProgressRequestPrivate class provides private implementation for DescribeDomainChangeProgressRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DescribeDomainChangeProgressRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
DescribeDomainChangeProgressRequestPrivate::DescribeDomainChangeProgressRequestPrivate(
    const ElasticsearchRequest::Action action, DescribeDomainChangeProgressRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDomainChangeProgressRequest
 * class' copy constructor.
 */
DescribeDomainChangeProgressRequestPrivate::DescribeDomainChangeProgressRequestPrivate(
    const DescribeDomainChangeProgressRequestPrivate &other, DescribeDomainChangeProgressRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
