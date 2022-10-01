// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprojectrequest.h"
#include "deleteprojectrequest_p.h"
#include "deleteprojectresponse.h"
#include "mobilerequest_p.h"

namespace QtAws {
namespace Mobile {

/*!
 * \class QtAws::Mobile::DeleteProjectRequest
 * \brief The DeleteProjectRequest class provides an interface for Mobile DeleteProject requests.
 *
 * \inmodule QtAwsMobile
 *
 *  AWS Mobile Service provides mobile app and website developers with capabilities required to configure AWS resources and
 *  bootstrap their developer desktop projects with the necessary SDKs, constants, tools and samples to make use of those
 *  resources.
 *
 * \sa MobileClient::deleteProject
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteProjectRequest::DeleteProjectRequest(const DeleteProjectRequest &other)
    : MobileRequest(new DeleteProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteProjectRequest object.
 */
DeleteProjectRequest::DeleteProjectRequest()
    : MobileRequest(new DeleteProjectRequestPrivate(MobileRequest::DeleteProjectAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteProjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteProjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteProjectRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProjectResponse(*this, reply);
}

/*!
 * \class QtAws::Mobile::DeleteProjectRequestPrivate
 * \brief The DeleteProjectRequestPrivate class provides private implementation for DeleteProjectRequest.
 * \internal
 *
 * \inmodule QtAwsMobile
 */

/*!
 * Constructs a DeleteProjectRequestPrivate object for Mobile \a action,
 * with public implementation \a q.
 */
DeleteProjectRequestPrivate::DeleteProjectRequestPrivate(
    const MobileRequest::Action action, DeleteProjectRequest * const q)
    : MobileRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteProjectRequest
 * class' copy constructor.
 */
DeleteProjectRequestPrivate::DeleteProjectRequestPrivate(
    const DeleteProjectRequestPrivate &other, DeleteProjectRequest * const q)
    : MobileRequestPrivate(other, q)
{

}

} // namespace Mobile
} // namespace QtAws
