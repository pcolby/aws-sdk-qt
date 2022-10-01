// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORECORENETWORKPOLICYVERSIONRESPONSE_P_H
#define QTAWS_RESTORECORENETWORKPOLICYVERSIONRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class RestoreCoreNetworkPolicyVersionResponse;

class RestoreCoreNetworkPolicyVersionResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit RestoreCoreNetworkPolicyVersionResponsePrivate(RestoreCoreNetworkPolicyVersionResponse * const q);

    void parseRestoreCoreNetworkPolicyVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreCoreNetworkPolicyVersionResponse)
    Q_DISABLE_COPY(RestoreCoreNetworkPolicyVersionResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
