// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletethemealiasrequest.h"
#include "deletethemealiasrequest_p.h"
#include "deletethemealiasresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteThemeAliasRequest
 * \brief The DeleteThemeAliasRequest class provides an interface for QuickSight DeleteThemeAlias requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteThemeAlias
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteThemeAliasRequest::DeleteThemeAliasRequest(const DeleteThemeAliasRequest &other)
    : QuickSightRequest(new DeleteThemeAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteThemeAliasRequest object.
 */
DeleteThemeAliasRequest::DeleteThemeAliasRequest()
    : QuickSightRequest(new DeleteThemeAliasRequestPrivate(QuickSightRequest::DeleteThemeAliasAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteThemeAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteThemeAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteThemeAliasRequest::response(QNetworkReply * const reply) const
{
    return new DeleteThemeAliasResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DeleteThemeAliasRequestPrivate
 * \brief The DeleteThemeAliasRequestPrivate class provides private implementation for DeleteThemeAliasRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteThemeAliasRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DeleteThemeAliasRequestPrivate::DeleteThemeAliasRequestPrivate(
    const QuickSightRequest::Action action, DeleteThemeAliasRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteThemeAliasRequest
 * class' copy constructor.
 */
DeleteThemeAliasRequestPrivate::DeleteThemeAliasRequestPrivate(
    const DeleteThemeAliasRequestPrivate &other, DeleteThemeAliasRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
