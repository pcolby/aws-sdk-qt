/*
    Copyright 2013-2018 Paul Colby

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

#include "listreviewablehitsresponse.h"
#include "listreviewablehitsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListReviewableHITsResponse
 * \brief The ListReviewableHITsResponse class provides an interace for MTurk ListReviewableHITs responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listReviewableHITs
 */

/*!
 * Constructs a ListReviewableHITsResponse object for \a reply to \a request, with parent \a parent.
 */
ListReviewableHITsResponse::ListReviewableHITsResponse(
        const ListReviewableHITsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListReviewableHITsResponsePrivate(this), parent)
{
    setRequest(new ListReviewableHITsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListReviewableHITsRequest * ListReviewableHITsResponse::request() const
{
    Q_D(const ListReviewableHITsResponse);
    return static_cast<const ListReviewableHITsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk ListReviewableHITs \a response.
 */
void ListReviewableHITsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListReviewableHITsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::ListReviewableHITsResponsePrivate
 * \brief The ListReviewableHITsResponsePrivate class provides private implementation for ListReviewableHITsResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListReviewableHITsResponsePrivate object with public implementation \a q.
 */
ListReviewableHITsResponsePrivate::ListReviewableHITsResponsePrivate(
    ListReviewableHITsResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk ListReviewableHITs response element from \a xml.
 */
void ListReviewableHITsResponsePrivate::parseListReviewableHITsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReviewableHITsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
