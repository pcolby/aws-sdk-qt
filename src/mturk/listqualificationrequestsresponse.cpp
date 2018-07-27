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

#include "listqualificationrequestsresponse.h"
#include "listqualificationrequestsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListQualificationRequestsResponse
 * \brief The ListQualificationRequestsResponse class provides an interace for MTurk ListQualificationRequests responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listQualificationRequests
 */

/*!
 * Constructs a ListQualificationRequestsResponse object for \a reply to \a request, with parent \a parent.
 */
ListQualificationRequestsResponse::ListQualificationRequestsResponse(
        const ListQualificationRequestsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListQualificationRequestsResponsePrivate(this), parent)
{
    setRequest(new ListQualificationRequestsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListQualificationRequestsRequest * ListQualificationRequestsResponse::request() const
{
    Q_D(const ListQualificationRequestsResponse);
    return static_cast<const ListQualificationRequestsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk ListQualificationRequests \a response.
 */
void ListQualificationRequestsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListQualificationRequestsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::ListQualificationRequestsResponsePrivate
 * \brief The ListQualificationRequestsResponsePrivate class provides private implementation for ListQualificationRequestsResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListQualificationRequestsResponsePrivate object with public implementation \a q.
 */
ListQualificationRequestsResponsePrivate::ListQualificationRequestsResponsePrivate(
    ListQualificationRequestsResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk ListQualificationRequests response element from \a xml.
 */
void ListQualificationRequestsResponsePrivate::parseListQualificationRequestsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListQualificationRequestsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
