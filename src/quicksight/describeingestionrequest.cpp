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

#include "describeingestionrequest.h"
#include "describeingestionrequest_p.h"
#include "describeingestionresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeIngestionRequest
 * \brief The DescribeIngestionRequest class provides an interface for QuickSight DescribeIngestion requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeIngestion
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeIngestionRequest::DescribeIngestionRequest(const DescribeIngestionRequest &other)
    : QuickSightRequest(new DescribeIngestionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeIngestionRequest object.
 */
DescribeIngestionRequest::DescribeIngestionRequest()
    : QuickSightRequest(new DescribeIngestionRequestPrivate(QuickSightRequest::DescribeIngestionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeIngestionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeIngestionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeIngestionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeIngestionResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DescribeIngestionRequestPrivate
 * \brief The DescribeIngestionRequestPrivate class provides private implementation for DescribeIngestionRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeIngestionRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DescribeIngestionRequestPrivate::DescribeIngestionRequestPrivate(
    const QuickSightRequest::Action action, DescribeIngestionRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeIngestionRequest
 * class' copy constructor.
 */
DescribeIngestionRequestPrivate::DescribeIngestionRequestPrivate(
    const DescribeIngestionRequestPrivate &other, DescribeIngestionRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
