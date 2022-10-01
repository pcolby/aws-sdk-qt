// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECOVERYINSTANCESRESPONSE_P_H
#define QTAWS_DESCRIBERECOVERYINSTANCESRESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class DescribeRecoveryInstancesResponse;

class DescribeRecoveryInstancesResponsePrivate : public DrsResponsePrivate {

public:

    explicit DescribeRecoveryInstancesResponsePrivate(DescribeRecoveryInstancesResponse * const q);

    void parseDescribeRecoveryInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRecoveryInstancesResponse)
    Q_DISABLE_COPY(DescribeRecoveryInstancesResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
