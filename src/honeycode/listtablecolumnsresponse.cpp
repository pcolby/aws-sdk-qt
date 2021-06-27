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

#include "listtablecolumnsresponse.h"
#include "listtablecolumnsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::ListTableColumnsResponse
 * \brief The ListTableColumnsResponse class provides an interace for Honeycode ListTableColumns responses.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::listTableColumns
 */

/*!
 * Constructs a ListTableColumnsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTableColumnsResponse::ListTableColumnsResponse(
        const ListTableColumnsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HoneycodeResponse(new ListTableColumnsResponsePrivate(this), parent)
{
    setRequest(new ListTableColumnsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTableColumnsRequest * ListTableColumnsResponse::request() const
{
    return static_cast<const ListTableColumnsRequest *>(HoneycodeResponse::request());
}

/*!
 * \reimp
 * Parses a successful Honeycode ListTableColumns \a response.
 */
void ListTableColumnsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTableColumnsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Honeycode::ListTableColumnsResponsePrivate
 * \brief The ListTableColumnsResponsePrivate class provides private implementation for ListTableColumnsResponse.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a ListTableColumnsResponsePrivate object with public implementation \a q.
 */
ListTableColumnsResponsePrivate::ListTableColumnsResponsePrivate(
    ListTableColumnsResponse * const q) : HoneycodeResponsePrivate(q)
{

}

/*!
 * Parses a Honeycode ListTableColumns response element from \a xml.
 */
void ListTableColumnsResponsePrivate::parseListTableColumnsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTableColumnsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Honeycode
} // namespace QtAws
