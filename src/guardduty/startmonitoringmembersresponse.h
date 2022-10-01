// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMONITORINGMEMBERSRESPONSE_H
#define QTAWS_STARTMONITORINGMEMBERSRESPONSE_H

#include "guarddutyresponse.h"
#include "startmonitoringmembersrequest.h"

namespace QtAws {
namespace GuardDuty {

class StartMonitoringMembersResponsePrivate;

class QTAWSGUARDDUTY_EXPORT StartMonitoringMembersResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    StartMonitoringMembersResponse(const StartMonitoringMembersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartMonitoringMembersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMonitoringMembersResponse)
    Q_DISABLE_COPY(StartMonitoringMembersResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
