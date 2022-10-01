// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedomainrequest.h"
#include "describedomainrequest_p.h"
#include "describedomainresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::DescribeDomainRequest
 * \brief The DescribeDomainRequest class provides an interface for OpenSearch DescribeDomain requests.
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
 * \sa OpenSearchClient::describeDomain
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDomainRequest::DescribeDomainRequest(const DescribeDomainRequest &other)
    : OpenSearchRequest(new DescribeDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDomainRequest object.
 */
DescribeDomainRequest::DescribeDomainRequest()
    : OpenSearchRequest(new DescribeDomainRequestPrivate(OpenSearchRequest::DescribeDomainAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDomainRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDomainResponse(*this, reply);
}

/*!
 * \class QtAws::OpenSearch::DescribeDomainRequestPrivate
 * \brief The DescribeDomainRequestPrivate class provides private implementation for DescribeDomainRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a DescribeDomainRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
DescribeDomainRequestPrivate::DescribeDomainRequestPrivate(
    const OpenSearchRequest::Action action, DescribeDomainRequest * const q)
    : OpenSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDomainRequest
 * class' copy constructor.
 */
DescribeDomainRequestPrivate::DescribeDomainRequestPrivate(
    const DescribeDomainRequestPrivate &other, DescribeDomainRequest * const q)
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
