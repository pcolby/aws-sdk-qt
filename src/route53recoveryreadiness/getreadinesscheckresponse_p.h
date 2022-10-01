// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREADINESSCHECKRESPONSE_P_H
#define QTAWS_GETREADINESSCHECKRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetReadinessCheckResponse;

class GetReadinessCheckResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit GetReadinessCheckResponsePrivate(GetReadinessCheckResponse * const q);

    void parseGetReadinessCheckResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetReadinessCheckResponse)
    Q_DISABLE_COPY(GetReadinessCheckResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
