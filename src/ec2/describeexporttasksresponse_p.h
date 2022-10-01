// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPORTTASKSRESPONSE_P_H
#define QTAWS_DESCRIBEEXPORTTASKSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeExportTasksResponse;

class DescribeExportTasksResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeExportTasksResponsePrivate(DescribeExportTasksResponse * const q);

    void parseDescribeExportTasksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeExportTasksResponse)
    Q_DISABLE_COPY(DescribeExportTasksResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
