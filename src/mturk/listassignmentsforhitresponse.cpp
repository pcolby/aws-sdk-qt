/*
    Copyright 2013-2020 Paul Colby

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

#include "listassignmentsforhitresponse.h"
#include "listassignmentsforhitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListAssignmentsForHITResponse
 * \brief The ListAssignmentsForHITResponse class provides an interace for MTurk ListAssignmentsForHIT responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listAssignmentsForHIT
 */

/*!
 * Constructs a ListAssignmentsForHITResponse object for \a reply to \a request, with parent \a parent.
 */
ListAssignmentsForHITResponse::ListAssignmentsForHITResponse(
        const ListAssignmentsForHITRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListAssignmentsForHITResponsePrivate(this), parent)
{
    setRequest(new ListAssignmentsForHITRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAssignmentsForHITRequest * ListAssignmentsForHITResponse::request() const
{
    Q_D(const ListAssignmentsForHITResponse);
    return static_cast<const ListAssignmentsForHITRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk ListAssignmentsForHIT \a response.
 */
void ListAssignmentsForHITResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAssignmentsForHITResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::ListAssignmentsForHITResponsePrivate
 * \brief The ListAssignmentsForHITResponsePrivate class provides private implementation for ListAssignmentsForHITResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListAssignmentsForHITResponsePrivate object with public implementation \a q.
 */
ListAssignmentsForHITResponsePrivate::ListAssignmentsForHITResponsePrivate(
    ListAssignmentsForHITResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk ListAssignmentsForHIT response element from \a xml.
 */
void ListAssignmentsForHITResponsePrivate::parseListAssignmentsForHITResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssignmentsForHITResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
