// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REORDERRECEIPTRULESETRESPONSE_P_H
#define QTAWS_REORDERRECEIPTRULESETRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class ReorderReceiptRuleSetResponse;

class ReorderReceiptRuleSetResponsePrivate : public SesResponsePrivate {

public:

    explicit ReorderReceiptRuleSetResponsePrivate(ReorderReceiptRuleSetResponse * const q);

    void parseReorderReceiptRuleSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReorderReceiptRuleSetResponse)
    Q_DISABLE_COPY(ReorderReceiptRuleSetResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
