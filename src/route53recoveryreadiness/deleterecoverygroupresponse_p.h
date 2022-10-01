// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOVERYGROUPRESPONSE_P_H
#define QTAWS_DELETERECOVERYGROUPRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class DeleteRecoveryGroupResponse;

class DeleteRecoveryGroupResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit DeleteRecoveryGroupResponsePrivate(DeleteRecoveryGroupResponse * const q);

    void parseDeleteRecoveryGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRecoveryGroupResponse)
    Q_DISABLE_COPY(DeleteRecoveryGroupResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
