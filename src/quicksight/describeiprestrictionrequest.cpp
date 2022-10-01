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

#include "describeiprestrictionrequest.h"
#include "describeiprestrictionrequest_p.h"
#include "describeiprestrictionresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeIpRestrictionRequest
 * \brief The DescribeIpRestrictionRequest class provides an interface for QuickSight DescribeIpRestriction requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeIpRestriction
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeIpRestrictionRequest::DescribeIpRestrictionRequest(const DescribeIpRestrictionRequest &other)
    : QuickSightRequest(new DescribeIpRestrictionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeIpRestrictionRequest object.
 */
DescribeIpRestrictionRequest::DescribeIpRestrictionRequest()
    : QuickSightRequest(new DescribeIpRestrictionRequestPrivate(QuickSightRequest::DescribeIpRestrictionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeIpRestrictionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeIpRestrictionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeIpRestrictionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeIpRestrictionResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeIpRestrictionRequestPrivate
 * \brief The DescribeIpRestrictionRequestPrivate class provides private implementation for DescribeIpRestrictionRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeIpRestrictionRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeIpRestrictionRequestPrivate::DescribeIpRestrictionRequestPrivate(
    const QuickSightRequest::Action action, DescribeIpRestrictionRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeIpRestrictionRequest
 * class' copy constructor.
 */
DescribeIpRestrictionRequestPrivate::DescribeIpRestrictionRequestPrivate(
    const DescribeIpRestrictionRequestPrivate &other, DescribeIpRestrictionRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
