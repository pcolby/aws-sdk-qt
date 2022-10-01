// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listthirdpartyfirewallfirewallpoliciesresponse.h"
#include "listthirdpartyfirewallfirewallpoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::ListThirdPartyFirewallFirewallPoliciesResponse
 * \brief The ListThirdPartyFirewallFirewallPoliciesResponse class provides an interace for Fms ListThirdPartyFirewallFirewallPolicies responses.
 *
 * \inmodule QtAwsFms
 *
 *  This is the <i>Firewall Manager API Reference</i>. This guide is for developers who need detailed information about the
 *  Firewall Manager API actions, data types, and errors. For detailed information about Firewall Manager features, see the
 *  <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">Firewall Manager Developer
 * 
 *  Guide</a>>
 * 
 *  Some API actions require explicit resource permissions. For information, see the developer guide topic <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-api-permissions-ref.html">Firewall Manager required
 *  permissions for API actions</a>.
 *
 * \sa FmsClient::listThirdPartyFirewallFirewallPolicies
 */

/*!
 * Constructs a ListThirdPartyFirewallFirewallPoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
ListThirdPartyFirewallFirewallPoliciesResponse::ListThirdPartyFirewallFirewallPoliciesResponse(
        const ListThirdPartyFirewallFirewallPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FmsResponse(new ListThirdPartyFirewallFirewallPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListThirdPartyFirewallFirewallPoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListThirdPartyFirewallFirewallPoliciesRequest * ListThirdPartyFirewallFirewallPoliciesResponse::request() const
{
    Q_D(const ListThirdPartyFirewallFirewallPoliciesResponse);
    return static_cast<const ListThirdPartyFirewallFirewallPoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fms ListThirdPartyFirewallFirewallPolicies \a response.
 */
void ListThirdPartyFirewallFirewallPoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListThirdPartyFirewallFirewallPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fms::ListThirdPartyFirewallFirewallPoliciesResponsePrivate
 * \brief The ListThirdPartyFirewallFirewallPoliciesResponsePrivate class provides private implementation for ListThirdPartyFirewallFirewallPoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a ListThirdPartyFirewallFirewallPoliciesResponsePrivate object with public implementation \a q.
 */
ListThirdPartyFirewallFirewallPoliciesResponsePrivate::ListThirdPartyFirewallFirewallPoliciesResponsePrivate(
    ListThirdPartyFirewallFirewallPoliciesResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a Fms ListThirdPartyFirewallFirewallPolicies response element from \a xml.
 */
void ListThirdPartyFirewallFirewallPoliciesResponsePrivate::parseListThirdPartyFirewallFirewallPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListThirdPartyFirewallFirewallPoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fms
} // namespace QtAws
