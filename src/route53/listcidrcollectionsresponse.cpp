// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcidrcollectionsresponse.h"
#include "listcidrcollectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListCidrCollectionsResponse
 * \brief The ListCidrCollectionsResponse class provides an interace for Route53 ListCidrCollections responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listCidrCollections
 */

/*!
 * Constructs a ListCidrCollectionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCidrCollectionsResponse::ListCidrCollectionsResponse(
        const ListCidrCollectionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListCidrCollectionsResponsePrivate(this), parent)
{
    setRequest(new ListCidrCollectionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCidrCollectionsRequest * ListCidrCollectionsResponse::request() const
{
    Q_D(const ListCidrCollectionsResponse);
    return static_cast<const ListCidrCollectionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ListCidrCollections \a response.
 */
void ListCidrCollectionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCidrCollectionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ListCidrCollectionsResponsePrivate
 * \brief The ListCidrCollectionsResponsePrivate class provides private implementation for ListCidrCollectionsResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListCidrCollectionsResponsePrivate object with public implementation \a q.
 */
ListCidrCollectionsResponsePrivate::ListCidrCollectionsResponsePrivate(
    ListCidrCollectionsResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ListCidrCollections response element from \a xml.
 */
void ListCidrCollectionsResponsePrivate::parseListCidrCollectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCidrCollectionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
