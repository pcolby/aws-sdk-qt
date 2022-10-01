// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateanalysisrequest.h"
#include "updateanalysisrequest_p.h"
#include "updateanalysisresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateAnalysisRequest
 * \brief The UpdateAnalysisRequest class provides an interface for QuickSight UpdateAnalysis requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateAnalysis
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAnalysisRequest::UpdateAnalysisRequest(const UpdateAnalysisRequest &other)
    : QuickSightRequest(new UpdateAnalysisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAnalysisRequest object.
 */
UpdateAnalysisRequest::UpdateAnalysisRequest()
    : QuickSightRequest(new UpdateAnalysisRequestPrivate(QuickSightRequest::UpdateAnalysisAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAnalysisRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAnalysisResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAnalysisRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAnalysisResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::UpdateAnalysisRequestPrivate
 * \brief The UpdateAnalysisRequestPrivate class provides private implementation for UpdateAnalysisRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateAnalysisRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
UpdateAnalysisRequestPrivate::UpdateAnalysisRequestPrivate(
    const QuickSightRequest::Action action, UpdateAnalysisRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAnalysisRequest
 * class' copy constructor.
 */
UpdateAnalysisRequestPrivate::UpdateAnalysisRequestPrivate(
    const UpdateAnalysisRequestPrivate &other, UpdateAnalysisRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
