// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPORTIMAGETASKSRESPONSE_P_H
#define QTAWS_DESCRIBEEXPORTIMAGETASKSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeExportImageTasksResponse;

class DescribeExportImageTasksResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeExportImageTasksResponsePrivate(DescribeExportImageTasksResponse * const q);

    void parseDescribeExportImageTasksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeExportImageTasksResponse)
    Q_DISABLE_COPY(DescribeExportImageTasksResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
