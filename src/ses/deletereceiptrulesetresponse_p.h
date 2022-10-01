// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECEIPTRULESETRESPONSE_P_H
#define QTAWS_DELETERECEIPTRULESETRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class DeleteReceiptRuleSetResponse;

class DeleteReceiptRuleSetResponsePrivate : public SesResponsePrivate {

public:

    explicit DeleteReceiptRuleSetResponsePrivate(DeleteReceiptRuleSetResponse * const q);

    void parseDeleteReceiptRuleSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteReceiptRuleSetResponse)
    Q_DISABLE_COPY(DeleteReceiptRuleSetResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
