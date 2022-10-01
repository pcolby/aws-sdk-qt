// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describepackagesrequest.h"
#include "describepackagesrequest_p.h"
#include "describepackagesresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::DescribePackagesRequest
 * \brief The DescribePackagesRequest class provides an interface for OpenSearch DescribePackages requests.
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
 * \sa OpenSearchClient::describePackages
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePackagesRequest::DescribePackagesRequest(const DescribePackagesRequest &other)
    : OpenSearchRequest(new DescribePackagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePackagesRequest object.
 */
DescribePackagesRequest::DescribePackagesRequest()
    : OpenSearchRequest(new DescribePackagesRequestPrivate(OpenSearchRequest::DescribePackagesAction, this))
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
 * \class QtAws::OpenSearch::DescribePackagesRequestPrivate
 * \brief The DescribePackagesRequestPrivate class provides private implementation for DescribePackagesRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a DescribePackagesRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
DescribePackagesRequestPrivate::DescribePackagesRequestPrivate(
    const OpenSearchRequest::Action action, DescribePackagesRequest * const q)
    : OpenSearchRequestPrivate(action, q)
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
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
