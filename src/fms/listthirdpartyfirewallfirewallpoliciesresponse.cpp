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
