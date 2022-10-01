// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBNETCHANGEPROTECTIONRESPONSE_H
#define QTAWS_UPDATESUBNETCHANGEPROTECTIONRESPONSE_H

#include "networkfirewallresponse.h"
#include "updatesubnetchangeprotectionrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateSubnetChangeProtectionResponsePrivate;

class QTAWSNETWORKFIREWALL_EXPORT UpdateSubnetChangeProtectionResponse : public NetworkFirewallResponse {
    Q_OBJECT

public:
    UpdateSubnetChangeProtectionResponse(const UpdateSubnetChangeProtectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSubnetChangeProtectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSubnetChangeProtectionResponse)
    Q_DISABLE_COPY(UpdateSubnetChangeProtectionResponse)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
