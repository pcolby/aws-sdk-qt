// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
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
