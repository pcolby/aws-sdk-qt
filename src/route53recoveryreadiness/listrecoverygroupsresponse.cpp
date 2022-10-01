// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrecoverygroupsresponse.h"
#include "listrecoverygroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::ListRecoveryGroupsResponse
 * \brief The ListRecoveryGroupsResponse class provides an interace for Route53RecoveryReadiness ListRecoveryGroups responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::listRecoveryGroups
 */

/*!
 * Constructs a ListRecoveryGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListRecoveryGroupsResponse::ListRecoveryGroupsResponse(
        const ListRecoveryGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new ListRecoveryGroupsResponsePrivate(this), parent)
{
    setRequest(new ListRecoveryGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRecoveryGroupsRequest * ListRecoveryGroupsResponse::request() const
{
    Q_D(const ListRecoveryGroupsResponse);
    return static_cast<const ListRecoveryGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness ListRecoveryGroups \a response.
 */
void ListRecoveryGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRecoveryGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::ListRecoveryGroupsResponsePrivate
 * \brief The ListRecoveryGroupsResponsePrivate class provides private implementation for ListRecoveryGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a ListRecoveryGroupsResponsePrivate object with public implementation \a q.
 */
ListRecoveryGroupsResponsePrivate::ListRecoveryGroupsResponsePrivate(
    ListRecoveryGroupsResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness ListRecoveryGroups response element from \a xml.
 */
void ListRecoveryGroupsResponsePrivate::parseListRecoveryGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRecoveryGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
