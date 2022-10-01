// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESOURCEPOLICYREQUEST_H
#define QTAWS_PUTRESOURCEPOLICYREQUEST_H

#include "networkfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class PutResourcePolicyRequestPrivate;

class QTAWSNETWORKFIREWALL_EXPORT PutResourcePolicyRequest : public NetworkFirewallRequest {

public:
    PutResourcePolicyRequest(const PutResourcePolicyRequest &other);
    PutResourcePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutResourcePolicyRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
