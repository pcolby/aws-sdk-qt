// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECLINEHANDSHAKERESPONSE_P_H
#define QTAWS_DECLINEHANDSHAKERESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class DeclineHandshakeResponse;

class DeclineHandshakeResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit DeclineHandshakeResponsePrivate(DeclineHandshakeResponse * const q);

    void parseDeclineHandshakeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeclineHandshakeResponse)
    Q_DISABLE_COPY(DeclineHandshakeResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
