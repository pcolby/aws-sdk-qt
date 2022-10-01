// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICESRESPONSE_P_H
#define QTAWS_DESCRIBESERVICESRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class DescribeServicesResponse;

class DescribeServicesResponsePrivate : public EcsResponsePrivate {

public:

    explicit DescribeServicesResponsePrivate(DescribeServicesResponse * const q);

    void parseDescribeServicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeServicesResponse)
    Q_DISABLE_COPY(DescribeServicesResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
