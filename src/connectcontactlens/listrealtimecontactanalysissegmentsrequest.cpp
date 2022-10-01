// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrealtimecontactanalysissegmentsrequest.h"
#include "listrealtimecontactanalysissegmentsrequest_p.h"
#include "listrealtimecontactanalysissegmentsresponse.h"
#include "connectcontactlensrequest_p.h"

namespace QtAws {
namespace ConnectContactLens {

/*!
 * \class QtAws::ConnectContactLens::ListRealtimeContactAnalysisSegmentsRequest
 * \brief The ListRealtimeContactAnalysisSegmentsRequest class provides an interface for ConnectContactLens ListRealtimeContactAnalysisSegments requests.
 *
 * \inmodule QtAwsConnectContactLens
 *
 *  Contact Lens for Amazon Connect enables you to analyze conversations between customer and agents, by using speech
 *  transcription, natural language processing, and intelligent search capabilities. It performs sentiment analysis, detects
 *  issues, and enables you to automatically categorize
 * 
 *  contacts>
 * 
 *  Contact Lens for Amazon Connect provides both real-time and post-call analytics of customer-agent conversations. For
 *  more information, see <a href="https://docs.aws.amazon.com/connect/latest/adminguide/analyze-conversations.html">Analyze
 *  conversations using Contact Lens</a> in the <i>Amazon Connect Administrator Guide</i>.
 *
 * \sa ConnectContactLensClient::listRealtimeContactAnalysisSegments
 */

/*!
 * Constructs a copy of \a other.
 */
ListRealtimeContactAnalysisSegmentsRequest::ListRealtimeContactAnalysisSegmentsRequest(const ListRealtimeContactAnalysisSegmentsRequest &other)
    : ConnectContactLensRequest(new ListRealtimeContactAnalysisSegmentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRealtimeContactAnalysisSegmentsRequest object.
 */
ListRealtimeContactAnalysisSegmentsRequest::ListRealtimeContactAnalysisSegmentsRequest()
    : ConnectContactLensRequest(new ListRealtimeContactAnalysisSegmentsRequestPrivate(ConnectContactLensRequest::ListRealtimeContactAnalysisSegmentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListRealtimeContactAnalysisSegmentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRealtimeContactAnalysisSegmentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRealtimeContactAnalysisSegmentsRequest::response(QNetworkReply * const reply) const
{
    return new ListRealtimeContactAnalysisSegmentsResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectContactLens::ListRealtimeContactAnalysisSegmentsRequestPrivate
 * \brief The ListRealtimeContactAnalysisSegmentsRequestPrivate class provides private implementation for ListRealtimeContactAnalysisSegmentsRequest.
 * \internal
 *
 * \inmodule QtAwsConnectContactLens
 */

/*!
 * Constructs a ListRealtimeContactAnalysisSegmentsRequestPrivate object for ConnectContactLens \a action,
 * with public implementation \a q.
 */
ListRealtimeContactAnalysisSegmentsRequestPrivate::ListRealtimeContactAnalysisSegmentsRequestPrivate(
    const ConnectContactLensRequest::Action action, ListRealtimeContactAnalysisSegmentsRequest * const q)
    : ConnectContactLensRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRealtimeContactAnalysisSegmentsRequest
 * class' copy constructor.
 */
ListRealtimeContactAnalysisSegmentsRequestPrivate::ListRealtimeContactAnalysisSegmentsRequestPrivate(
    const ListRealtimeContactAnalysisSegmentsRequestPrivate &other, ListRealtimeContactAnalysisSegmentsRequest * const q)
    : ConnectContactLensRequestPrivate(other, q)
{

}

} // namespace ConnectContactLens
} // namespace QtAws
