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

#include "listassociatedstacksresponse.h"
#include "listassociatedstacksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::ListAssociatedStacksResponse
 * \brief The ListAssociatedStacksResponse class provides an interace for AppStream ListAssociatedStacks responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::listAssociatedStacks
 */

/*!
 * Constructs a ListAssociatedStacksResponse object for \a reply to \a request, with parent \a parent.
 */
ListAssociatedStacksResponse::ListAssociatedStacksResponse(
        const ListAssociatedStacksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new ListAssociatedStacksResponsePrivate(this), parent)
{
    setRequest(new ListAssociatedStacksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAssociatedStacksRequest * ListAssociatedStacksResponse::request() const
{
    Q_D(const ListAssociatedStacksResponse);
    return static_cast<const ListAssociatedStacksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream ListAssociatedStacks \a response.
 */
void ListAssociatedStacksResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListAssociatedStacksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::ListAssociatedStacksResponsePrivate
 * \brief The ListAssociatedStacksResponsePrivate class provides private implementation for ListAssociatedStacksResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a ListAssociatedStacksResponsePrivate object with public implementation \a q.
 */
ListAssociatedStacksResponsePrivate::ListAssociatedStacksResponsePrivate(
    ListAssociatedStacksResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream ListAssociatedStacks response element from \a xml.
 */
void ListAssociatedStacksResponsePrivate::parseListAssociatedStacksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssociatedStacksResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
