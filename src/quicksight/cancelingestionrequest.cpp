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

#include "cancelingestionrequest.h"
#include "cancelingestionrequest_p.h"
#include "cancelingestionresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CancelIngestionRequest
 * \brief The CancelIngestionRequest class provides an interface for QuickSight CancelIngestion requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::cancelIngestion
 */

/*!
 * Constructs a copy of \a other.
 */
CancelIngestionRequest::CancelIngestionRequest(const CancelIngestionRequest &other)
    : QuickSightRequest(new CancelIngestionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelIngestionRequest object.
 */
CancelIngestionRequest::CancelIngestionRequest()
    : QuickSightRequest(new CancelIngestionRequestPrivate(QuickSightRequest::CancelIngestionAction, this))
{

}

/*!
 * \reimp
 */
bool CancelIngestionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelIngestionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelIngestionRequest::response(QNetworkReply * const reply) const
{
    return new CancelIngestionResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::CancelIngestionRequestPrivate
 * \brief The CancelIngestionRequestPrivate class provides private implementation for CancelIngestionRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CancelIngestionRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
CancelIngestionRequestPrivate::CancelIngestionRequestPrivate(
    const QuickSightRequest::Action action, CancelIngestionRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelIngestionRequest
 * class' copy constructor.
 */
CancelIngestionRequestPrivate::CancelIngestionRequestPrivate(
    const CancelIngestionRequestPrivate &other, CancelIngestionRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
