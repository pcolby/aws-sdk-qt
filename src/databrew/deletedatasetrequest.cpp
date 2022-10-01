// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedatasetrequest.h"
#include "deletedatasetrequest_p.h"
#include "deletedatasetresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DeleteDatasetRequest
 * \brief The DeleteDatasetRequest class provides an interface for DataBrew DeleteDataset requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::deleteDataset
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDatasetRequest::DeleteDatasetRequest(const DeleteDatasetRequest &other)
    : DataBrewRequest(new DeleteDatasetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDatasetRequest object.
 */
DeleteDatasetRequest::DeleteDatasetRequest()
    : DataBrewRequest(new DeleteDatasetRequestPrivate(DataBrewRequest::DeleteDatasetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDatasetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDatasetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDatasetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDatasetResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::DeleteDatasetRequestPrivate
 * \brief The DeleteDatasetRequestPrivate class provides private implementation for DeleteDatasetRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DeleteDatasetRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
DeleteDatasetRequestPrivate::DeleteDatasetRequestPrivate(
    const DataBrewRequest::Action action, DeleteDatasetRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDatasetRequest
 * class' copy constructor.
 */
DeleteDatasetRequestPrivate::DeleteDatasetRequestPrivate(
    const DeleteDatasetRequestPrivate &other, DeleteDatasetRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
