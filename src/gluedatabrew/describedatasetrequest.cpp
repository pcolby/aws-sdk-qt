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

#include "describedatasetrequest.h"
#include "describedatasetrequest_p.h"
#include "describedatasetresponse.h"
#include "gluedatabrewrequest_p.h"

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::DescribeDatasetRequest
 * \brief The DescribeDatasetRequest class provides an interface for GlueDataBrew DescribeDataset requests.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 *
 * \sa GlueDataBrewClient::describeDataset
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDatasetRequest::DescribeDatasetRequest(const DescribeDatasetRequest &other)
    : GlueDataBrewRequest(new DescribeDatasetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDatasetRequest object.
 */
DescribeDatasetRequest::DescribeDatasetRequest()
    : GlueDataBrewRequest(new DescribeDatasetRequestPrivate(GlueDataBrewRequest::DescribeDatasetAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDatasetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDatasetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDatasetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDatasetResponse(*this, reply);
}

/*!
 * \class QtAws::GlueDataBrew::DescribeDatasetRequestPrivate
 * \brief The DescribeDatasetRequestPrivate class provides private implementation for DescribeDatasetRequest.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a DescribeDatasetRequestPrivate object for GlueDataBrew \a action,
 * with public implementation \a q.
 */
DescribeDatasetRequestPrivate::DescribeDatasetRequestPrivate(
    const GlueDataBrewRequest::Action action, DescribeDatasetRequest * const q)
    : GlueDataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDatasetRequest
 * class' copy constructor.
 */
DescribeDatasetRequestPrivate::DescribeDatasetRequestPrivate(
    const DescribeDatasetRequestPrivate &other, DescribeDatasetRequest * const q)
    : GlueDataBrewRequestPrivate(other, q)
{

}

} // namespace GlueDataBrew
} // namespace QtAws
