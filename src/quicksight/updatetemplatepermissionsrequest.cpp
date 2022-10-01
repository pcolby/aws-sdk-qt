// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetemplatepermissionsrequest.h"
#include "updatetemplatepermissionsrequest_p.h"
#include "updatetemplatepermissionsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateTemplatePermissionsRequest
 * \brief The UpdateTemplatePermissionsRequest class provides an interface for QuickSight UpdateTemplatePermissions requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateTemplatePermissions
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTemplatePermissionsRequest::UpdateTemplatePermissionsRequest(const UpdateTemplatePermissionsRequest &other)
    : QuickSightRequest(new UpdateTemplatePermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTemplatePermissionsRequest object.
 */
UpdateTemplatePermissionsRequest::UpdateTemplatePermissionsRequest()
    : QuickSightRequest(new UpdateTemplatePermissionsRequestPrivate(QuickSightRequest::UpdateTemplatePermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTemplatePermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTemplatePermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTemplatePermissionsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTemplatePermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::UpdateTemplatePermissionsRequestPrivate
 * \brief The UpdateTemplatePermissionsRequestPrivate class provides private implementation for UpdateTemplatePermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateTemplatePermissionsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
UpdateTemplatePermissionsRequestPrivate::UpdateTemplatePermissionsRequestPrivate(
    const QuickSightRequest::Action action, UpdateTemplatePermissionsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTemplatePermissionsRequest
 * class' copy constructor.
 */
UpdateTemplatePermissionsRequestPrivate::UpdateTemplatePermissionsRequestPrivate(
    const UpdateTemplatePermissionsRequestPrivate &other, UpdateTemplatePermissionsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
