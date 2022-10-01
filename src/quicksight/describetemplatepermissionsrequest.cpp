// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
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
