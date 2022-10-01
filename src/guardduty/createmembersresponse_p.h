// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEMBERSRESPONSE_P_H
#define QTAWS_CREATEMEMBERSRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class CreateMembersResponse;

class CreateMembersResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit CreateMembersResponsePrivate(CreateMembersResponse * const q);

    void parseCreateMembersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMembersResponse)
    Q_DISABLE_COPY(CreateMembersResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
