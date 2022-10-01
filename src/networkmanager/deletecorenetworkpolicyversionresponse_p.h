// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECORENETWORKPOLICYVERSIONRESPONSE_P_H
#define QTAWS_DELETECORENETWORKPOLICYVERSIONRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class DeleteCoreNetworkPolicyVersionResponse;

class DeleteCoreNetworkPolicyVersionResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit DeleteCoreNetworkPolicyVersionResponsePrivate(DeleteCoreNetworkPolicyVersionResponse * const q);

    void parseDeleteCoreNetworkPolicyVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCoreNetworkPolicyVersionResponse)
    Q_DISABLE_COPY(DeleteCoreNetworkPolicyVersionResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
