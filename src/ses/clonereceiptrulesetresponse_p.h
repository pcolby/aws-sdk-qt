// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLONERECEIPTRULESETRESPONSE_P_H
#define QTAWS_CLONERECEIPTRULESETRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class CloneReceiptRuleSetResponse;

class CloneReceiptRuleSetResponsePrivate : public SesResponsePrivate {

public:

    explicit CloneReceiptRuleSetResponsePrivate(CloneReceiptRuleSetResponse * const q);

    void parseCloneReceiptRuleSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CloneReceiptRuleSetResponse)
    Q_DISABLE_COPY(CloneReceiptRuleSetResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
