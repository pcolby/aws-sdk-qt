// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describejobrunrequest.h"
#include "describejobrunrequest_p.h"
#include "describejobrunresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DescribeJobRunRequest
 * \brief The DescribeJobRunRequest class provides an interface for DataBrew DescribeJobRun requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::describeJobRun
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeJobRunRequest::DescribeJobRunRequest(const DescribeJobRunRequest &other)
    : DataBrewRequest(new DescribeJobRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeJobRunRequest object.
 */
DescribeJobRunRequest::DescribeJobRunRequest()
    : DataBrewRequest(new DescribeJobRunRequestPrivate(DataBrewRequest::DescribeJobRunAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeJobRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeJobRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeJobRunRequest::response(QNetworkReply * const reply) const
{
    return new DescribeJobRunResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::DescribeJobRunRequestPrivate
 * \brief The DescribeJobRunRequestPrivate class provides private implementation for DescribeJobRunRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DescribeJobRunRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
DescribeJobRunRequestPrivate::DescribeJobRunRequestPrivate(
    const DataBrewRequest::Action action, DescribeJobRunRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeJobRunRequest
 * class' copy constructor.
 */
DescribeJobRunRequestPrivate::DescribeJobRunRequestPrivate(
    const DescribeJobRunRequestPrivate &other, DescribeJobRunRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
