// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIPSETRESPONSE_P_H
#define QTAWS_DELETEIPSETRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class DeleteIPSetResponse;

class DeleteIPSetResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit DeleteIPSetResponsePrivate(DeleteIPSetResponse * const q);

    void parseDeleteIPSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteIPSetResponse)
    Q_DISABLE_COPY(DeleteIPSetResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
