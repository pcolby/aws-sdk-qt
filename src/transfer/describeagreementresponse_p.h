// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGREEMENTRESPONSE_P_H
#define QTAWS_DESCRIBEAGREEMENTRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class DescribeAgreementResponse;

class DescribeAgreementResponsePrivate : public TransferResponsePrivate {

public:

    explicit DescribeAgreementResponsePrivate(DescribeAgreementResponse * const q);

    void parseDescribeAgreementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAgreementResponse)
    Q_DISABLE_COPY(DescribeAgreementResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
