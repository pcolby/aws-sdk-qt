// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatethirdpartyfirewallresponse.h"
#include "associatethirdpartyfirewallresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::AssociateThirdPartyFirewallResponse
 * \brief The AssociateThirdPartyFirewallResponse class provides an interace for Fms AssociateThirdPartyFirewall responses.
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
 * \sa FmsClient::associateThirdPartyFirewall
 */

/*!
 * Constructs a AssociateThirdPartyFirewallResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateThirdPartyFirewallResponse::AssociateThirdPartyFirewallResponse(
        const AssociateThirdPartyFirewallRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FmsResponse(new AssociateThirdPartyFirewallResponsePrivate(this), parent)
{
    setRequest(new AssociateThirdPartyFirewallRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateThirdPartyFirewallRequest * AssociateThirdPartyFirewallResponse::request() const
{
    Q_D(const AssociateThirdPartyFirewallResponse);
    return static_cast<const AssociateThirdPartyFirewallRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fms AssociateThirdPartyFirewall \a response.
 */
void AssociateThirdPartyFirewallResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateThirdPartyFirewallResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fms::AssociateThirdPartyFirewallResponsePrivate
 * \brief The AssociateThirdPartyFirewallResponsePrivate class provides private implementation for AssociateThirdPartyFirewallResponse.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a AssociateThirdPartyFirewallResponsePrivate object with public implementation \a q.
 */
AssociateThirdPartyFirewallResponsePrivate::AssociateThirdPartyFirewallResponsePrivate(
    AssociateThirdPartyFirewallResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a Fms AssociateThirdPartyFirewall response element from \a xml.
 */
void AssociateThirdPartyFirewallResponsePrivate::parseAssociateThirdPartyFirewallResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateThirdPartyFirewallResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fms
} // namespace QtAws
