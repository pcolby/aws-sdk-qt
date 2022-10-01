// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeinstancetypelimitsrequest.h"
#include "describeinstancetypelimitsrequest_p.h"
#include "describeinstancetypelimitsresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::DescribeInstanceTypeLimitsRequest
 * \brief The DescribeInstanceTypeLimitsRequest class provides an interface for OpenSearch DescribeInstanceTypeLimits requests.
 *
 * \inmodule QtAwsOpenSearch
 *
 *  <fullname>Amazon OpenSearch Configuration Service</fullname>
 * 
 *  Use the Amazon OpenSearch configuration API to create, configure, and manage Amazon OpenSearch Service
 * 
 *  domains>
 * 
 *  For sample code that uses the configuration API, see the <a
 *  href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/opensearch-configuration-samples.html">
 *  Amazon OpenSearch Service Developer Guide</a>. The guide also contains <a
 *  href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/request-signing.html"> sample code for
 *  sending signed HTTP requests to the OpenSearch APIs</a>.
 * 
 *  </p
 * 
 *  The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 *  es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#service-regions" target="_blank">Regions and
 *  Endpoints</a>.
 *
 * \sa OpenSearchClient::describeInstanceTypeLimits
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeInstanceTypeLimitsRequest::DescribeInstanceTypeLimitsRequest(const DescribeInstanceTypeLimitsRequest &other)
    : OpenSearchRequest(new DescribeInstanceTypeLimitsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeInstanceTypeLimitsRequest object.
 */
DescribeInstanceTypeLimitsRequest::DescribeInstanceTypeLimitsRequest()
    : OpenSearchRequest(new DescribeInstanceTypeLimitsRequestPrivate(OpenSearchRequest::DescribeInstanceTypeLimitsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeInstanceTypeLimitsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeInstanceTypeLimitsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeInstanceTypeLimitsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInstanceTypeLimitsResponse(*this, reply);
}

/*!
 * \class QtAws::OpenSearch::DescribeInstanceTypeLimitsRequestPrivate
 * \brief The DescribeInstanceTypeLimitsRequestPrivate class provides private implementation for DescribeInstanceTypeLimitsRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a DescribeInstanceTypeLimitsRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
DescribeInstanceTypeLimitsRequestPrivate::DescribeInstanceTypeLimitsRequestPrivate(
    const OpenSearchRequest::Action action, DescribeInstanceTypeLimitsRequest * const q)
    : OpenSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeInstanceTypeLimitsRequest
 * class' copy constructor.
 */
DescribeInstanceTypeLimitsRequestPrivate::DescribeInstanceTypeLimitsRequestPrivate(
    const DescribeInstanceTypeLimitsRequestPrivate &other, DescribeInstanceTypeLimitsRequest * const q)
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
