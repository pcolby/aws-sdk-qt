// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEMACSECKEYRESPONSE_P_H
#define QTAWS_ASSOCIATEMACSECKEYRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class AssociateMacSecKeyResponse;

class AssociateMacSecKeyResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit AssociateMacSecKeyResponsePrivate(AssociateMacSecKeyResponse * const q);

    void parseAssociateMacSecKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateMacSecKeyResponse)
    Q_DISABLE_COPY(AssociateMacSecKeyResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
