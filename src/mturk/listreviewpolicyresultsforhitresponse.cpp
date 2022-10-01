// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreviewpolicyresultsforhitresponse.h"
#include "listreviewpolicyresultsforhitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListReviewPolicyResultsForHITResponse
 * \brief The ListReviewPolicyResultsForHITResponse class provides an interace for MTurk ListReviewPolicyResultsForHIT responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listReviewPolicyResultsForHIT
 */

/*!
 * Constructs a ListReviewPolicyResultsForHITResponse object for \a reply to \a request, with parent \a parent.
 */
ListReviewPolicyResultsForHITResponse::ListReviewPolicyResultsForHITResponse(
        const ListReviewPolicyResultsForHITRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListReviewPolicyResultsForHITResponsePrivate(this), parent)
{
    setRequest(new ListReviewPolicyResultsForHITRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListReviewPolicyResultsForHITRequest * ListReviewPolicyResultsForHITResponse::request() const
{
    Q_D(const ListReviewPolicyResultsForHITResponse);
    return static_cast<const ListReviewPolicyResultsForHITRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk ListReviewPolicyResultsForHIT \a response.
 */
void ListReviewPolicyResultsForHITResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListReviewPolicyResultsForHITResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::ListReviewPolicyResultsForHITResponsePrivate
 * \brief The ListReviewPolicyResultsForHITResponsePrivate class provides private implementation for ListReviewPolicyResultsForHITResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListReviewPolicyResultsForHITResponsePrivate object with public implementation \a q.
 */
ListReviewPolicyResultsForHITResponsePrivate::ListReviewPolicyResultsForHITResponsePrivate(
    ListReviewPolicyResultsForHITResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk ListReviewPolicyResultsForHIT response element from \a xml.
 */
void ListReviewPolicyResultsForHITResponsePrivate::parseListReviewPolicyResultsForHITResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReviewPolicyResultsForHITResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
