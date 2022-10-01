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

#include "updatedatasetrequest.h"
#include "updatedatasetrequest_p.h"
#include "updatedatasetresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateDataSetRequest
 * \brief The UpdateDataSetRequest class provides an interface for QuickSight UpdateDataSet requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateDataSet
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDataSetRequest::UpdateDataSetRequest(const UpdateDataSetRequest &other)
    : QuickSightRequest(new UpdateDataSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDataSetRequest object.
 */
UpdateDataSetRequest::UpdateDataSetRequest()
    : QuickSightRequest(new UpdateDataSetRequestPrivate(QuickSightRequest::UpdateDataSetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDataSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDataSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDataSetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDataSetResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::UpdateDataSetRequestPrivate
 * \brief The UpdateDataSetRequestPrivate class provides private implementation for UpdateDataSetRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateDataSetRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
UpdateDataSetRequestPrivate::UpdateDataSetRequestPrivate(
    const QuickSightRequest::Action action, UpdateDataSetRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDataSetRequest
 * class' copy constructor.
 */
UpdateDataSetRequestPrivate::UpdateDataSetRequestPrivate(
    const UpdateDataSetRequestPrivate &other, UpdateDataSetRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
