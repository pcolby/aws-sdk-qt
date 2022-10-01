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

#include "listtagsforresourcesresponse.h"
#include "listtagsforresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::ListTagsForResourcesResponse
 * \brief The ListTagsForResourcesResponse class provides an interace for Route53RecoveryReadiness ListTagsForResources responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::listTagsForResources
 */

/*!
 * Constructs a ListTagsForResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
ListTagsForResourcesResponse::ListTagsForResourcesResponse(
        const ListTagsForResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new ListTagsForResourcesResponsePrivate(this), parent)
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
 * Parses a successful Route53RecoveryReadiness ListTagsForResources \a response.
 */
void ListTagsForResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTagsForResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::ListTagsForResourcesResponsePrivate
 * \brief The ListTagsForResourcesResponsePrivate class provides private implementation for ListTagsForResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a ListTagsForResourcesResponsePrivate object with public implementation \a q.
 */
ListTagsForResourcesResponsePrivate::ListTagsForResourcesResponsePrivate(
    ListTagsForResourcesResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness ListTagsForResources response element from \a xml.
 */
void ListTagsForResourcesResponsePrivate::parseListTagsForResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsForResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
