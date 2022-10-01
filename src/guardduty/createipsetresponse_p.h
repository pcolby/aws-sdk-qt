// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIPSETRESPONSE_P_H
#define QTAWS_CREATEIPSETRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class CreateIPSetResponse;

class CreateIPSetResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit CreateIPSetResponsePrivate(CreateIPSetResponse * const q);

    void parseCreateIPSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateIPSetResponse)
    Q_DISABLE_COPY(CreateIPSetResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
