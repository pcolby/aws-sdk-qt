// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describethemealiasrequest.h"
#include "describethemealiasrequest_p.h"
#include "describethemealiasresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeThemeAliasRequest
 * \brief The DescribeThemeAliasRequest class provides an interface for QuickSight DescribeThemeAlias requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeThemeAlias
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeThemeAliasRequest::DescribeThemeAliasRequest(const DescribeThemeAliasRequest &other)
    : QuickSightRequest(new DescribeThemeAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeThemeAliasRequest object.
 */
DescribeThemeAliasRequest::DescribeThemeAliasRequest()
    : QuickSightRequest(new DescribeThemeAliasRequestPrivate(QuickSightRequest::DescribeThemeAliasAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeThemeAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeThemeAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeThemeAliasRequest::response(QNetworkReply * const reply) const
{
    return new DescribeThemeAliasResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeThemeAliasRequestPrivate
 * \brief The DescribeThemeAliasRequestPrivate class provides private implementation for DescribeThemeAliasRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeThemeAliasRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeThemeAliasRequestPrivate::DescribeThemeAliasRequestPrivate(
    const QuickSightRequest::Action action, DescribeThemeAliasRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeThemeAliasRequest
 * class' copy constructor.
 */
DescribeThemeAliasRequestPrivate::DescribeThemeAliasRequestPrivate(
    const DescribeThemeAliasRequestPrivate &other, DescribeThemeAliasRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
