// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeprojectrequest.h"
#include "describeprojectrequest_p.h"
#include "describeprojectresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DescribeProjectRequest
 * \brief The DescribeProjectRequest class provides an interface for DataBrew DescribeProject requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::describeProject
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeProjectRequest::DescribeProjectRequest(const DescribeProjectRequest &other)
    : DataBrewRequest(new DescribeProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeProjectRequest object.
 */
DescribeProjectRequest::DescribeProjectRequest()
    : DataBrewRequest(new DescribeProjectRequestPrivate(DataBrewRequest::DescribeProjectAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeProjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeProjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeProjectRequest::response(QNetworkReply * const reply) const
{
    return new DescribeProjectResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::DescribeProjectRequestPrivate
 * \brief The DescribeProjectRequestPrivate class provides private implementation for DescribeProjectRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DescribeProjectRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
DescribeProjectRequestPrivate::DescribeProjectRequestPrivate(
    const DataBrewRequest::Action action, DescribeProjectRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeProjectRequest
 * class' copy constructor.
 */
DescribeProjectRequestPrivate::DescribeProjectRequestPrivate(
    const DescribeProjectRequestPrivate &other, DescribeProjectRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
