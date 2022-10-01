// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVERRESPONSE_P_H
#define QTAWS_DESCRIBESERVERRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class DescribeServerResponse;

class DescribeServerResponsePrivate : public TransferResponsePrivate {

public:

    explicit DescribeServerResponsePrivate(DescribeServerResponse * const q);

    void parseDescribeServerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeServerResponse)
    Q_DISABLE_COPY(DescribeServerResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
