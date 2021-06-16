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

#include "describereportcreationrequest.h"
#include "describereportcreationrequest_p.h"
#include "describereportcreationresponse.h"
#include "resourcegroupstaggingapirequest_p.h"

namespace QtAws {
namespace ResourceGroupsTaggingAPI {

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::DescribeReportCreationRequest
 * \brief The DescribeReportCreationRequest class provides an interface for ResourceGroupsTaggingAPI DescribeReportCreation requests.
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 *
 *
 * \sa ResourceGroupsTaggingAPIClient::describeReportCreation
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReportCreationRequest::DescribeReportCreationRequest(const DescribeReportCreationRequest &other)
    : ResourceGroupsTaggingAPIRequest(new DescribeReportCreationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReportCreationRequest object.
 */
DescribeReportCreationRequest::DescribeReportCreationRequest()
    : ResourceGroupsTaggingAPIRequest(new DescribeReportCreationRequestPrivate(ResourceGroupsTaggingAPIRequest::DescribeReportCreationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReportCreationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeReportCreationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReportCreationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReportCreationResponse(*this, reply);
}

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::DescribeReportCreationRequestPrivate
 * \brief The DescribeReportCreationRequestPrivate class provides private implementation for DescribeReportCreationRequest.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 */

/*!
 * Constructs a DescribeReportCreationRequestPrivate object for ResourceGroupsTaggingAPI \a action,
 * with public implementation \a q.
 */
DescribeReportCreationRequestPrivate::DescribeReportCreationRequestPrivate(
    const ResourceGroupsTaggingAPIRequest::Action action, DescribeReportCreationRequest * const q)
    : ResourceGroupsTaggingAPIRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeReportCreationRequest
 * class' copy constructor.
 */
DescribeReportCreationRequestPrivate::DescribeReportCreationRequestPrivate(
    const DescribeReportCreationRequestPrivate &other, DescribeReportCreationRequest * const q)
    : ResourceGroupsTaggingAPIRequestPrivate(other, q)
{

}

} // namespace ResourceGroupsTaggingAPI
} // namespace QtAws
