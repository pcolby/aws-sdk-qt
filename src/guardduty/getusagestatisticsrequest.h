// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGESTATISTICSREQUEST_H
#define QTAWS_GETUSAGESTATISTICSREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetUsageStatisticsRequestPrivate;

class QTAWSGUARDDUTY_EXPORT GetUsageStatisticsRequest : public GuardDutyRequest {

public:
    GetUsageStatisticsRequest(const GetUsageStatisticsRequest &other);
    GetUsageStatisticsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUsageStatisticsRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
