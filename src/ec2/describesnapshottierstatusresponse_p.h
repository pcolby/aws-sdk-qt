// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTTIERSTATUSRESPONSE_P_H
#define QTAWS_DESCRIBESNAPSHOTTIERSTATUSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeSnapshotTierStatusResponse;

class DescribeSnapshotTierStatusResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeSnapshotTierStatusResponsePrivate(DescribeSnapshotTierStatusResponse * const q);

    void parseDescribeSnapshotTierStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSnapshotTierStatusResponse)
    Q_DISABLE_COPY(DescribeSnapshotTierStatusResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
