// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateprojectrequest.h"
#include "updateprojectrequest_p.h"
#include "updateprojectresponse.h"
#include "iot1clickprojectsrequest_p.h"

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::UpdateProjectRequest
 * \brief The UpdateProjectRequest class provides an interface for IoT1ClickProjects UpdateProject requests.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Projects API
 *
 * \sa IoT1ClickProjectsClient::updateProject
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateProjectRequest::UpdateProjectRequest(const UpdateProjectRequest &other)
    : IoT1ClickProjectsRequest(new UpdateProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateProjectRequest object.
 */
UpdateProjectRequest::UpdateProjectRequest()
    : IoT1ClickProjectsRequest(new UpdateProjectRequestPrivate(IoT1ClickProjectsRequest::UpdateProjectAction, this))
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
 * \class QtAws::IoT1ClickProjects::UpdateProjectRequestPrivate
 * \brief The UpdateProjectRequestPrivate class provides private implementation for UpdateProjectRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a UpdateProjectRequestPrivate object for IoT1ClickProjects \a action,
 * with public implementation \a q.
 */
UpdateProjectRequestPrivate::UpdateProjectRequestPrivate(
    const IoT1ClickProjectsRequest::Action action, UpdateProjectRequest * const q)
    : IoT1ClickProjectsRequestPrivate(action, q)
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
    : IoT1ClickProjectsRequestPrivate(other, q)
{

}

} // namespace IoT1ClickProjects
} // namespace QtAws
