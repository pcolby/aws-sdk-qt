/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
