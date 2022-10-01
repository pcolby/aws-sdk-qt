// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREADINESSCHECKSTATUSRESPONSE_P_H
#define QTAWS_GETREADINESSCHECKSTATUSRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetReadinessCheckStatusResponse;

class GetReadinessCheckStatusResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit GetReadinessCheckStatusResponsePrivate(GetReadinessCheckStatusResponse * const q);

    void parseGetReadinessCheckStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetReadinessCheckStatusResponse)
    Q_DISABLE_COPY(GetReadinessCheckStatusResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
