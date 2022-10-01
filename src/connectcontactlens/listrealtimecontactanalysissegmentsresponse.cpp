// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrealtimecontactanalysissegmentsresponse.h"
#include "listrealtimecontactanalysissegmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectContactLens {

/*!
 * \class QtAws::ConnectContactLens::ListRealtimeContactAnalysisSegmentsResponse
 * \brief The ListRealtimeContactAnalysisSegmentsResponse class provides an interace for ConnectContactLens ListRealtimeContactAnalysisSegments responses.
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
 * Constructs a ListRealtimeContactAnalysisSegmentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListRealtimeContactAnalysisSegmentsResponse::ListRealtimeContactAnalysisSegmentsResponse(
        const ListRealtimeContactAnalysisSegmentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectContactLensResponse(new ListRealtimeContactAnalysisSegmentsResponsePrivate(this), parent)
{
    setRequest(new ListRealtimeContactAnalysisSegmentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRealtimeContactAnalysisSegmentsRequest * ListRealtimeContactAnalysisSegmentsResponse::request() const
{
    Q_D(const ListRealtimeContactAnalysisSegmentsResponse);
    return static_cast<const ListRealtimeContactAnalysisSegmentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectContactLens ListRealtimeContactAnalysisSegments \a response.
 */
void ListRealtimeContactAnalysisSegmentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRealtimeContactAnalysisSegmentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectContactLens::ListRealtimeContactAnalysisSegmentsResponsePrivate
 * \brief The ListRealtimeContactAnalysisSegmentsResponsePrivate class provides private implementation for ListRealtimeContactAnalysisSegmentsResponse.
 * \internal
 *
 * \inmodule QtAwsConnectContactLens
 */

/*!
 * Constructs a ListRealtimeContactAnalysisSegmentsResponsePrivate object with public implementation \a q.
 */
ListRealtimeContactAnalysisSegmentsResponsePrivate::ListRealtimeContactAnalysisSegmentsResponsePrivate(
    ListRealtimeContactAnalysisSegmentsResponse * const q) : ConnectContactLensResponsePrivate(q)
{

}

/*!
 * Parses a ConnectContactLens ListRealtimeContactAnalysisSegments response element from \a xml.
 */
void ListRealtimeContactAnalysisSegmentsResponsePrivate::parseListRealtimeContactAnalysisSegmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRealtimeContactAnalysisSegmentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectContactLens
} // namespace QtAws
