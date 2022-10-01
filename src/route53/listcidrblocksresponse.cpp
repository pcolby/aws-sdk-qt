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

#include "listcidrblocksresponse.h"
#include "listcidrblocksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListCidrBlocksResponse
 * \brief The ListCidrBlocksResponse class provides an interace for Route53 ListCidrBlocks responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listCidrBlocks
 */

/*!
 * Constructs a ListCidrBlocksResponse object for \a reply to \a request, with parent \a parent.
 */
ListCidrBlocksResponse::ListCidrBlocksResponse(
        const ListCidrBlocksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListCidrBlocksResponsePrivate(this), parent)
{
    setRequest(new ListCidrBlocksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCidrBlocksRequest * ListCidrBlocksResponse::request() const
{
    Q_D(const ListCidrBlocksResponse);
    return static_cast<const ListCidrBlocksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ListCidrBlocks \a response.
 */
void ListCidrBlocksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCidrBlocksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ListCidrBlocksResponsePrivate
 * \brief The ListCidrBlocksResponsePrivate class provides private implementation for ListCidrBlocksResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListCidrBlocksResponsePrivate object with public implementation \a q.
 */
ListCidrBlocksResponsePrivate::ListCidrBlocksResponsePrivate(
    ListCidrBlocksResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ListCidrBlocks response element from \a xml.
 */
void ListCidrBlocksResponsePrivate::parseListCidrBlocksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCidrBlocksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
