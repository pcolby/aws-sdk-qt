// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describethemerequest.h"
#include "describethemerequest_p.h"
#include "describethemeresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeThemeRequest
 * \brief The DescribeThemeRequest class provides an interface for QuickSight DescribeTheme requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeTheme
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeThemeRequest::DescribeThemeRequest(const DescribeThemeRequest &other)
    : QuickSightRequest(new DescribeThemeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeThemeRequest object.
 */
DescribeThemeRequest::DescribeThemeRequest()
    : QuickSightRequest(new DescribeThemeRequestPrivate(QuickSightRequest::DescribeThemeAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeThemeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeThemeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeThemeRequest::response(QNetworkReply * const reply) const
{
    return new DescribeThemeResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeThemeRequestPrivate
 * \brief The DescribeThemeRequestPrivate class provides private implementation for DescribeThemeRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeThemeRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeThemeRequestPrivate::DescribeThemeRequestPrivate(
    const QuickSightRequest::Action action, DescribeThemeRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeThemeRequest
 * class' copy constructor.
 */
DescribeThemeRequestPrivate::DescribeThemeRequestPrivate(
    const DescribeThemeRequestPrivate &other, DescribeThemeRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
