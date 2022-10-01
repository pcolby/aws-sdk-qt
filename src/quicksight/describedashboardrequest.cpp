// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedashboardrequest.h"
#include "describedashboardrequest_p.h"
#include "describedashboardresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeDashboardRequest
 * \brief The DescribeDashboardRequest class provides an interface for QuickSight DescribeDashboard requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeDashboard
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDashboardRequest::DescribeDashboardRequest(const DescribeDashboardRequest &other)
    : QuickSightRequest(new DescribeDashboardRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDashboardRequest object.
 */
DescribeDashboardRequest::DescribeDashboardRequest()
    : QuickSightRequest(new DescribeDashboardRequestPrivate(QuickSightRequest::DescribeDashboardAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDashboardRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDashboardResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDashboardRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDashboardResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeDashboardRequestPrivate
 * \brief The DescribeDashboardRequestPrivate class provides private implementation for DescribeDashboardRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeDashboardRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeDashboardRequestPrivate::DescribeDashboardRequestPrivate(
    const QuickSightRequest::Action action, DescribeDashboardRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDashboardRequest
 * class' copy constructor.
 */
DescribeDashboardRequestPrivate::DescribeDashboardRequestPrivate(
    const DescribeDashboardRequestPrivate &other, DescribeDashboardRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
