// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedatasetrequest.h"
#include "updatedatasetrequest_p.h"
#include "updatedatasetresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::UpdateDatasetRequest
 * \brief The UpdateDatasetRequest class provides an interface for DataBrew UpdateDataset requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::updateDataset
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDatasetRequest::UpdateDatasetRequest(const UpdateDatasetRequest &other)
    : DataBrewRequest(new UpdateDatasetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDatasetRequest object.
 */
UpdateDatasetRequest::UpdateDatasetRequest()
    : DataBrewRequest(new UpdateDatasetRequestPrivate(DataBrewRequest::UpdateDatasetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDatasetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDatasetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDatasetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDatasetResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::UpdateDatasetRequestPrivate
 * \brief The UpdateDatasetRequestPrivate class provides private implementation for UpdateDatasetRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a UpdateDatasetRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
UpdateDatasetRequestPrivate::UpdateDatasetRequestPrivate(
    const DataBrewRequest::Action action, UpdateDatasetRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDatasetRequest
 * class' copy constructor.
 */
UpdateDatasetRequestPrivate::UpdateDatasetRequestPrivate(
    const UpdateDatasetRequestPrivate &other, UpdateDatasetRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
