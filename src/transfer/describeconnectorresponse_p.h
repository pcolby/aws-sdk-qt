// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTORRESPONSE_P_H
#define QTAWS_DESCRIBECONNECTORRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class DescribeConnectorResponse;

class DescribeConnectorResponsePrivate : public TransferResponsePrivate {

public:

    explicit DescribeConnectorResponsePrivate(DescribeConnectorResponse * const q);

    void parseDescribeConnectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConnectorResponse)
    Q_DISABLE_COPY(DescribeConnectorResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
