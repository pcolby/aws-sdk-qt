// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeanalysispermissionsrequest.h"
#include "describeanalysispermissionsrequest_p.h"
#include "describeanalysispermissionsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeAnalysisPermissionsRequest
 * \brief The DescribeAnalysisPermissionsRequest class provides an interface for QuickSight DescribeAnalysisPermissions requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeAnalysisPermissions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAnalysisPermissionsRequest::DescribeAnalysisPermissionsRequest(const DescribeAnalysisPermissionsRequest &other)
    : QuickSightRequest(new DescribeAnalysisPermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAnalysisPermissionsRequest object.
 */
DescribeAnalysisPermissionsRequest::DescribeAnalysisPermissionsRequest()
    : QuickSightRequest(new DescribeAnalysisPermissionsRequestPrivate(QuickSightRequest::DescribeAnalysisPermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAnalysisPermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAnalysisPermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAnalysisPermissionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAnalysisPermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeAnalysisPermissionsRequestPrivate
 * \brief The DescribeAnalysisPermissionsRequestPrivate class provides private implementation for DescribeAnalysisPermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeAnalysisPermissionsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeAnalysisPermissionsRequestPrivate::DescribeAnalysisPermissionsRequestPrivate(
    const QuickSightRequest::Action action, DescribeAnalysisPermissionsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAnalysisPermissionsRequest
 * class' copy constructor.
 */
DescribeAnalysisPermissionsRequestPrivate::DescribeAnalysisPermissionsRequestPrivate(
    const DescribeAnalysisPermissionsRequestPrivate &other, DescribeAnalysisPermissionsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
