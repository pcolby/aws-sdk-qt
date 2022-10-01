// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMONITORINGMEMBERSREQUEST_H
#define QTAWS_STARTMONITORINGMEMBERSREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class StartMonitoringMembersRequestPrivate;

class QTAWSGUARDDUTY_EXPORT StartMonitoringMembersRequest : public GuardDutyRequest {

public:
    StartMonitoringMembersRequest(const StartMonitoringMembersRequest &other);
    StartMonitoringMembersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMonitoringMembersRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
