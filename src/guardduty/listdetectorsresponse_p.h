// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDETECTORSRESPONSE_P_H
#define QTAWS_LISTDETECTORSRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class ListDetectorsResponse;

class ListDetectorsResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit ListDetectorsResponsePrivate(ListDetectorsResponse * const q);

    void parseListDetectorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDetectorsResponse)
    Q_DISABLE_COPY(ListDetectorsResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
