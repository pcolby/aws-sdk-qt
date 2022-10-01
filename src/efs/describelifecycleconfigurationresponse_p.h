// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELIFECYCLECONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBELIFECYCLECONFIGURATIONRESPONSE_P_H

#include "efsresponse_p.h"

namespace QtAws {
namespace Efs {

class DescribeLifecycleConfigurationResponse;

class DescribeLifecycleConfigurationResponsePrivate : public EfsResponsePrivate {

public:

    explicit DescribeLifecycleConfigurationResponsePrivate(DescribeLifecycleConfigurationResponse * const q);

    void parseDescribeLifecycleConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLifecycleConfigurationResponse)
    Q_DISABLE_COPY(DescribeLifecycleConfigurationResponsePrivate)

};

} // namespace Efs
} // namespace QtAws

#endif
