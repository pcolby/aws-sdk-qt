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

#include "listtagsforresourcesresponse.h"
#include "listtagsforresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListTagsForResourcesResponse
 * \brief The ListTagsForResourcesResponse class provides an interace for Route53 ListTagsForResources responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::listTagsForResources
 */

/*!
 * Constructs a ListTagsForResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
ListTagsForResourcesResponse::ListTagsForResourcesResponse(
        const ListTagsForResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListTagsForResourcesResponsePrivate(this), parent)
{
    setRequest(new ListTagsForResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTagsForResourcesRequest * ListTagsForResourcesResponse::request() const
{
    Q_D(const ListTagsForResourcesResponse);
    return static_cast<const ListTagsForResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ListTagsForResources \a response.
 */
void ListTagsForResourcesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListTagsForResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ListTagsForResourcesResponsePrivate
 * \brief The ListTagsForResourcesResponsePrivate class provides private implementation for ListTagsForResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListTagsForResourcesResponsePrivate object with public implementation \a q.
 */
ListTagsForResourcesResponsePrivate::ListTagsForResourcesResponsePrivate(
    ListTagsForResourcesResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ListTagsForResources response element from \a xml.
 */
void ListTagsForResourcesResponsePrivate::parseListTagsForResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsForResourcesResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
