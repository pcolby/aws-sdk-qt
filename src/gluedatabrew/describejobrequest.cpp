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

#include "describejobrequest.h"
#include "describejobrequest_p.h"
#include "describejobresponse.h"
#include "gluedatabrewrequest_p.h"

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::DescribeJobRequest
 * \brief The DescribeJobRequest class provides an interface for GlueDataBrew DescribeJob requests.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 *
 * \sa GlueDataBrewClient::describeJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeJobRequest::DescribeJobRequest(const DescribeJobRequest &other)
    : GlueDataBrewRequest(new DescribeJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeJobRequest object.
 */
DescribeJobRequest::DescribeJobRequest()
    : GlueDataBrewRequest(new DescribeJobRequestPrivate(GlueDataBrewRequest::DescribeJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeJobResponse(*this, reply);
}

/*!
 * \class QtAws::GlueDataBrew::DescribeJobRequestPrivate
 * \brief The DescribeJobRequestPrivate class provides private implementation for DescribeJobRequest.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a DescribeJobRequestPrivate object for GlueDataBrew \a action,
 * with public implementation \a q.
 */
DescribeJobRequestPrivate::DescribeJobRequestPrivate(
    const GlueDataBrewRequest::Action action, DescribeJobRequest * const q)
    : GlueDataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeJobRequest
 * class' copy constructor.
 */
DescribeJobRequestPrivate::DescribeJobRequestPrivate(
    const DescribeJobRequestPrivate &other, DescribeJobRequest * const q)
    : GlueDataBrewRequestPrivate(other, q)
{

}

} // namespace GlueDataBrew
} // namespace QtAws
