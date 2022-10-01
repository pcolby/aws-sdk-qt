// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createprojectrequest.h"
#include "createprojectrequest_p.h"
#include "createprojectresponse.h"
#include "iot1clickprojectsrequest_p.h"

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::CreateProjectRequest
 * \brief The CreateProjectRequest class provides an interface for IoT1ClickProjects CreateProject requests.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Projects API
 *
 * \sa IoT1ClickProjectsClient::createProject
 */

/*!
 * Constructs a copy of \a other.
 */
CreateProjectRequest::CreateProjectRequest(const CreateProjectRequest &other)
    : IoT1ClickProjectsRequest(new CreateProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateProjectRequest object.
 */
CreateProjectRequest::CreateProjectRequest()
    : IoT1ClickProjectsRequest(new CreateProjectRequestPrivate(IoT1ClickProjectsRequest::CreateProjectAction, this))
{

}

/*!
 * \reimp
 */
bool CreateProjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateProjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateProjectRequest::response(QNetworkReply * const reply) const
{
    return new CreateProjectResponse(*this, reply);
}

/*!
 * \class QtAws::IoT1ClickProjects::CreateProjectRequestPrivate
 * \brief The CreateProjectRequestPrivate class provides private implementation for CreateProjectRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a CreateProjectRequestPrivate object for IoT1ClickProjects \a action,
 * with public implementation \a q.
 */
CreateProjectRequestPrivate::CreateProjectRequestPrivate(
    const IoT1ClickProjectsRequest::Action action, CreateProjectRequest * const q)
    : IoT1ClickProjectsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateProjectRequest
 * class' copy constructor.
 */
CreateProjectRequestPrivate::CreateProjectRequestPrivate(
    const CreateProjectRequestPrivate &other, CreateProjectRequest * const q)
    : IoT1ClickProjectsRequestPrivate(other, q)
{

}

} // namespace IoT1ClickProjects
} // namespace QtAws
