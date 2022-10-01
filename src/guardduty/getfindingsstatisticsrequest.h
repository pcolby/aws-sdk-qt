// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSSTATISTICSREQUEST_H
#define QTAWS_GETFINDINGSSTATISTICSREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetFindingsStatisticsRequestPrivate;

class QTAWSGUARDDUTY_EXPORT GetFindingsStatisticsRequest : public GuardDutyRequest {

public:
    GetFindingsStatisticsRequest(const GetFindingsStatisticsRequest &other);
    GetFindingsStatisticsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFindingsStatisticsRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
