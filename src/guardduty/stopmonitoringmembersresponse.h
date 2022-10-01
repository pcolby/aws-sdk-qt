// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMONITORINGMEMBERSRESPONSE_H
#define QTAWS_STOPMONITORINGMEMBERSRESPONSE_H

#include "guarddutyresponse.h"
#include "stopmonitoringmembersrequest.h"

namespace QtAws {
namespace GuardDuty {

class StopMonitoringMembersResponsePrivate;

class QTAWSGUARDDUTY_EXPORT StopMonitoringMembersResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    StopMonitoringMembersResponse(const StopMonitoringMembersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopMonitoringMembersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopMonitoringMembersResponse)
    Q_DISABLE_COPY(StopMonitoringMembersResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
