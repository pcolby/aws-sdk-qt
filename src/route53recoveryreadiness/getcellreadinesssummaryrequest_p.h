// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCELLREADINESSSUMMARYREQUEST_P_H
#define QTAWS_GETCELLREADINESSSUMMARYREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "getcellreadinesssummaryrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetCellReadinessSummaryRequest;

class GetCellReadinessSummaryRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    GetCellReadinessSummaryRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   GetCellReadinessSummaryRequest * const q);
    GetCellReadinessSummaryRequestPrivate(const GetCellReadinessSummaryRequestPrivate &other,
                                   GetCellReadinessSummaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCellReadinessSummaryRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
