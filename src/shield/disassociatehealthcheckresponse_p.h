// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEHEALTHCHECKRESPONSE_P_H
#define QTAWS_DISASSOCIATEHEALTHCHECKRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class DisassociateHealthCheckResponse;

class DisassociateHealthCheckResponsePrivate : public ShieldResponsePrivate {

public:

    explicit DisassociateHealthCheckResponsePrivate(DisassociateHealthCheckResponse * const q);

    void parseDisassociateHealthCheckResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateHealthCheckResponse)
    Q_DISABLE_COPY(DisassociateHealthCheckResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
