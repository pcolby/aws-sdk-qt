// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETACTIVERECEIPTRULESETRESPONSE_P_H
#define QTAWS_SETACTIVERECEIPTRULESETRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class SetActiveReceiptRuleSetResponse;

class SetActiveReceiptRuleSetResponsePrivate : public SesResponsePrivate {

public:

    explicit SetActiveReceiptRuleSetResponsePrivate(SetActiveReceiptRuleSetResponse * const q);

    void parseSetActiveReceiptRuleSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetActiveReceiptRuleSetResponse)
    Q_DISABLE_COPY(SetActiveReceiptRuleSetResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
