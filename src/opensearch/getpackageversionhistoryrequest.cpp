// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpackageversionhistoryrequest.h"
#include "getpackageversionhistoryrequest_p.h"
#include "getpackageversionhistoryresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::GetPackageVersionHistoryRequest
 * \brief The GetPackageVersionHistoryRequest class provides an interface for OpenSearch GetPackageVersionHistory requests.
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
 * \sa OpenSearchClient::getPackageVersionHistory
 */

/*!
 * Constructs a copy of \a other.
 */
GetPackageVersionHistoryRequest::GetPackageVersionHistoryRequest(const GetPackageVersionHistoryRequest &other)
    : OpenSearchRequest(new GetPackageVersionHistoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPackageVersionHistoryRequest object.
 */
GetPackageVersionHistoryRequest::GetPackageVersionHistoryRequest()
    : OpenSearchRequest(new GetPackageVersionHistoryRequestPrivate(OpenSearchRequest::GetPackageVersionHistoryAction, this))
{

}

/*!
 * \reimp
 */
bool GetPackageVersionHistoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPackageVersionHistoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPackageVersionHistoryRequest::response(QNetworkReply * const reply) const
{
    return new GetPackageVersionHistoryResponse(*this, reply);
}

/*!
 * \class QtAws::OpenSearch::GetPackageVersionHistoryRequestPrivate
 * \brief The GetPackageVersionHistoryRequestPrivate class provides private implementation for GetPackageVersionHistoryRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a GetPackageVersionHistoryRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
GetPackageVersionHistoryRequestPrivate::GetPackageVersionHistoryRequestPrivate(
    const OpenSearchRequest::Action action, GetPackageVersionHistoryRequest * const q)
    : OpenSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPackageVersionHistoryRequest
 * class' copy constructor.
 */
GetPackageVersionHistoryRequestPrivate::GetPackageVersionHistoryRequestPrivate(
    const GetPackageVersionHistoryRequestPrivate &other, GetPackageVersionHistoryRequest * const q)
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
