// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECEIPTRULESETSRESPONSE_P_H
#define QTAWS_LISTRECEIPTRULESETSRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class ListReceiptRuleSetsResponse;

class ListReceiptRuleSetsResponsePrivate : public SesResponsePrivate {

public:

    explicit ListReceiptRuleSetsResponsePrivate(ListReceiptRuleSetsResponse * const q);

    void parseListReceiptRuleSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListReceiptRuleSetsResponse)
    Q_DISABLE_COPY(ListReceiptRuleSetsResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
