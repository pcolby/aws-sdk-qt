// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateprojectrequest.h"
#include "updateprojectrequest_p.h"
#include "updateprojectresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::UpdateProjectRequest
 * \brief The UpdateProjectRequest class provides an interface for DataBrew UpdateProject requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::updateProject
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateProjectRequest::UpdateProjectRequest(const UpdateProjectRequest &other)
    : DataBrewRequest(new UpdateProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateProjectRequest object.
 */
UpdateProjectRequest::UpdateProjectRequest()
    : DataBrewRequest(new UpdateProjectRequestPrivate(DataBrewRequest::UpdateProjectAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateProjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateProjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateProjectRequest::response(QNetworkReply * const reply) const
{
    return new UpdateProjectResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::UpdateProjectRequestPrivate
 * \brief The UpdateProjectRequestPrivate class provides private implementation for UpdateProjectRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a UpdateProjectRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
UpdateProjectRequestPrivate::UpdateProjectRequestPrivate(
    const DataBrewRequest::Action action, UpdateProjectRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateProjectRequest
 * class' copy constructor.
 */
UpdateProjectRequestPrivate::UpdateProjectRequestPrivate(
    const UpdateProjectRequestPrivate &other, UpdateProjectRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
