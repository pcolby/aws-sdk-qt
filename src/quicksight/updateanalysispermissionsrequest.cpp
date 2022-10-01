// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
