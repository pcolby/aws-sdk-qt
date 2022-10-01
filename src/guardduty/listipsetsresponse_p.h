// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIPSETSRESPONSE_P_H
#define QTAWS_LISTIPSETSRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class ListIPSetsResponse;

class ListIPSetsResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit ListIPSetsResponsePrivate(ListIPSetsResponse * const q);

    void parseListIPSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListIPSetsResponse)
    Q_DISABLE_COPY(ListIPSetsResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
