// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHIRDPARTYFIREWALLFIREWALLPOLICIESRESPONSE_H
#define QTAWS_LISTTHIRDPARTYFIREWALLFIREWALLPOLICIESRESPONSE_H

#include "fmsresponse.h"
#include "listthirdpartyfirewallfirewallpoliciesrequest.h"

namespace QtAws {
namespace Fms {

class ListThirdPartyFirewallFirewallPoliciesResponsePrivate;

class QTAWSFMS_EXPORT ListThirdPartyFirewallFirewallPoliciesResponse : public FmsResponse {
    Q_OBJECT

public:
    ListThirdPartyFirewallFirewallPoliciesResponse(const ListThirdPartyFirewallFirewallPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListThirdPartyFirewallFirewallPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThirdPartyFirewallFirewallPoliciesResponse)
    Q_DISABLE_COPY(ListThirdPartyFirewallFirewallPoliciesResponse)

};

} // namespace Fms
} // namespace QtAws

#endif
