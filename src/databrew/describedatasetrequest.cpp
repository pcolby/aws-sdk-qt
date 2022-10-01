// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedatasetrequest.h"
#include "describedatasetrequest_p.h"
#include "describedatasetresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DescribeDatasetRequest
 * \brief The DescribeDatasetRequest class provides an interface for DataBrew DescribeDataset requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::describeDataset
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDatasetRequest::DescribeDatasetRequest(const DescribeDatasetRequest &other)
    : DataBrewRequest(new DescribeDatasetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDatasetRequest object.
 */
DescribeDatasetRequest::DescribeDatasetRequest()
    : DataBrewRequest(new DescribeDatasetRequestPrivate(DataBrewRequest::DescribeDatasetAction, this))
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
 * \class QtAws::DataBrew::DescribeDatasetRequestPrivate
 * \brief The DescribeDatasetRequestPrivate class provides private implementation for DescribeDatasetRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DescribeDatasetRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
DescribeDatasetRequestPrivate::DescribeDatasetRequestPrivate(
    const DataBrewRequest::Action action, DescribeDatasetRequest * const q)
    : DataBrewRequestPrivate(action, q)
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
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
