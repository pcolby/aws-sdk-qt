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
    return static_cast<const ListReviewPolicyResultsForHITRequest *>(MTurkResponse::request());
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
