// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeanalysisrequest.h"
#include "describeanalysisrequest_p.h"
#include "describeanalysisresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeAnalysisRequest
 * \brief The DescribeAnalysisRequest class provides an interface for QuickSight DescribeAnalysis requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeAnalysis
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAnalysisRequest::DescribeAnalysisRequest(const DescribeAnalysisRequest &other)
    : QuickSightRequest(new DescribeAnalysisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAnalysisRequest object.
 */
DescribeAnalysisRequest::DescribeAnalysisRequest()
    : QuickSightRequest(new DescribeAnalysisRequestPrivate(QuickSightRequest::DescribeAnalysisAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAnalysisRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAnalysisResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAnalysisRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAnalysisResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeAnalysisRequestPrivate
 * \brief The DescribeAnalysisRequestPrivate class provides private implementation for DescribeAnalysisRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeAnalysisRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeAnalysisRequestPrivate::DescribeAnalysisRequestPrivate(
    const QuickSightRequest::Action action, DescribeAnalysisRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAnalysisRequest
 * class' copy constructor.
 */
DescribeAnalysisRequestPrivate::DescribeAnalysisRequestPrivate(
    const DescribeAnalysisRequestPrivate &other, DescribeAnalysisRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
