// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHOSTKEYRESPONSE_P_H
#define QTAWS_DESCRIBEHOSTKEYRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class DescribeHostKeyResponse;

class DescribeHostKeyResponsePrivate : public TransferResponsePrivate {

public:

    explicit DescribeHostKeyResponsePrivate(DescribeHostKeyResponse * const q);

    void parseDescribeHostKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeHostKeyResponse)
    Q_DISABLE_COPY(DescribeHostKeyResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
