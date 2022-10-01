// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCESSRESPONSE_P_H
#define QTAWS_DESCRIBEACCESSRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class DescribeAccessResponse;

class DescribeAccessResponsePrivate : public TransferResponsePrivate {

public:

    explicit DescribeAccessResponsePrivate(DescribeAccessResponse * const q);

    void parseDescribeAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAccessResponse)
    Q_DISABLE_COPY(DescribeAccessResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
