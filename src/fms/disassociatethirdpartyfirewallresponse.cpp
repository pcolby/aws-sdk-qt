// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatethirdpartyfirewallresponse.h"
#include "disassociatethirdpartyfirewallresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::DisassociateThirdPartyFirewallResponse
 * \brief The DisassociateThirdPartyFirewallResponse class provides an interace for Fms DisassociateThirdPartyFirewall responses.
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
 * \sa FmsClient::disassociateThirdPartyFirewall
 */

/*!
 * Constructs a DisassociateThirdPartyFirewallResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateThirdPartyFirewallResponse::DisassociateThirdPartyFirewallResponse(
        const DisassociateThirdPartyFirewallRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FmsResponse(new DisassociateThirdPartyFirewallResponsePrivate(this), parent)
{
    setRequest(new DisassociateThirdPartyFirewallRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateThirdPartyFirewallRequest * DisassociateThirdPartyFirewallResponse::request() const
{
    Q_D(const DisassociateThirdPartyFirewallResponse);
    return static_cast<const DisassociateThirdPartyFirewallRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fms DisassociateThirdPartyFirewall \a response.
 */
void DisassociateThirdPartyFirewallResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateThirdPartyFirewallResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fms::DisassociateThirdPartyFirewallResponsePrivate
 * \brief The DisassociateThirdPartyFirewallResponsePrivate class provides private implementation for DisassociateThirdPartyFirewallResponse.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a DisassociateThirdPartyFirewallResponsePrivate object with public implementation \a q.
 */
DisassociateThirdPartyFirewallResponsePrivate::DisassociateThirdPartyFirewallResponsePrivate(
    DisassociateThirdPartyFirewallResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a Fms DisassociateThirdPartyFirewall response element from \a xml.
 */
void DisassociateThirdPartyFirewallResponsePrivate::parseDisassociateThirdPartyFirewallResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateThirdPartyFirewallResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fms
} // namespace QtAws
