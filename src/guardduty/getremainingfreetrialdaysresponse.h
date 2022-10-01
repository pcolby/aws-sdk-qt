// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREMAININGFREETRIALDAYSRESPONSE_H
#define QTAWS_GETREMAININGFREETRIALDAYSRESPONSE_H

#include "guarddutyresponse.h"
#include "getremainingfreetrialdaysrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetRemainingFreeTrialDaysResponsePrivate;

class QTAWSGUARDDUTY_EXPORT GetRemainingFreeTrialDaysResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    GetRemainingFreeTrialDaysResponse(const GetRemainingFreeTrialDaysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRemainingFreeTrialDaysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRemainingFreeTrialDaysResponse)
    Q_DISABLE_COPY(GetRemainingFreeTrialDaysResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
