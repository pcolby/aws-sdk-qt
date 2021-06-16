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

#include "deleteanalysisrequest.h"
#include "deleteanalysisrequest_p.h"
#include "deleteanalysisresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteAnalysisRequest
 * \brief The DeleteAnalysisRequest class provides an interface for QuickSight DeleteAnalysis requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteAnalysis
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAnalysisRequest::DeleteAnalysisRequest(const DeleteAnalysisRequest &other)
    : QuickSightRequest(new DeleteAnalysisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAnalysisRequest object.
 */
DeleteAnalysisRequest::DeleteAnalysisRequest()
    : QuickSightRequest(new DeleteAnalysisRequestPrivate(QuickSightRequest::DeleteAnalysisAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAnalysisRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAnalysisResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAnalysisRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAnalysisResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DeleteAnalysisRequestPrivate
 * \brief The DeleteAnalysisRequestPrivate class provides private implementation for DeleteAnalysisRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteAnalysisRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DeleteAnalysisRequestPrivate::DeleteAnalysisRequestPrivate(
    const QuickSightRequest::Action action, DeleteAnalysisRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAnalysisRequest
 * class' copy constructor.
 */
DeleteAnalysisRequestPrivate::DeleteAnalysisRequestPrivate(
    const DeleteAnalysisRequestPrivate &other, DeleteAnalysisRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
