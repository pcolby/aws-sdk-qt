// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGESTATISTICSRESPONSE_H
#define QTAWS_GETUSAGESTATISTICSRESPONSE_H

#include "guarddutyresponse.h"
#include "getusagestatisticsrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetUsageStatisticsResponsePrivate;

class QTAWSGUARDDUTY_EXPORT GetUsageStatisticsResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    GetUsageStatisticsResponse(const GetUsageStatisticsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUsageStatisticsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUsageStatisticsResponse)
    Q_DISABLE_COPY(GetUsageStatisticsResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
