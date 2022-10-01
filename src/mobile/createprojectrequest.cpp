// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createprojectrequest.h"
#include "createprojectrequest_p.h"
#include "createprojectresponse.h"
#include "mobilerequest_p.h"

namespace QtAws {
namespace Mobile {

/*!
 * \class QtAws::Mobile::CreateProjectRequest
 * \brief The CreateProjectRequest class provides an interface for Mobile CreateProject requests.
 *
 * \inmodule QtAwsMobile
 *
 *  AWS Mobile Service provides mobile app and website developers with capabilities required to configure AWS resources and
 *  bootstrap their developer desktop projects with the necessary SDKs, constants, tools and samples to make use of those
 *  resources.
 *
 * \sa MobileClient::createProject
 */

/*!
 * Constructs a copy of \a other.
 */
CreateProjectRequest::CreateProjectRequest(const CreateProjectRequest &other)
    : MobileRequest(new CreateProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateProjectRequest object.
 */
CreateProjectRequest::CreateProjectRequest()
    : MobileRequest(new CreateProjectRequestPrivate(MobileRequest::CreateProjectAction, this))
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
 * \class QtAws::Mobile::CreateProjectRequestPrivate
 * \brief The CreateProjectRequestPrivate class provides private implementation for CreateProjectRequest.
 * \internal
 *
 * \inmodule QtAwsMobile
 */

/*!
 * Constructs a CreateProjectRequestPrivate object for Mobile \a action,
 * with public implementation \a q.
 */
CreateProjectRequestPrivate::CreateProjectRequestPrivate(
    const MobileRequest::Action action, CreateProjectRequest * const q)
    : MobileRequestPrivate(action, q)
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
    : MobileRequestPrivate(other, q)
{

}

} // namespace Mobile
} // namespace QtAws
