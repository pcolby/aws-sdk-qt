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

#include "describefolderpermissionsrequest.h"
#include "describefolderpermissionsrequest_p.h"
#include "describefolderpermissionsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeFolderPermissionsRequest
 * \brief The DescribeFolderPermissionsRequest class provides an interface for QuickSight DescribeFolderPermissions requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeFolderPermissions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFolderPermissionsRequest::DescribeFolderPermissionsRequest(const DescribeFolderPermissionsRequest &other)
    : QuickSightRequest(new DescribeFolderPermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFolderPermissionsRequest object.
 */
DescribeFolderPermissionsRequest::DescribeFolderPermissionsRequest()
    : QuickSightRequest(new DescribeFolderPermissionsRequestPrivate(QuickSightRequest::DescribeFolderPermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFolderPermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFolderPermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFolderPermissionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFolderPermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeFolderPermissionsRequestPrivate
 * \brief The DescribeFolderPermissionsRequestPrivate class provides private implementation for DescribeFolderPermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeFolderPermissionsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeFolderPermissionsRequestPrivate::DescribeFolderPermissionsRequestPrivate(
    const QuickSightRequest::Action action, DescribeFolderPermissionsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFolderPermissionsRequest
 * class' copy constructor.
 */
DescribeFolderPermissionsRequestPrivate::DescribeFolderPermissionsRequestPrivate(
    const DescribeFolderPermissionsRequestPrivate &other, DescribeFolderPermissionsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
