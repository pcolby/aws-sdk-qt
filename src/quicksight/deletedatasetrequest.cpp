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

#include "deletedatasetrequest.h"
#include "deletedatasetrequest_p.h"
#include "deletedatasetresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteDataSetRequest
 * \brief The DeleteDataSetRequest class provides an interface for QuickSight DeleteDataSet requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteDataSet
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDataSetRequest::DeleteDataSetRequest(const DeleteDataSetRequest &other)
    : QuickSightRequest(new DeleteDataSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDataSetRequest object.
 */
DeleteDataSetRequest::DeleteDataSetRequest()
    : QuickSightRequest(new DeleteDataSetRequestPrivate(QuickSightRequest::DeleteDataSetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDataSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDataSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDataSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDataSetResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DeleteDataSetRequestPrivate
 * \brief The DeleteDataSetRequestPrivate class provides private implementation for DeleteDataSetRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteDataSetRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DeleteDataSetRequestPrivate::DeleteDataSetRequestPrivate(
    const QuickSightRequest::Action action, DeleteDataSetRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDataSetRequest
 * class' copy constructor.
 */
DeleteDataSetRequestPrivate::DeleteDataSetRequestPrivate(
    const DeleteDataSetRequestPrivate &other, DeleteDataSetRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
