// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEMBERDETECTORSRESPONSE_H
#define QTAWS_GETMEMBERDETECTORSRESPONSE_H

#include "guarddutyresponse.h"
#include "getmemberdetectorsrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetMemberDetectorsResponsePrivate;

class QTAWSGUARDDUTY_EXPORT GetMemberDetectorsResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    GetMemberDetectorsResponse(const GetMemberDetectorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMemberDetectorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMemberDetectorsResponse)
    Q_DISABLE_COPY(GetMemberDetectorsResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
