// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEMBERDETECTORSRESPONSE_P_H
#define QTAWS_GETMEMBERDETECTORSRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class GetMemberDetectorsResponse;

class GetMemberDetectorsResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit GetMemberDetectorsResponsePrivate(GetMemberDetectorsResponse * const q);

    void parseGetMemberDetectorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMemberDetectorsResponse)
    Q_DISABLE_COPY(GetMemberDetectorsResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
