// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcrossaccountauthorizationsresponse.h"
#include "listcrossaccountauthorizationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::ListCrossAccountAuthorizationsResponse
 * \brief The ListCrossAccountAuthorizationsResponse class provides an interace for Route53RecoveryReadiness ListCrossAccountAuthorizations responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::listCrossAccountAuthorizations
 */

/*!
 * Constructs a ListCrossAccountAuthorizationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCrossAccountAuthorizationsResponse::ListCrossAccountAuthorizationsResponse(
        const ListCrossAccountAuthorizationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new ListCrossAccountAuthorizationsResponsePrivate(this), parent)
{
    setRequest(new ListCrossAccountAuthorizationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCrossAccountAuthorizationsRequest * ListCrossAccountAuthorizationsResponse::request() const
{
    Q_D(const ListCrossAccountAuthorizationsResponse);
    return static_cast<const ListCrossAccountAuthorizationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness ListCrossAccountAuthorizations \a response.
 */
void ListCrossAccountAuthorizationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCrossAccountAuthorizationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::ListCrossAccountAuthorizationsResponsePrivate
 * \brief The ListCrossAccountAuthorizationsResponsePrivate class provides private implementation for ListCrossAccountAuthorizationsResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a ListCrossAccountAuthorizationsResponsePrivate object with public implementation \a q.
 */
ListCrossAccountAuthorizationsResponsePrivate::ListCrossAccountAuthorizationsResponsePrivate(
    ListCrossAccountAuthorizationsResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness ListCrossAccountAuthorizations response element from \a xml.
 */
void ListCrossAccountAuthorizationsResponsePrivate::parseListCrossAccountAuthorizationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCrossAccountAuthorizationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
