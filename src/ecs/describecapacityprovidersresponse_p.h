// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECAPACITYPROVIDERSRESPONSE_P_H
#define QTAWS_DESCRIBECAPACITYPROVIDERSRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class DescribeCapacityProvidersResponse;

class DescribeCapacityProvidersResponsePrivate : public EcsResponsePrivate {

public:

    explicit DescribeCapacityProvidersResponsePrivate(DescribeCapacityProvidersResponse * const q);

    void parseDescribeCapacityProvidersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCapacityProvidersResponse)
    Q_DISABLE_COPY(DescribeCapacityProvidersResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
