// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECEIPTRULERESPONSE_P_H
#define QTAWS_DESCRIBERECEIPTRULERESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class DescribeReceiptRuleResponse;

class DescribeReceiptRuleResponsePrivate : public SesResponsePrivate {

public:

    explicit DescribeReceiptRuleResponsePrivate(DescribeReceiptRuleResponse * const q);

    void parseDescribeReceiptRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReceiptRuleResponse)
    Q_DISABLE_COPY(DescribeReceiptRuleResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
