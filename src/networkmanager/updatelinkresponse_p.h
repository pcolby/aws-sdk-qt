// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELINKRESPONSE_P_H
#define QTAWS_UPDATELINKRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class UpdateLinkResponse;

class UpdateLinkResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit UpdateLinkResponsePrivate(UpdateLinkResponse * const q);

    void parseUpdateLinkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLinkResponse)
    Q_DISABLE_COPY(UpdateLinkResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
