// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECOVERYGROUPRESPONSE_P_H
#define QTAWS_UPDATERECOVERYGROUPRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class UpdateRecoveryGroupResponse;

class UpdateRecoveryGroupResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit UpdateRecoveryGroupResponsePrivate(UpdateRecoveryGroupResponse * const q);

    void parseUpdateRecoveryGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRecoveryGroupResponse)
    Q_DISABLE_COPY(UpdateRecoveryGroupResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
