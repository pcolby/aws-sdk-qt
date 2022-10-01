// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETRECEIPTRULEPOSITIONRESPONSE_P_H
#define QTAWS_SETRECEIPTRULEPOSITIONRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class SetReceiptRulePositionResponse;

class SetReceiptRulePositionResponsePrivate : public SesResponsePrivate {

public:

    explicit SetReceiptRulePositionResponsePrivate(SetReceiptRulePositionResponse * const q);

    void parseSetReceiptRulePositionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetReceiptRulePositionResponse)
    Q_DISABLE_COPY(SetReceiptRulePositionResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
