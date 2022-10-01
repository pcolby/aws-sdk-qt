// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECEIPTRULERESPONSE_P_H
#define QTAWS_UPDATERECEIPTRULERESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class UpdateReceiptRuleResponse;

class UpdateReceiptRuleResponsePrivate : public SesResponsePrivate {

public:

    explicit UpdateReceiptRuleResponsePrivate(UpdateReceiptRuleResponse * const q);

    void parseUpdateReceiptRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateReceiptRuleResponse)
    Q_DISABLE_COPY(UpdateReceiptRuleResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
