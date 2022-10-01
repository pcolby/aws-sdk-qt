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

#include "listgroupsolderthanorderingidresponse.h"
#include "listgroupsolderthanorderingidresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListGroupsOlderThanOrderingIdResponse
 * \brief The ListGroupsOlderThanOrderingIdResponse class provides an interace for Kendra ListGroupsOlderThanOrderingId responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listGroupsOlderThanOrderingId
 */

/*!
 * Constructs a ListGroupsOlderThanOrderingIdResponse object for \a reply to \a request, with parent \a parent.
 */
ListGroupsOlderThanOrderingIdResponse::ListGroupsOlderThanOrderingIdResponse(
        const ListGroupsOlderThanOrderingIdRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new ListGroupsOlderThanOrderingIdResponsePrivate(this), parent)
{
    setRequest(new ListGroupsOlderThanOrderingIdRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGroupsOlderThanOrderingIdRequest * ListGroupsOlderThanOrderingIdResponse::request() const
{
    Q_D(const ListGroupsOlderThanOrderingIdResponse);
    return static_cast<const ListGroupsOlderThanOrderingIdRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra ListGroupsOlderThanOrderingId \a response.
 */
void ListGroupsOlderThanOrderingIdResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGroupsOlderThanOrderingIdResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::ListGroupsOlderThanOrderingIdResponsePrivate
 * \brief The ListGroupsOlderThanOrderingIdResponsePrivate class provides private implementation for ListGroupsOlderThanOrderingIdResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListGroupsOlderThanOrderingIdResponsePrivate object with public implementation \a q.
 */
ListGroupsOlderThanOrderingIdResponsePrivate::ListGroupsOlderThanOrderingIdResponsePrivate(
    ListGroupsOlderThanOrderingIdResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra ListGroupsOlderThanOrderingId response element from \a xml.
 */
void ListGroupsOlderThanOrderingIdResponsePrivate::parseListGroupsOlderThanOrderingIdResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGroupsOlderThanOrderingIdResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
