// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMPORTSNAPSHOTTASKSRESPONSE_P_H
#define QTAWS_DESCRIBEIMPORTSNAPSHOTTASKSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeImportSnapshotTasksResponse;

class DescribeImportSnapshotTasksResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeImportSnapshotTasksResponsePrivate(DescribeImportSnapshotTasksResponse * const q);

    void parseDescribeImportSnapshotTasksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeImportSnapshotTasksResponse)
    Q_DISABLE_COPY(DescribeImportSnapshotTasksResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
