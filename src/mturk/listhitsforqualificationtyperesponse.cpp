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

#include "listhitsforqualificationtyperesponse.h"
#include "listhitsforqualificationtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListHITsForQualificationTypeResponse
 * \brief The ListHITsForQualificationTypeResponse class provides an interace for MTurk ListHITsForQualificationType responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listHITsForQualificationType
 */

/*!
 * Constructs a ListHITsForQualificationTypeResponse object for \a reply to \a request, with parent \a parent.
 */
ListHITsForQualificationTypeResponse::ListHITsForQualificationTypeResponse(
        const ListHITsForQualificationTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListHITsForQualificationTypeResponsePrivate(this), parent)
{
    setRequest(new ListHITsForQualificationTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListHITsForQualificationTypeRequest * ListHITsForQualificationTypeResponse::request() const
{
    Q_D(const ListHITsForQualificationTypeResponse);
    return static_cast<const ListHITsForQualificationTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk ListHITsForQualificationType \a response.
 */
void ListHITsForQualificationTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListHITsForQualificationTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::ListHITsForQualificationTypeResponsePrivate
 * \brief The ListHITsForQualificationTypeResponsePrivate class provides private implementation for ListHITsForQualificationTypeResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListHITsForQualificationTypeResponsePrivate object with public implementation \a q.
 */
ListHITsForQualificationTypeResponsePrivate::ListHITsForQualificationTypeResponsePrivate(
    ListHITsForQualificationTypeResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk ListHITsForQualificationType response element from \a xml.
 */
void ListHITsForQualificationTypeResponsePrivate::parseListHITsForQualificationTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHITsForQualificationTypeResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace QtAws
