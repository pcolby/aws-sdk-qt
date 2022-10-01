// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEHEALTHCHECKRESPONSE_P_H
#define QTAWS_ASSOCIATEHEALTHCHECKRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class AssociateHealthCheckResponse;

class AssociateHealthCheckResponsePrivate : public ShieldResponsePrivate {

public:

    explicit AssociateHealthCheckResponsePrivate(AssociateHealthCheckResponse * const q);

    void parseAssociateHealthCheckResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateHealthCheckResponse)
    Q_DISABLE_COPY(AssociateHealthCheckResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
