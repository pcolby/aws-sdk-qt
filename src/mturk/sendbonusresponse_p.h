// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDBONUSRESPONSE_P_H
#define QTAWS_SENDBONUSRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class SendBonusResponse;

class SendBonusResponsePrivate : public MTurkResponsePrivate {

public:

    explicit SendBonusResponsePrivate(SendBonusResponse * const q);

    void parseSendBonusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendBonusResponse)
    Q_DISABLE_COPY(SendBonusResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
