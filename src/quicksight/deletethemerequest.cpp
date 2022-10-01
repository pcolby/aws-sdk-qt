// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletethemerequest.h"
#include "deletethemerequest_p.h"
#include "deletethemeresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteThemeRequest
 * \brief The DeleteThemeRequest class provides an interface for QuickSight DeleteTheme requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteTheme
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteThemeRequest::DeleteThemeRequest(const DeleteThemeRequest &other)
    : QuickSightRequest(new DeleteThemeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteThemeRequest object.
 */
DeleteThemeRequest::DeleteThemeRequest()
    : QuickSightRequest(new DeleteThemeRequestPrivate(QuickSightRequest::DeleteThemeAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteThemeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteThemeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteThemeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteThemeResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DeleteThemeRequestPrivate
 * \brief The DeleteThemeRequestPrivate class provides private implementation for DeleteThemeRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteThemeRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DeleteThemeRequestPrivate::DeleteThemeRequestPrivate(
    const QuickSightRequest::Action action, DeleteThemeRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteThemeRequest
 * class' copy constructor.
 */
DeleteThemeRequestPrivate::DeleteThemeRequestPrivate(
    const DeleteThemeRequestPrivate &other, DeleteThemeRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
