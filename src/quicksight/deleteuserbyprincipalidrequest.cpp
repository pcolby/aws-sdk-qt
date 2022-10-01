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

#include "deleteuserbyprincipalidrequest.h"
#include "deleteuserbyprincipalidrequest_p.h"
#include "deleteuserbyprincipalidresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteUserByPrincipalIdRequest
 * \brief The DeleteUserByPrincipalIdRequest class provides an interface for QuickSight DeleteUserByPrincipalId requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteUserByPrincipalId
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteUserByPrincipalIdRequest::DeleteUserByPrincipalIdRequest(const DeleteUserByPrincipalIdRequest &other)
    : QuickSightRequest(new DeleteUserByPrincipalIdRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteUserByPrincipalIdRequest object.
 */
DeleteUserByPrincipalIdRequest::DeleteUserByPrincipalIdRequest()
    : QuickSightRequest(new DeleteUserByPrincipalIdRequestPrivate(QuickSightRequest::DeleteUserByPrincipalIdAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUserByPrincipalIdRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteUserByPrincipalIdResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUserByPrincipalIdRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUserByPrincipalIdResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DeleteUserByPrincipalIdRequestPrivate
 * \brief The DeleteUserByPrincipalIdRequestPrivate class provides private implementation for DeleteUserByPrincipalIdRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteUserByPrincipalIdRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DeleteUserByPrincipalIdRequestPrivate::DeleteUserByPrincipalIdRequestPrivate(
    const QuickSightRequest::Action action, DeleteUserByPrincipalIdRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteUserByPrincipalIdRequest
 * class' copy constructor.
 */
DeleteUserByPrincipalIdRequestPrivate::DeleteUserByPrincipalIdRequestPrivate(
    const DeleteUserByPrincipalIdRequestPrivate &other, DeleteUserByPrincipalIdRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
