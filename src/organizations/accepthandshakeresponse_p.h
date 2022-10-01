// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTHANDSHAKERESPONSE_P_H
#define QTAWS_ACCEPTHANDSHAKERESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class AcceptHandshakeResponse;

class AcceptHandshakeResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit AcceptHandshakeResponsePrivate(AcceptHandshakeResponse * const q);

    void parseAcceptHandshakeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptHandshakeResponse)
    Q_DISABLE_COPY(AcceptHandshakeResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
