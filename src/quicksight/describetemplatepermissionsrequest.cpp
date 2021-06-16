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

#include "describetemplatepermissionsrequest.h"
#include "describetemplatepermissionsrequest_p.h"
#include "describetemplatepermissionsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeTemplatePermissionsRequest
 * \brief The DescribeTemplatePermissionsRequest class provides an interface for QuickSight DescribeTemplatePermissions requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeTemplatePermissions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTemplatePermissionsRequest::DescribeTemplatePermissionsRequest(const DescribeTemplatePermissionsRequest &other)
    : QuickSightRequest(new DescribeTemplatePermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTemplatePermissionsRequest object.
 */
DescribeTemplatePermissionsRequest::DescribeTemplatePermissionsRequest()
    : QuickSightRequest(new DescribeTemplatePermissionsRequestPrivate(QuickSightRequest::DescribeTemplatePermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTemplatePermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTemplatePermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTemplatePermissionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTemplatePermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeTemplatePermissionsRequestPrivate
 * \brief The DescribeTemplatePermissionsRequestPrivate class provides private implementation for DescribeTemplatePermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeTemplatePermissionsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeTemplatePermissionsRequestPrivate::DescribeTemplatePermissionsRequestPrivate(
    const QuickSightRequest::Action action, DescribeTemplatePermissionsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTemplatePermissionsRequest
 * class' copy constructor.
 */
DescribeTemplatePermissionsRequestPrivate::DescribeTemplatePermissionsRequestPrivate(
    const DescribeTemplatePermissionsRequestPrivate &other, DescribeTemplatePermissionsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
