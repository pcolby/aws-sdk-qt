// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GUARDDUTYRESPONSE_P_H
#define QTAWS_GUARDDUTYRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class GuardDutyResponse;

class GuardDutyResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit GuardDutyResponsePrivate(GuardDutyResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GuardDutyResponse)
    Q_DISABLE_COPY(GuardDutyResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
