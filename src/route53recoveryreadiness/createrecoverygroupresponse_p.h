// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECOVERYGROUPRESPONSE_P_H
#define QTAWS_CREATERECOVERYGROUPRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class CreateRecoveryGroupResponse;

class CreateRecoveryGroupResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit CreateRecoveryGroupResponsePrivate(CreateRecoveryGroupResponse * const q);

    void parseCreateRecoveryGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRecoveryGroupResponse)
    Q_DISABLE_COPY(CreateRecoveryGroupResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
