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

#include "updateanalysispermissionsrequest.h"
#include "updateanalysispermissionsrequest_p.h"
#include "updateanalysispermissionsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateAnalysisPermissionsRequest
 * \brief The UpdateAnalysisPermissionsRequest class provides an interface for QuickSight UpdateAnalysisPermissions requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateAnalysisPermissions
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAnalysisPermissionsRequest::UpdateAnalysisPermissionsRequest(const UpdateAnalysisPermissionsRequest &other)
    : QuickSightRequest(new UpdateAnalysisPermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAnalysisPermissionsRequest object.
 */
UpdateAnalysisPermissionsRequest::UpdateAnalysisPermissionsRequest()
    : QuickSightRequest(new UpdateAnalysisPermissionsRequestPrivate(QuickSightRequest::UpdateAnalysisPermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAnalysisPermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAnalysisPermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAnalysisPermissionsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAnalysisPermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::UpdateAnalysisPermissionsRequestPrivate
 * \brief The UpdateAnalysisPermissionsRequestPrivate class provides private implementation for UpdateAnalysisPermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateAnalysisPermissionsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
UpdateAnalysisPermissionsRequestPrivate::UpdateAnalysisPermissionsRequestPrivate(
    const QuickSightRequest::Action action, UpdateAnalysisPermissionsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAnalysisPermissionsRequest
 * class' copy constructor.
 */
UpdateAnalysisPermissionsRequestPrivate::UpdateAnalysisPermissionsRequestPrivate(
    const UpdateAnalysisPermissionsRequestPrivate &other, UpdateAnalysisPermissionsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
