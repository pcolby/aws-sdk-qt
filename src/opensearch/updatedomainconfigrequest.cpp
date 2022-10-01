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

#include "updatedomainconfigrequest.h"
#include "updatedomainconfigrequest_p.h"
#include "updatedomainconfigresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::UpdateDomainConfigRequest
 * \brief The UpdateDomainConfigRequest class provides an interface for OpenSearch UpdateDomainConfig requests.
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
 * \sa OpenSearchClient::updateDomainConfig
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDomainConfigRequest::UpdateDomainConfigRequest(const UpdateDomainConfigRequest &other)
    : OpenSearchRequest(new UpdateDomainConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDomainConfigRequest object.
 */
UpdateDomainConfigRequest::UpdateDomainConfigRequest()
    : OpenSearchRequest(new UpdateDomainConfigRequestPrivate(OpenSearchRequest::UpdateDomainConfigAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDomainConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDomainConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDomainConfigRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDomainConfigResponse(*this, reply);
}

/*!
 * \class QtAws::OpenSearch::UpdateDomainConfigRequestPrivate
 * \brief The UpdateDomainConfigRequestPrivate class provides private implementation for UpdateDomainConfigRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a UpdateDomainConfigRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
UpdateDomainConfigRequestPrivate::UpdateDomainConfigRequestPrivate(
    const OpenSearchRequest::Action action, UpdateDomainConfigRequest * const q)
    : OpenSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDomainConfigRequest
 * class' copy constructor.
 */
UpdateDomainConfigRequestPrivate::UpdateDomainConfigRequestPrivate(
    const UpdateDomainConfigRequestPrivate &other, UpdateDomainConfigRequest * const q)
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
