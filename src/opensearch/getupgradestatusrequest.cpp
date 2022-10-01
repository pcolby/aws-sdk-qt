// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getupgradestatusrequest.h"
#include "getupgradestatusrequest_p.h"
#include "getupgradestatusresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::GetUpgradeStatusRequest
 * \brief The GetUpgradeStatusRequest class provides an interface for OpenSearch GetUpgradeStatus requests.
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
 * \sa OpenSearchClient::getUpgradeStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetUpgradeStatusRequest::GetUpgradeStatusRequest(const GetUpgradeStatusRequest &other)
    : OpenSearchRequest(new GetUpgradeStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUpgradeStatusRequest object.
 */
GetUpgradeStatusRequest::GetUpgradeStatusRequest()
    : OpenSearchRequest(new GetUpgradeStatusRequestPrivate(OpenSearchRequest::GetUpgradeStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetUpgradeStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUpgradeStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUpgradeStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetUpgradeStatusResponse(*this, reply);
}

/*!
 * \class QtAws::OpenSearch::GetUpgradeStatusRequestPrivate
 * \brief The GetUpgradeStatusRequestPrivate class provides private implementation for GetUpgradeStatusRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a GetUpgradeStatusRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
GetUpgradeStatusRequestPrivate::GetUpgradeStatusRequestPrivate(
    const OpenSearchRequest::Action action, GetUpgradeStatusRequest * const q)
    : OpenSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUpgradeStatusRequest
 * class' copy constructor.
 */
GetUpgradeStatusRequestPrivate::GetUpgradeStatusRequestPrivate(
    const GetUpgradeStatusRequestPrivate &other, GetUpgradeStatusRequest * const q)
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
