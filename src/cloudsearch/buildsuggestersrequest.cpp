// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "buildsuggestersrequest.h"
#include "buildsuggestersrequest_p.h"
#include "buildsuggestersresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::BuildSuggestersRequest
 * \brief The BuildSuggestersRequest class provides an interface for CloudSearch BuildSuggesters requests.
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
 * \sa CloudSearchClient::buildSuggesters
 */

/*!
 * Constructs a copy of \a other.
 */
BuildSuggestersRequest::BuildSuggestersRequest(const BuildSuggestersRequest &other)
    : CloudSearchRequest(new BuildSuggestersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BuildSuggestersRequest object.
 */
BuildSuggestersRequest::BuildSuggestersRequest()
    : CloudSearchRequest(new BuildSuggestersRequestPrivate(CloudSearchRequest::BuildSuggestersAction, this))
{

}

/*!
 * \reimp
 */
bool BuildSuggestersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BuildSuggestersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BuildSuggestersRequest::response(QNetworkReply * const reply) const
{
    return new BuildSuggestersResponse(*this, reply);
}

/*!
 * \class QtAws::CloudSearch::BuildSuggestersRequestPrivate
 * \brief The BuildSuggestersRequestPrivate class provides private implementation for BuildSuggestersRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a BuildSuggestersRequestPrivate object for CloudSearch \a action,
 * with public implementation \a q.
 */
BuildSuggestersRequestPrivate::BuildSuggestersRequestPrivate(
    const CloudSearchRequest::Action action, BuildSuggestersRequest * const q)
    : CloudSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BuildSuggestersRequest
 * class' copy constructor.
 */
BuildSuggestersRequestPrivate::BuildSuggestersRequestPrivate(
    const BuildSuggestersRequestPrivate &other, BuildSuggestersRequest * const q)
    : CloudSearchRequestPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
