// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
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
    //Q_D(ListTagsForResourcesResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
