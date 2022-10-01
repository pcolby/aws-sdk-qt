// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELHANDSHAKERESPONSE_P_H
#define QTAWS_CANCELHANDSHAKERESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class CancelHandshakeResponse;

class CancelHandshakeResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit CancelHandshakeResponsePrivate(CancelHandshakeResponse * const q);

    void parseCancelHandshakeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelHandshakeResponse)
    Q_DISABLE_COPY(CancelHandshakeResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
