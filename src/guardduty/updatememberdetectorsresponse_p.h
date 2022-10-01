// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMEMBERDETECTORSRESPONSE_P_H
#define QTAWS_UPDATEMEMBERDETECTORSRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class UpdateMemberDetectorsResponse;

class UpdateMemberDetectorsResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit UpdateMemberDetectorsResponsePrivate(UpdateMemberDetectorsResponse * const q);

    void parseUpdateMemberDetectorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMemberDetectorsResponse)
    Q_DISABLE_COPY(UpdateMemberDetectorsResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
