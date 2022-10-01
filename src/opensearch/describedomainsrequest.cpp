// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedomainsrequest.h"
#include "describedomainsrequest_p.h"
#include "describedomainsresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::DescribeDomainsRequest
 * \brief The DescribeDomainsRequest class provides an interface for OpenSearch DescribeDomains requests.
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
 * \sa OpenSearchClient::describeDomains
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDomainsRequest::DescribeDomainsRequest(const DescribeDomainsRequest &other)
    : OpenSearchRequest(new DescribeDomainsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDomainsRequest object.
 */
DescribeDomainsRequest::DescribeDomainsRequest()
    : OpenSearchRequest(new DescribeDomainsRequestPrivate(OpenSearchRequest::DescribeDomainsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDomainsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDomainsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDomainsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDomainsResponse(*this, reply);
}

/*!
 * \class QtAws::OpenSearch::DescribeDomainsRequestPrivate
 * \brief The DescribeDomainsRequestPrivate class provides private implementation for DescribeDomainsRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a DescribeDomainsRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
DescribeDomainsRequestPrivate::DescribeDomainsRequestPrivate(
    const OpenSearchRequest::Action action, DescribeDomainsRequest * const q)
    : OpenSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDomainsRequest
 * class' copy constructor.
 */
DescribeDomainsRequestPrivate::DescribeDomainsRequestPrivate(
    const DescribeDomainsRequestPrivate &other, DescribeDomainsRequest * const q)
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
