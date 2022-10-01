// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTOREIMAGETASKSRESPONSE_P_H
#define QTAWS_DESCRIBESTOREIMAGETASKSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeStoreImageTasksResponse;

class DescribeStoreImageTasksResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeStoreImageTasksResponsePrivate(DescribeStoreImageTasksResponse * const q);

    void parseDescribeStoreImageTasksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStoreImageTasksResponse)
    Q_DISABLE_COPY(DescribeStoreImageTasksResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
