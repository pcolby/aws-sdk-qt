// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMONITORINGMEMBERSREQUEST_H
#define QTAWS_STOPMONITORINGMEMBERSREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class StopMonitoringMembersRequestPrivate;

class QTAWSGUARDDUTY_EXPORT StopMonitoringMembersRequest : public GuardDutyRequest {

public:
    StopMonitoringMembersRequest(const StopMonitoringMembersRequest &other);
    StopMonitoringMembersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopMonitoringMembersRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
