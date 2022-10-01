// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECEIPTRULESETRESPONSE_P_H
#define QTAWS_CREATERECEIPTRULESETRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class CreateReceiptRuleSetResponse;

class CreateReceiptRuleSetResponsePrivate : public SesResponsePrivate {

public:

    explicit CreateReceiptRuleSetResponsePrivate(CreateReceiptRuleSetResponse * const q);

    void parseCreateReceiptRuleSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateReceiptRuleSetResponse)
    Q_DISABLE_COPY(CreateReceiptRuleSetResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
