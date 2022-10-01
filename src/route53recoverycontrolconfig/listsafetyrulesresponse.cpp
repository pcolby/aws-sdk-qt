// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsafetyrulesresponse.h"
#include "listsafetyrulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::ListSafetyRulesResponse
 * \brief The ListSafetyRulesResponse class provides an interace for Route53RecoveryControlConfig ListSafetyRules responses.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::listSafetyRules
 */

/*!
 * Constructs a ListSafetyRulesResponse object for \a reply to \a request, with parent \a parent.
 */
ListSafetyRulesResponse::ListSafetyRulesResponse(
        const ListSafetyRulesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryControlConfigResponse(new ListSafetyRulesResponsePrivate(this), parent)
{
    setRequest(new ListSafetyRulesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSafetyRulesRequest * ListSafetyRulesResponse::request() const
{
    Q_D(const ListSafetyRulesResponse);
    return static_cast<const ListSafetyRulesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryControlConfig ListSafetyRules \a response.
 */
void ListSafetyRulesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSafetyRulesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::ListSafetyRulesResponsePrivate
 * \brief The ListSafetyRulesResponsePrivate class provides private implementation for ListSafetyRulesResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a ListSafetyRulesResponsePrivate object with public implementation \a q.
 */
ListSafetyRulesResponsePrivate::ListSafetyRulesResponsePrivate(
    ListSafetyRulesResponse * const q) : Route53RecoveryControlConfigResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryControlConfig ListSafetyRules response element from \a xml.
 */
void ListSafetyRulesResponsePrivate::parseListSafetyRulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSafetyRulesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
