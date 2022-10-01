// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSRESPONSE_H
#define QTAWS_GETFINDINGSRESPONSE_H

#include "guarddutyresponse.h"
#include "getfindingsrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetFindingsResponsePrivate;

class QTAWSGUARDDUTY_EXPORT GetFindingsResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    GetFindingsResponse(const GetFindingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFindingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFindingsResponse)
    Q_DISABLE_COPY(GetFindingsResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
