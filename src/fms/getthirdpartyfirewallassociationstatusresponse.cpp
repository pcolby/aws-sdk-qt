// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getthirdpartyfirewallassociationstatusresponse.h"
#include "getthirdpartyfirewallassociationstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::GetThirdPartyFirewallAssociationStatusResponse
 * \brief The GetThirdPartyFirewallAssociationStatusResponse class provides an interace for Fms GetThirdPartyFirewallAssociationStatus responses.
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
 * \sa FmsClient::getThirdPartyFirewallAssociationStatus
 */

/*!
 * Constructs a GetThirdPartyFirewallAssociationStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetThirdPartyFirewallAssociationStatusResponse::GetThirdPartyFirewallAssociationStatusResponse(
        const GetThirdPartyFirewallAssociationStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FmsResponse(new GetThirdPartyFirewallAssociationStatusResponsePrivate(this), parent)
{
    setRequest(new GetThirdPartyFirewallAssociationStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetThirdPartyFirewallAssociationStatusRequest * GetThirdPartyFirewallAssociationStatusResponse::request() const
{
    Q_D(const GetThirdPartyFirewallAssociationStatusResponse);
    return static_cast<const GetThirdPartyFirewallAssociationStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fms GetThirdPartyFirewallAssociationStatus \a response.
 */
void GetThirdPartyFirewallAssociationStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetThirdPartyFirewallAssociationStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fms::GetThirdPartyFirewallAssociationStatusResponsePrivate
 * \brief The GetThirdPartyFirewallAssociationStatusResponsePrivate class provides private implementation for GetThirdPartyFirewallAssociationStatusResponse.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a GetThirdPartyFirewallAssociationStatusResponsePrivate object with public implementation \a q.
 */
GetThirdPartyFirewallAssociationStatusResponsePrivate::GetThirdPartyFirewallAssociationStatusResponsePrivate(
    GetThirdPartyFirewallAssociationStatusResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a Fms GetThirdPartyFirewallAssociationStatus response element from \a xml.
 */
void GetThirdPartyFirewallAssociationStatusResponsePrivate::parseGetThirdPartyFirewallAssociationStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetThirdPartyFirewallAssociationStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fms
} // namespace QtAws
