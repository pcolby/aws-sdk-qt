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

#include "listpagereceiptsresponse.h"
#include "listpagereceiptsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::ListPageReceiptsResponse
 * \brief The ListPageReceiptsResponse class provides an interace for SSMContacts ListPageReceipts responses.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::listPageReceipts
 */

/*!
 * Constructs a ListPageReceiptsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPageReceiptsResponse::ListPageReceiptsResponse(
        const ListPageReceiptsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMContactsResponse(new ListPageReceiptsResponsePrivate(this), parent)
{
    setRequest(new ListPageReceiptsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPageReceiptsRequest * ListPageReceiptsResponse::request() const
{
    return static_cast<const ListPageReceiptsRequest *>(SSMContactsResponse::request());
}

/*!
 * \reimp
 * Parses a successful SSMContacts ListPageReceipts \a response.
 */
void ListPageReceiptsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPageReceiptsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSMContacts::ListPageReceiptsResponsePrivate
 * \brief The ListPageReceiptsResponsePrivate class provides private implementation for ListPageReceiptsResponse.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a ListPageReceiptsResponsePrivate object with public implementation \a q.
 */
ListPageReceiptsResponsePrivate::ListPageReceiptsResponsePrivate(
    ListPageReceiptsResponse * const q) : SSMContactsResponsePrivate(q)
{

}

/*!
 * Parses a SSMContacts ListPageReceipts response element from \a xml.
 */
void ListPageReceiptsResponsePrivate::parseListPageReceiptsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPageReceiptsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSMContacts
} // namespace QtAws
