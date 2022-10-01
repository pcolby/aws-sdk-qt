// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMPORTIMAGETASKSRESPONSE_P_H
#define QTAWS_DESCRIBEIMPORTIMAGETASKSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeImportImageTasksResponse;

class DescribeImportImageTasksResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeImportImageTasksResponsePrivate(DescribeImportImageTasksResponse * const q);

    void parseDescribeImportImageTasksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeImportImageTasksResponse)
    Q_DISABLE_COPY(DescribeImportImageTasksResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
