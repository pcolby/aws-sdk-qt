// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREADINESSCHECKRESPONSE_P_H
#define QTAWS_CREATEREADINESSCHECKRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class CreateReadinessCheckResponse;

class CreateReadinessCheckResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit CreateReadinessCheckResponsePrivate(CreateReadinessCheckResponse * const q);

    void parseCreateReadinessCheckResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateReadinessCheckResponse)
    Q_DISABLE_COPY(CreateReadinessCheckResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
