// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILTERRESPONSE_P_H
#define QTAWS_DELETEFILTERRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class DeleteFilterResponse;

class DeleteFilterResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit DeleteFilterResponsePrivate(DeleteFilterResponse * const q);

    void parseDeleteFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFilterResponse)
    Q_DISABLE_COPY(DeleteFilterResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
