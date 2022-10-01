// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECEIPTRULERESPONSE_P_H
#define QTAWS_DELETERECEIPTRULERESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class DeleteReceiptRuleResponse;

class DeleteReceiptRuleResponsePrivate : public SesResponsePrivate {

public:

    explicit DeleteReceiptRuleResponsePrivate(DeleteReceiptRuleResponse * const q);

    void parseDeleteReceiptRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteReceiptRuleResponse)
    Q_DISABLE_COPY(DeleteReceiptRuleResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
