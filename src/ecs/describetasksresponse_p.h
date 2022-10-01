// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETASKSRESPONSE_P_H
#define QTAWS_DESCRIBETASKSRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class DescribeTasksResponse;

class DescribeTasksResponsePrivate : public EcsResponsePrivate {

public:

    explicit DescribeTasksResponsePrivate(DescribeTasksResponse * const q);

    void parseDescribeTasksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTasksResponse)
    Q_DISABLE_COPY(DescribeTasksResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
