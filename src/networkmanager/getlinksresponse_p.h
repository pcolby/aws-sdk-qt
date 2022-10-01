// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLINKSRESPONSE_P_H
#define QTAWS_GETLINKSRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class GetLinksResponse;

class GetLinksResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit GetLinksResponsePrivate(GetLinksResponse * const q);

    void parseGetLinksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLinksResponse)
    Q_DISABLE_COPY(GetLinksResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
