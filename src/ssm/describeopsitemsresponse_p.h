// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOPSITEMSRESPONSE_P_H
#define QTAWS_DESCRIBEOPSITEMSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeOpsItemsResponse;

class DescribeOpsItemsResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeOpsItemsResponsePrivate(DescribeOpsItemsResponse * const q);

    void parseDescribeOpsItemsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeOpsItemsResponse)
    Q_DISABLE_COPY(DescribeOpsItemsResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
