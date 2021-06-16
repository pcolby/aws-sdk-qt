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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
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
