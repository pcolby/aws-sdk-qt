// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatethemerequest.h"
#include "updatethemerequest_p.h"
#include "updatethemeresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateThemeRequest
 * \brief The UpdateThemeRequest class provides an interface for QuickSight UpdateTheme requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateTheme
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateThemeRequest::UpdateThemeRequest(const UpdateThemeRequest &other)
    : QuickSightRequest(new UpdateThemeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateThemeRequest object.
 */
UpdateThemeRequest::UpdateThemeRequest()
    : QuickSightRequest(new UpdateThemeRequestPrivate(QuickSightRequest::UpdateThemeAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateThemeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateThemeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateThemeRequest::response(QNetworkReply * const reply) const
{
    return new UpdateThemeResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::UpdateThemeRequestPrivate
 * \brief The UpdateThemeRequestPrivate class provides private implementation for UpdateThemeRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateThemeRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
UpdateThemeRequestPrivate::UpdateThemeRequestPrivate(
    const QuickSightRequest::Action action, UpdateThemeRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateThemeRequest
 * class' copy constructor.
 */
UpdateThemeRequestPrivate::UpdateThemeRequestPrivate(
    const UpdateThemeRequestPrivate &other, UpdateThemeRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
