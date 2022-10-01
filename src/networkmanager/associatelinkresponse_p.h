// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATELINKRESPONSE_P_H
#define QTAWS_ASSOCIATELINKRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class AssociateLinkResponse;

class AssociateLinkResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit AssociateLinkResponsePrivate(AssociateLinkResponse * const q);

    void parseAssociateLinkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateLinkResponse)
    Q_DISABLE_COPY(AssociateLinkResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
