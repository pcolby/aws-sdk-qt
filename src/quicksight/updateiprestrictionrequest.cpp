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

#include "updateiprestrictionrequest.h"
#include "updateiprestrictionrequest_p.h"
#include "updateiprestrictionresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateIpRestrictionRequest
 * \brief The UpdateIpRestrictionRequest class provides an interface for QuickSight UpdateIpRestriction requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateIpRestriction
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateIpRestrictionRequest::UpdateIpRestrictionRequest(const UpdateIpRestrictionRequest &other)
    : QuickSightRequest(new UpdateIpRestrictionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateIpRestrictionRequest object.
 */
UpdateIpRestrictionRequest::UpdateIpRestrictionRequest()
    : QuickSightRequest(new UpdateIpRestrictionRequestPrivate(QuickSightRequest::UpdateIpRestrictionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateIpRestrictionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateIpRestrictionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateIpRestrictionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateIpRestrictionResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::UpdateIpRestrictionRequestPrivate
 * \brief The UpdateIpRestrictionRequestPrivate class provides private implementation for UpdateIpRestrictionRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateIpRestrictionRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
UpdateIpRestrictionRequestPrivate::UpdateIpRestrictionRequestPrivate(
    const QuickSightRequest::Action action, UpdateIpRestrictionRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateIpRestrictionRequest
 * class' copy constructor.
 */
UpdateIpRestrictionRequestPrivate::UpdateIpRestrictionRequestPrivate(
    const UpdateIpRestrictionRequestPrivate &other, UpdateIpRestrictionRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
