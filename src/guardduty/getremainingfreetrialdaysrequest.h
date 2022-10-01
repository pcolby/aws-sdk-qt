// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREMAININGFREETRIALDAYSREQUEST_H
#define QTAWS_GETREMAININGFREETRIALDAYSREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetRemainingFreeTrialDaysRequestPrivate;

class QTAWSGUARDDUTY_EXPORT GetRemainingFreeTrialDaysRequest : public GuardDutyRequest {

public:
    GetRemainingFreeTrialDaysRequest(const GetRemainingFreeTrialDaysRequest &other);
    GetRemainingFreeTrialDaysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRemainingFreeTrialDaysRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
