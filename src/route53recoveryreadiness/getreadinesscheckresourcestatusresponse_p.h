// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREADINESSCHECKRESOURCESTATUSRESPONSE_P_H
#define QTAWS_GETREADINESSCHECKRESOURCESTATUSRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetReadinessCheckResourceStatusResponse;

class GetReadinessCheckResourceStatusResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit GetReadinessCheckResourceStatusResponsePrivate(GetReadinessCheckResourceStatusResponse * const q);

    void parseGetReadinessCheckResourceStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetReadinessCheckResourceStatusResponse)
    Q_DISABLE_COPY(GetReadinessCheckResourceStatusResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
