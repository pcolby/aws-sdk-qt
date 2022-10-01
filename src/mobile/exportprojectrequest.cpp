// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exportprojectrequest.h"
#include "exportprojectrequest_p.h"
#include "exportprojectresponse.h"
#include "mobilerequest_p.h"

namespace QtAws {
namespace Mobile {

/*!
 * \class QtAws::Mobile::ExportProjectRequest
 * \brief The ExportProjectRequest class provides an interface for Mobile ExportProject requests.
 *
 * \inmodule QtAwsMobile
 *
 *  AWS Mobile Service provides mobile app and website developers with capabilities required to configure AWS resources and
 *  bootstrap their developer desktop projects with the necessary SDKs, constants, tools and samples to make use of those
 *  resources.
 *
 * \sa MobileClient::exportProject
 */

/*!
 * Constructs a copy of \a other.
 */
ExportProjectRequest::ExportProjectRequest(const ExportProjectRequest &other)
    : MobileRequest(new ExportProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExportProjectRequest object.
 */
ExportProjectRequest::ExportProjectRequest()
    : MobileRequest(new ExportProjectRequestPrivate(MobileRequest::ExportProjectAction, this))
{

}

/*!
 * \reimp
 */
bool ExportProjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExportProjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExportProjectRequest::response(QNetworkReply * const reply) const
{
    return new ExportProjectResponse(*this, reply);
}

/*!
 * \class QtAws::Mobile::ExportProjectRequestPrivate
 * \brief The ExportProjectRequestPrivate class provides private implementation for ExportProjectRequest.
 * \internal
 *
 * \inmodule QtAwsMobile
 */

/*!
 * Constructs a ExportProjectRequestPrivate object for Mobile \a action,
 * with public implementation \a q.
 */
ExportProjectRequestPrivate::ExportProjectRequestPrivate(
    const MobileRequest::Action action, ExportProjectRequest * const q)
    : MobileRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExportProjectRequest
 * class' copy constructor.
 */
ExportProjectRequestPrivate::ExportProjectRequestPrivate(
    const ExportProjectRequestPrivate &other, ExportProjectRequest * const q)
    : MobileRequestPrivate(other, q)
{

}

} // namespace Mobile
} // namespace QtAws
