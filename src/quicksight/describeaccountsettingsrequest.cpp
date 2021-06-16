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

#include "describeaccountsettingsrequest.h"
#include "describeaccountsettingsrequest_p.h"
#include "describeaccountsettingsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeAccountSettingsRequest
 * \brief The DescribeAccountSettingsRequest class provides an interface for QuickSight DescribeAccountSettings requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeAccountSettings
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAccountSettingsRequest::DescribeAccountSettingsRequest(const DescribeAccountSettingsRequest &other)
    : QuickSightRequest(new DescribeAccountSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAccountSettingsRequest object.
 */
DescribeAccountSettingsRequest::DescribeAccountSettingsRequest()
    : QuickSightRequest(new DescribeAccountSettingsRequestPrivate(QuickSightRequest::DescribeAccountSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAccountSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAccountSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAccountSettingsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAccountSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeAccountSettingsRequestPrivate
 * \brief The DescribeAccountSettingsRequestPrivate class provides private implementation for DescribeAccountSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeAccountSettingsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeAccountSettingsRequestPrivate::DescribeAccountSettingsRequestPrivate(
    const QuickSightRequest::Action action, DescribeAccountSettingsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAccountSettingsRequest
 * class' copy constructor.
 */
DescribeAccountSettingsRequestPrivate::DescribeAccountSettingsRequestPrivate(
    const DescribeAccountSettingsRequestPrivate &other, DescribeAccountSettingsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
