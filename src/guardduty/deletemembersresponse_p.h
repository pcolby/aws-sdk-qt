// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEMBERSRESPONSE_P_H
#define QTAWS_DELETEMEMBERSRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class DeleteMembersResponse;

class DeleteMembersResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit DeleteMembersResponsePrivate(DeleteMembersResponse * const q);

    void parseDeleteMembersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMembersResponse)
    Q_DISABLE_COPY(DeleteMembersResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
