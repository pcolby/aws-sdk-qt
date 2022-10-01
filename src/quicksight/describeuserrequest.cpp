// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeuserrequest.h"
#include "describeuserrequest_p.h"
#include "describeuserresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeUserRequest
 * \brief The DescribeUserRequest class provides an interface for QuickSight DescribeUser requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeUser
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeUserRequest::DescribeUserRequest(const DescribeUserRequest &other)
    : QuickSightRequest(new DescribeUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeUserRequest object.
 */
DescribeUserRequest::DescribeUserRequest()
    : QuickSightRequest(new DescribeUserRequestPrivate(QuickSightRequest::DescribeUserAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeUserRequest::response(QNetworkReply * const reply) const
{
    return new DescribeUserResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeUserRequestPrivate
 * \brief The DescribeUserRequestPrivate class provides private implementation for DescribeUserRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeUserRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeUserRequestPrivate::DescribeUserRequestPrivate(
    const QuickSightRequest::Action action, DescribeUserRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeUserRequest
 * class' copy constructor.
 */
DescribeUserRequestPrivate::DescribeUserRequestPrivate(
    const DescribeUserRequestPrivate &other, DescribeUserRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
