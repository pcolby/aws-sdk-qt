// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "restoreanalysisrequest.h"
#include "restoreanalysisrequest_p.h"
#include "restoreanalysisresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::RestoreAnalysisRequest
 * \brief The RestoreAnalysisRequest class provides an interface for QuickSight RestoreAnalysis requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::restoreAnalysis
 */

/*!
 * Constructs a copy of \a other.
 */
RestoreAnalysisRequest::RestoreAnalysisRequest(const RestoreAnalysisRequest &other)
    : QuickSightRequest(new RestoreAnalysisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RestoreAnalysisRequest object.
 */
RestoreAnalysisRequest::RestoreAnalysisRequest()
    : QuickSightRequest(new RestoreAnalysisRequestPrivate(QuickSightRequest::RestoreAnalysisAction, this))
{

}

/*!
 * \reimp
 */
bool RestoreAnalysisRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RestoreAnalysisResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RestoreAnalysisRequest::response(QNetworkReply * const reply) const
{
    return new RestoreAnalysisResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::RestoreAnalysisRequestPrivate
 * \brief The RestoreAnalysisRequestPrivate class provides private implementation for RestoreAnalysisRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a RestoreAnalysisRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
RestoreAnalysisRequestPrivate::RestoreAnalysisRequestPrivate(
    const QuickSightRequest::Action action, RestoreAnalysisRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RestoreAnalysisRequest
 * class' copy constructor.
 */
RestoreAnalysisRequestPrivate::RestoreAnalysisRequestPrivate(
    const RestoreAnalysisRequestPrivate &other, RestoreAnalysisRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
