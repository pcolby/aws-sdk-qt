// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTAINERINSTANCESRESPONSE_P_H
#define QTAWS_DESCRIBECONTAINERINSTANCESRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class DescribeContainerInstancesResponse;

class DescribeContainerInstancesResponsePrivate : public EcsResponsePrivate {

public:

    explicit DescribeContainerInstancesResponsePrivate(DescribeContainerInstancesResponse * const q);

    void parseDescribeContainerInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeContainerInstancesResponse)
    Q_DISABLE_COPY(DescribeContainerInstancesResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
