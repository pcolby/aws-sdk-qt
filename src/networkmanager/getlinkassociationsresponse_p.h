// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLINKASSOCIATIONSRESPONSE_P_H
#define QTAWS_GETLINKASSOCIATIONSRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class GetLinkAssociationsResponse;

class GetLinkAssociationsResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit GetLinkAssociationsResponsePrivate(GetLinkAssociationsResponse * const q);

    void parseGetLinkAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLinkAssociationsResponse)
    Q_DISABLE_COPY(GetLinkAssociationsResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
