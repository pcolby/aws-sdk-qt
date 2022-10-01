// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdomainrequest.h"
#include "createdomainrequest_p.h"
#include "createdomainresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::CreateDomainRequest
 * \brief The CreateDomainRequest class provides an interface for OpenSearch CreateDomain requests.
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
 * \sa OpenSearchClient::createDomain
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDomainRequest::CreateDomainRequest(const CreateDomainRequest &other)
    : OpenSearchRequest(new CreateDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDomainRequest object.
 */
CreateDomainRequest::CreateDomainRequest()
    : OpenSearchRequest(new CreateDomainRequestPrivate(OpenSearchRequest::CreateDomainAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDomainRequest::response(QNetworkReply * const reply) const
{
    return new CreateDomainResponse(*this, reply);
}

/*!
 * \class QtAws::OpenSearch::CreateDomainRequestPrivate
 * \brief The CreateDomainRequestPrivate class provides private implementation for CreateDomainRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a CreateDomainRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
CreateDomainRequestPrivate::CreateDomainRequestPrivate(
    const OpenSearchRequest::Action action, CreateDomainRequest * const q)
    : OpenSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDomainRequest
 * class' copy constructor.
 */
CreateDomainRequestPrivate::CreateDomainRequestPrivate(
    const CreateDomainRequestPrivate &other, CreateDomainRequest * const q)
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
