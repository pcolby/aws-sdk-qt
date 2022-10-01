// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatescalingparametersrequest.h"
#include "updatescalingparametersrequest_p.h"
#include "updatescalingparametersresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::UpdateScalingParametersRequest
 * \brief The UpdateScalingParametersRequest class provides an interface for CloudSearch UpdateScalingParameters requests.
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
 * \sa CloudSearchClient::updateScalingParameters
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateScalingParametersRequest::UpdateScalingParametersRequest(const UpdateScalingParametersRequest &other)
    : CloudSearchRequest(new UpdateScalingParametersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateScalingParametersRequest object.
 */
UpdateScalingParametersRequest::UpdateScalingParametersRequest()
    : CloudSearchRequest(new UpdateScalingParametersRequestPrivate(CloudSearchRequest::UpdateScalingParametersAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateScalingParametersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateScalingParametersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateScalingParametersRequest::response(QNetworkReply * const reply) const
{
    return new UpdateScalingParametersResponse(*this, reply);
}

/*!
 * \class QtAws::CloudSearch::UpdateScalingParametersRequestPrivate
 * \brief The UpdateScalingParametersRequestPrivate class provides private implementation for UpdateScalingParametersRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a UpdateScalingParametersRequestPrivate object for CloudSearch \a action,
 * with public implementation \a q.
 */
UpdateScalingParametersRequestPrivate::UpdateScalingParametersRequestPrivate(
    const CloudSearchRequest::Action action, UpdateScalingParametersRequest * const q)
    : CloudSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateScalingParametersRequest
 * class' copy constructor.
 */
UpdateScalingParametersRequestPrivate::UpdateScalingParametersRequestPrivate(
    const UpdateScalingParametersRequestPrivate &other, UpdateScalingParametersRequest * const q)
    : CloudSearchRequestPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
