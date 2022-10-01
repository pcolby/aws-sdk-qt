// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describescalingparametersrequest.h"
#include "describescalingparametersrequest_p.h"
#include "describescalingparametersresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DescribeScalingParametersRequest
 * \brief The DescribeScalingParametersRequest class provides an interface for CloudSearch DescribeScalingParameters requests.
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
 * \sa CloudSearchClient::describeScalingParameters
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeScalingParametersRequest::DescribeScalingParametersRequest(const DescribeScalingParametersRequest &other)
    : CloudSearchRequest(new DescribeScalingParametersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeScalingParametersRequest object.
 */
DescribeScalingParametersRequest::DescribeScalingParametersRequest()
    : CloudSearchRequest(new DescribeScalingParametersRequestPrivate(CloudSearchRequest::DescribeScalingParametersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeScalingParametersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeScalingParametersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeScalingParametersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeScalingParametersResponse(*this, reply);
}

/*!
 * \class QtAws::CloudSearch::DescribeScalingParametersRequestPrivate
 * \brief The DescribeScalingParametersRequestPrivate class provides private implementation for DescribeScalingParametersRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DescribeScalingParametersRequestPrivate object for CloudSearch \a action,
 * with public implementation \a q.
 */
DescribeScalingParametersRequestPrivate::DescribeScalingParametersRequestPrivate(
    const CloudSearchRequest::Action action, DescribeScalingParametersRequest * const q)
    : CloudSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeScalingParametersRequest
 * class' copy constructor.
 */
DescribeScalingParametersRequestPrivate::DescribeScalingParametersRequestPrivate(
    const DescribeScalingParametersRequestPrivate &other, DescribeScalingParametersRequest * const q)
    : CloudSearchRequestPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
