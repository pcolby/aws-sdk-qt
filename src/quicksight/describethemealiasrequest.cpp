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
