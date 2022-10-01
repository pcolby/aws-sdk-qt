// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESAMPLEFINDINGSRESPONSE_P_H
#define QTAWS_CREATESAMPLEFINDINGSRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class CreateSampleFindingsResponse;

class CreateSampleFindingsResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit CreateSampleFindingsResponsePrivate(CreateSampleFindingsResponse * const q);

    void parseCreateSampleFindingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSampleFindingsResponse)
    Q_DISABLE_COPY(CreateSampleFindingsResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
