// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETASKSETSRESPONSE_P_H
#define QTAWS_DESCRIBETASKSETSRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class DescribeTaskSetsResponse;

class DescribeTaskSetsResponsePrivate : public EcsResponsePrivate {

public:

    explicit DescribeTaskSetsResponsePrivate(DescribeTaskSetsResponse * const q);

    void parseDescribeTaskSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTaskSetsResponse)
    Q_DISABLE_COPY(DescribeTaskSetsResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
