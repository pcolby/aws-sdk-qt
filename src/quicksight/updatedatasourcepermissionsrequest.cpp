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

#include "updatedatasourcepermissionsrequest.h"
#include "updatedatasourcepermissionsrequest_p.h"
#include "updatedatasourcepermissionsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateDataSourcePermissionsRequest
 * \brief The UpdateDataSourcePermissionsRequest class provides an interface for QuickSight UpdateDataSourcePermissions requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateDataSourcePermissions
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDataSourcePermissionsRequest::UpdateDataSourcePermissionsRequest(const UpdateDataSourcePermissionsRequest &other)
    : QuickSightRequest(new UpdateDataSourcePermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDataSourcePermissionsRequest object.
 */
UpdateDataSourcePermissionsRequest::UpdateDataSourcePermissionsRequest()
    : QuickSightRequest(new UpdateDataSourcePermissionsRequestPrivate(QuickSightRequest::UpdateDataSourcePermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDataSourcePermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDataSourcePermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDataSourcePermissionsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDataSourcePermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::UpdateDataSourcePermissionsRequestPrivate
 * \brief The UpdateDataSourcePermissionsRequestPrivate class provides private implementation for UpdateDataSourcePermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateDataSourcePermissionsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
UpdateDataSourcePermissionsRequestPrivate::UpdateDataSourcePermissionsRequestPrivate(
    const QuickSightRequest::Action action, UpdateDataSourcePermissionsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDataSourcePermissionsRequest
 * class' copy constructor.
 */
UpdateDataSourcePermissionsRequestPrivate::UpdateDataSourcePermissionsRequestPrivate(
    const UpdateDataSourcePermissionsRequestPrivate &other, UpdateDataSourcePermissionsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
