/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeanalysisschemesrequest.h"
#include "describeanalysisschemesrequest_p.h"
#include "describeanalysisschemesresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DescribeAnalysisSchemesRequest
 * \brief The DescribeAnalysisSchemesRequest class provides an interface for CloudSearch DescribeAnalysisSchemes requests.
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
 * \sa CloudSearchClient::describeAnalysisSchemes
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAnalysisSchemesRequest::DescribeAnalysisSchemesRequest(const DescribeAnalysisSchemesRequest &other)
    : CloudSearchRequest(new DescribeAnalysisSchemesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAnalysisSchemesRequest object.
 */
DescribeAnalysisSchemesRequest::DescribeAnalysisSchemesRequest()
    : CloudSearchRequest(new DescribeAnalysisSchemesRequestPrivate(CloudSearchRequest::DescribeAnalysisSchemesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAnalysisSchemesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAnalysisSchemesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAnalysisSchemesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAnalysisSchemesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudSearch::DescribeAnalysisSchemesRequestPrivate
 * \brief The DescribeAnalysisSchemesRequestPrivate class provides private implementation for DescribeAnalysisSchemesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 *
 * Constructs a DescribeAnalysisSchemesRequestPrivate object for CloudSearch \a action with,
 * public implementation \a q.
 */
DescribeAnalysisSchemesRequestPrivate::DescribeAnalysisSchemesRequestPrivate(
    const CloudSearchRequest::Action action, DescribeAnalysisSchemesRequest * const q)
    : CloudSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAnalysisSchemesRequest
 * class' copy constructor.
 */
DescribeAnalysisSchemesRequestPrivate::DescribeAnalysisSchemesRequestPrivate(
    const DescribeAnalysisSchemesRequestPrivate &other, DescribeAnalysisSchemesRequest * const q)
    : CloudSearchRequestPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
