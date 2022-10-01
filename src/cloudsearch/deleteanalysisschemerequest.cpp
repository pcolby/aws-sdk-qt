// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteanalysisschemerequest.h"
#include "deleteanalysisschemerequest_p.h"
#include "deleteanalysisschemeresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DeleteAnalysisSchemeRequest
 * \brief The DeleteAnalysisSchemeRequest class provides an interface for CloudSearch DeleteAnalysisScheme requests.
 *
 * \inmodule QtAwsCloudSearch
 *
 *  <fullname>Amazon CloudSearch Configuration Service</fullname>
 * 
 *  You use the Amazon CloudSearch configuration service to create, configure, and manage search domains. Configuration
 *  service requests are submitted using the AWS Query protocol. AWS Query requests are HTTP or HTTPS requests submitted via
 *  HTTP GET or POST with a query parameter named
 * 
 *  Action>
 * 
 *  The endpoint for configuration service requests is region-specific: cloudsearch.<i>region</i>.amazonaws.com. For
 *  example, cloudsearch.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#cloudsearch_region" target="_blank">Regions and
 *
 * \sa CloudSearchClient::deleteAnalysisScheme
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAnalysisSchemeRequest::DeleteAnalysisSchemeRequest(const DeleteAnalysisSchemeRequest &other)
    : CloudSearchRequest(new DeleteAnalysisSchemeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAnalysisSchemeRequest object.
 */
DeleteAnalysisSchemeRequest::DeleteAnalysisSchemeRequest()
    : CloudSearchRequest(new DeleteAnalysisSchemeRequestPrivate(CloudSearchRequest::DeleteAnalysisSchemeAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAnalysisSchemeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAnalysisSchemeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAnalysisSchemeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAnalysisSchemeResponse(*this, reply);
}

/*!
 * \class QtAws::CloudSearch::DeleteAnalysisSchemeRequestPrivate
 * \brief The DeleteAnalysisSchemeRequestPrivate class provides private implementation for DeleteAnalysisSchemeRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DeleteAnalysisSchemeRequestPrivate object for CloudSearch \a action,
 * with public implementation \a q.
 */
DeleteAnalysisSchemeRequestPrivate::DeleteAnalysisSchemeRequestPrivate(
    const CloudSearchRequest::Action action, DeleteAnalysisSchemeRequest * const q)
    : CloudSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAnalysisSchemeRequest
 * class' copy constructor.
 */
DeleteAnalysisSchemeRequestPrivate::DeleteAnalysisSchemeRequestPrivate(
    const DeleteAnalysisSchemeRequestPrivate &other, DeleteAnalysisSchemeRequest * const q)
    : CloudSearchRequestPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
