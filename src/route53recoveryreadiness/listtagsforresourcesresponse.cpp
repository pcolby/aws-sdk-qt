// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
