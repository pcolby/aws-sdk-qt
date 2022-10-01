// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NETWORKFIREWALLRESPONSE_P_H
#define QTAWS_NETWORKFIREWALLRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace NetworkFirewall {

class NetworkFirewallResponse;

class NetworkFirewallResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit NetworkFirewallResponsePrivate(NetworkFirewallResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(NetworkFirewallResponse)
    Q_DISABLE_COPY(NetworkFirewallResponsePrivate)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
