/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listworkerswithqualificationtyperesponse.h"
#include "listworkerswithqualificationtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListWorkersWithQualificationTypeResponse
 * \brief The ListWorkersWithQualificationTypeResponse class provides an interace for MTurk ListWorkersWithQualificationType responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listWorkersWithQualificationType
 */

/*!
 * Constructs a ListWorkersWithQualificationTypeResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorkersWithQualificationTypeResponse::ListWorkersWithQualificationTypeResponse(
        const ListWorkersWithQualificationTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListWorkersWithQualificationTypeResponsePrivate(this), parent)
{
    setRequest(new ListWorkersWithQualificationTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorkersWithQualificationTypeRequest * ListWorkersWithQualificationTypeResponse::request() const
{
    Q_D(const ListWorkersWithQualificationTypeResponse);
    return static_cast<const ListWorkersWithQualificationTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk ListWorkersWithQualificationType \a response.
 */
void ListWorkersWithQualificationTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListWorkersWithQualificationTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::ListWorkersWithQualificationTypeResponsePrivate
 * \brief The ListWorkersWithQualificationTypeResponsePrivate class provides private implementation for ListWorkersWithQualificationTypeResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListWorkersWithQualificationTypeResponsePrivate object with public implementation \a q.
 */
ListWorkersWithQualificationTypeResponsePrivate::ListWorkersWithQualificationTypeResponsePrivate(
    ListWorkersWithQualificationTypeResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk ListWorkersWithQualificationType response element from \a xml.
 */
void ListWorkersWithQualificationTypeResponsePrivate::parseListWorkersWithQualificationTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorkersWithQualificationTypeResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace QtAws
