// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLDESCRIPTIONRESPONSE_H
#define QTAWS_UPDATEFIREWALLDESCRIPTIONRESPONSE_H

#include "networkfirewallresponse.h"
#include "updatefirewalldescriptionrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateFirewallDescriptionResponsePrivate;

class QTAWSNETWORKFIREWALL_EXPORT UpdateFirewallDescriptionResponse : public NetworkFirewallResponse {
    Q_OBJECT

public:
    UpdateFirewallDescriptionResponse(const UpdateFirewallDescriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFirewallDescriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFirewallDescriptionResponse)
    Q_DISABLE_COPY(UpdateFirewallDescriptionResponse)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
