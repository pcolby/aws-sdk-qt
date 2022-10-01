// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEMBERSRESPONSE_H
#define QTAWS_GETMEMBERSRESPONSE_H

#include "guarddutyresponse.h"
#include "getmembersrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetMembersResponsePrivate;

class QTAWSGUARDDUTY_EXPORT GetMembersResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    GetMembersResponse(const GetMembersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMembersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMembersResponse)
    Q_DISABLE_COPY(GetMembersResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
