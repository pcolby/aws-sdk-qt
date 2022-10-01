// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSACTIONRESPONSE_P_H
#define QTAWS_DESCRIBETRANSACTIONRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class DescribeTransactionResponse;

class DescribeTransactionResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit DescribeTransactionResponsePrivate(DescribeTransactionResponse * const q);

    void parseDescribeTransactionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTransactionResponse)
    Q_DISABLE_COPY(DescribeTransactionResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
