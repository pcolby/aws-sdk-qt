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

#include "listtablerowsresponse.h"
#include "listtablerowsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::ListTableRowsResponse
 * \brief The ListTableRowsResponse class provides an interace for Honeycode ListTableRows responses.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::listTableRows
 */

/*!
 * Constructs a ListTableRowsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTableRowsResponse::ListTableRowsResponse(
        const ListTableRowsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HoneycodeResponse(new ListTableRowsResponsePrivate(this), parent)
{
    setRequest(new ListTableRowsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTableRowsRequest * ListTableRowsResponse::request() const
{
    Q_D(const ListTableRowsResponse);
    return static_cast<const ListTableRowsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Honeycode ListTableRows \a response.
 */
void ListTableRowsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTableRowsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Honeycode::ListTableRowsResponsePrivate
 * \brief The ListTableRowsResponsePrivate class provides private implementation for ListTableRowsResponse.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a ListTableRowsResponsePrivate object with public implementation \a q.
 */
ListTableRowsResponsePrivate::ListTableRowsResponsePrivate(
    ListTableRowsResponse * const q) : HoneycodeResponsePrivate(q)
{

}

/*!
 * Parses a Honeycode ListTableRows response element from \a xml.
 */
void ListTableRowsResponsePrivate::parseListTableRowsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTableRowsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Honeycode
} // namespace QtAws
