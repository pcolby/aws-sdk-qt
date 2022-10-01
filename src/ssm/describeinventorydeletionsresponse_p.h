// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINVENTORYDELETIONSRESPONSE_P_H
#define QTAWS_DESCRIBEINVENTORYDELETIONSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeInventoryDeletionsResponse;

class DescribeInventoryDeletionsResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeInventoryDeletionsResponsePrivate(DescribeInventoryDeletionsResponse * const q);

    void parseDescribeInventoryDeletionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInventoryDeletionsResponse)
    Q_DISABLE_COPY(DescribeInventoryDeletionsResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
