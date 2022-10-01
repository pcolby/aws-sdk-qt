// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATAREPOSITORYTASKSRESPONSE_P_H
#define QTAWS_DESCRIBEDATAREPOSITORYTASKSRESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class DescribeDataRepositoryTasksResponse;

class DescribeDataRepositoryTasksResponsePrivate : public FSxResponsePrivate {

public:

    explicit DescribeDataRepositoryTasksResponsePrivate(DescribeDataRepositoryTasksResponse * const q);

    void parseDescribeDataRepositoryTasksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDataRepositoryTasksResponse)
    Q_DISABLE_COPY(DescribeDataRepositoryTasksResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
