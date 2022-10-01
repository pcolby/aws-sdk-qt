// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATELINKRESPONSE_P_H
#define QTAWS_DISASSOCIATELINKRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class DisassociateLinkResponse;

class DisassociateLinkResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit DisassociateLinkResponsePrivate(DisassociateLinkResponse * const q);

    void parseDisassociateLinkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateLinkResponse)
    Q_DISABLE_COPY(DisassociateLinkResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
