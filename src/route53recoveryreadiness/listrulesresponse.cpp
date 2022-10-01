// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrulesresponse.h"
#include "listrulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::ListRulesResponse
 * \brief The ListRulesResponse class provides an interace for Route53RecoveryReadiness ListRules responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::listRules
 */

/*!
 * Constructs a ListRulesResponse object for \a reply to \a request, with parent \a parent.
 */
ListRulesResponse::ListRulesResponse(
        const ListRulesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new ListRulesResponsePrivate(this), parent)
{
    setRequest(new ListRulesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRulesRequest * ListRulesResponse::request() const
{
    Q_D(const ListRulesResponse);
    return static_cast<const ListRulesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness ListRules \a response.
 */
void ListRulesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRulesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::ListRulesResponsePrivate
 * \brief The ListRulesResponsePrivate class provides private implementation for ListRulesResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a ListRulesResponsePrivate object with public implementation \a q.
 */
ListRulesResponsePrivate::ListRulesResponsePrivate(
    ListRulesResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness ListRules response element from \a xml.
 */
void ListRulesResponsePrivate::parseListRulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRulesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
