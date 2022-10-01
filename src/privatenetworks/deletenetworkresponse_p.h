// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKRESPONSE_P_H
#define QTAWS_DELETENETWORKRESPONSE_P_H

#include "privatenetworksresponse_p.h"

namespace QtAws {
namespace PrivateNetworks {

class DeleteNetworkResponse;

class DeleteNetworkResponsePrivate : public PrivateNetworksResponsePrivate {

public:

    explicit DeleteNetworkResponsePrivate(DeleteNetworkResponse * const q);

    void parseDeleteNetworkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkResponse)
    Q_DISABLE_COPY(DeleteNetworkResponsePrivate)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
