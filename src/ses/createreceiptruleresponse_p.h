// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECEIPTRULERESPONSE_P_H
#define QTAWS_CREATERECEIPTRULERESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class CreateReceiptRuleResponse;

class CreateReceiptRuleResponsePrivate : public SesResponsePrivate {

public:

    explicit CreateReceiptRuleResponsePrivate(CreateReceiptRuleResponse * const q);

    void parseCreateReceiptRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateReceiptRuleResponse)
    Q_DISABLE_COPY(CreateReceiptRuleResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
