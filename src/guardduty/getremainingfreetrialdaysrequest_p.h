// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREMAININGFREETRIALDAYSREQUEST_P_H
#define QTAWS_GETREMAININGFREETRIALDAYSREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "getremainingfreetrialdaysrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetRemainingFreeTrialDaysRequest;

class GetRemainingFreeTrialDaysRequestPrivate : public GuardDutyRequestPrivate {

public:
    GetRemainingFreeTrialDaysRequestPrivate(const GuardDutyRequest::Action action,
                                   GetRemainingFreeTrialDaysRequest * const q);
    GetRemainingFreeTrialDaysRequestPrivate(const GetRemainingFreeTrialDaysRequestPrivate &other,
                                   GetRemainingFreeTrialDaysRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRemainingFreeTrialDaysRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
