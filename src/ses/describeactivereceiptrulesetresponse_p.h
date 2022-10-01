// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIVERECEIPTRULESETRESPONSE_P_H
#define QTAWS_DESCRIBEACTIVERECEIPTRULESETRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class DescribeActiveReceiptRuleSetResponse;

class DescribeActiveReceiptRuleSetResponsePrivate : public SesResponsePrivate {

public:

    explicit DescribeActiveReceiptRuleSetResponsePrivate(DescribeActiveReceiptRuleSetResponse * const q);

    void parseDescribeActiveReceiptRuleSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeActiveReceiptRuleSetResponse)
    Q_DISABLE_COPY(DescribeActiveReceiptRuleSetResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
