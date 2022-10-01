// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERUNTIMECONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBERUNTIMECONFIGURATIONRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeRuntimeConfigurationResponse;

class DescribeRuntimeConfigurationResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeRuntimeConfigurationResponsePrivate(DescribeRuntimeConfigurationResponse * const q);

    void parseDescribeRuntimeConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRuntimeConfigurationResponse)
    Q_DISABLE_COPY(DescribeRuntimeConfigurationResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
