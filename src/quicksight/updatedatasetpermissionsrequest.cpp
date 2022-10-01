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

#include "updatedatasetpermissionsrequest.h"
#include "updatedatasetpermissionsrequest_p.h"
#include "updatedatasetpermissionsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateDataSetPermissionsRequest
 * \brief The UpdateDataSetPermissionsRequest class provides an interface for QuickSight UpdateDataSetPermissions requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateDataSetPermissions
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDataSetPermissionsRequest::UpdateDataSetPermissionsRequest(const UpdateDataSetPermissionsRequest &other)
    : QuickSightRequest(new UpdateDataSetPermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDataSetPermissionsRequest object.
 */
UpdateDataSetPermissionsRequest::UpdateDataSetPermissionsRequest()
    : QuickSightRequest(new UpdateDataSetPermissionsRequestPrivate(QuickSightRequest::UpdateDataSetPermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDataSetPermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDataSetPermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDataSetPermissionsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDataSetPermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::UpdateDataSetPermissionsRequestPrivate
 * \brief The UpdateDataSetPermissionsRequestPrivate class provides private implementation for UpdateDataSetPermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateDataSetPermissionsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
UpdateDataSetPermissionsRequestPrivate::UpdateDataSetPermissionsRequestPrivate(
    const QuickSightRequest::Action action, UpdateDataSetPermissionsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDataSetPermissionsRequest
 * class' copy constructor.
 */
UpdateDataSetPermissionsRequestPrivate::UpdateDataSetPermissionsRequestPrivate(
    const UpdateDataSetPermissionsRequestPrivate &other, UpdateDataSetPermissionsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
