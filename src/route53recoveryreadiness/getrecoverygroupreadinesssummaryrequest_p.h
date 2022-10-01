// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOVERYGROUPREADINESSSUMMARYREQUEST_P_H
#define QTAWS_GETRECOVERYGROUPREADINESSSUMMARYREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "getrecoverygroupreadinesssummaryrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetRecoveryGroupReadinessSummaryRequest;

class GetRecoveryGroupReadinessSummaryRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    GetRecoveryGroupReadinessSummaryRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   GetRecoveryGroupReadinessSummaryRequest * const q);
    GetRecoveryGroupReadinessSummaryRequestPrivate(const GetRecoveryGroupReadinessSummaryRequestPrivate &other,
                                   GetRecoveryGroupReadinessSummaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRecoveryGroupReadinessSummaryRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
