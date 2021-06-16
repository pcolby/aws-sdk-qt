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

#include "listqualificationtypesresponse.h"
#include "listqualificationtypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListQualificationTypesResponse
 * \brief The ListQualificationTypesResponse class provides an interace for MTurk ListQualificationTypes responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listQualificationTypes
 */

/*!
 * Constructs a ListQualificationTypesResponse object for \a reply to \a request, with parent \a parent.
 */
ListQualificationTypesResponse::ListQualificationTypesResponse(
        const ListQualificationTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListQualificationTypesResponsePrivate(this), parent)
{
    setRequest(new ListQualificationTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListQualificationTypesRequest * ListQualificationTypesResponse::request() const
{
    Q_D(const ListQualificationTypesResponse);
    return static_cast<const ListQualificationTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk ListQualificationTypes \a response.
 */
void ListQualificationTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListQualificationTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::ListQualificationTypesResponsePrivate
 * \brief The ListQualificationTypesResponsePrivate class provides private implementation for ListQualificationTypesResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListQualificationTypesResponsePrivate object with public implementation \a q.
 */
ListQualificationTypesResponsePrivate::ListQualificationTypesResponsePrivate(
    ListQualificationTypesResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk ListQualificationTypes response element from \a xml.
 */
void ListQualificationTypesResponsePrivate::parseListQualificationTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListQualificationTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
