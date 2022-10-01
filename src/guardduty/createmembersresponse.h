// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEMBERSRESPONSE_H
#define QTAWS_CREATEMEMBERSRESPONSE_H

#include "guarddutyresponse.h"
#include "createmembersrequest.h"

namespace QtAws {
namespace GuardDuty {

class CreateMembersResponsePrivate;

class QTAWSGUARDDUTY_EXPORT CreateMembersResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    CreateMembersResponse(const CreateMembersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMembersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMembersResponse)
    Q_DISABLE_COPY(CreateMembersResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
