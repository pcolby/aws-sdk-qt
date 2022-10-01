// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresourcesetsresponse.h"
#include "listresourcesetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::ListResourceSetsResponse
 * \brief The ListResourceSetsResponse class provides an interace for Route53RecoveryReadiness ListResourceSets responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::listResourceSets
 */

/*!
 * Constructs a ListResourceSetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListResourceSetsResponse::ListResourceSetsResponse(
        const ListResourceSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new ListResourceSetsResponsePrivate(this), parent)
{
    setRequest(new ListResourceSetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListResourceSetsRequest * ListResourceSetsResponse::request() const
{
    Q_D(const ListResourceSetsResponse);
    return static_cast<const ListResourceSetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness ListResourceSets \a response.
 */
void ListResourceSetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListResourceSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::ListResourceSetsResponsePrivate
 * \brief The ListResourceSetsResponsePrivate class provides private implementation for ListResourceSetsResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a ListResourceSetsResponsePrivate object with public implementation \a q.
 */
ListResourceSetsResponsePrivate::ListResourceSetsResponsePrivate(
    ListResourceSetsResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness ListResourceSets response element from \a xml.
 */
void ListResourceSetsResponsePrivate::parseListResourceSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourceSetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
