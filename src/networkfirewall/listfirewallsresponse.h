// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIREWALLSRESPONSE_H
#define QTAWS_LISTFIREWALLSRESPONSE_H

#include "networkfirewallresponse.h"
#include "listfirewallsrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class ListFirewallsResponsePrivate;

class QTAWSNETWORKFIREWALL_EXPORT ListFirewallsResponse : public NetworkFirewallResponse {
    Q_OBJECT

public:
    ListFirewallsResponse(const ListFirewallsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFirewallsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFirewallsResponse)
    Q_DISABLE_COPY(ListFirewallsResponse)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
