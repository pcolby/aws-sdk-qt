// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELINKRESPONSE_P_H
#define QTAWS_CREATELINKRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class CreateLinkResponse;

class CreateLinkResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit CreateLinkResponsePrivate(CreateLinkResponse * const q);

    void parseCreateLinkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLinkResponse)
    Q_DISABLE_COPY(CreateLinkResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
