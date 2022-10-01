// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletejobrequest.h"
#include "deletejobrequest_p.h"
#include "deletejobresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DeleteJobRequest
 * \brief The DeleteJobRequest class provides an interface for DataBrew DeleteJob requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::deleteJob
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteJobRequest::DeleteJobRequest(const DeleteJobRequest &other)
    : DataBrewRequest(new DeleteJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteJobRequest object.
 */
DeleteJobRequest::DeleteJobRequest()
    : DataBrewRequest(new DeleteJobRequestPrivate(DataBrewRequest::DeleteJobAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteJobRequest::response(QNetworkReply * const reply) const
{
    return new DeleteJobResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::DeleteJobRequestPrivate
 * \brief The DeleteJobRequestPrivate class provides private implementation for DeleteJobRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DeleteJobRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
DeleteJobRequestPrivate::DeleteJobRequestPrivate(
    const DataBrewRequest::Action action, DeleteJobRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteJobRequest
 * class' copy constructor.
 */
DeleteJobRequestPrivate::DeleteJobRequestPrivate(
    const DeleteJobRequestPrivate &other, DeleteJobRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
