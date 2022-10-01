// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCORENETWORKPOLICYRESPONSE_P_H
#define QTAWS_PUTCORENETWORKPOLICYRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class PutCoreNetworkPolicyResponse;

class PutCoreNetworkPolicyResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit PutCoreNetworkPolicyResponsePrivate(PutCoreNetworkPolicyResponse * const q);

    void parsePutCoreNetworkPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutCoreNetworkPolicyResponse)
    Q_DISABLE_COPY(PutCoreNetworkPolicyResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
