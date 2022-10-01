// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTMEMBERSHIPSRESPONSE_P_H
#define QTAWS_DESCRIBEENVIRONMENTMEMBERSHIPSRESPONSE_P_H

#include "cloud9response_p.h"

namespace QtAws {
namespace Cloud9 {

class DescribeEnvironmentMembershipsResponse;

class DescribeEnvironmentMembershipsResponsePrivate : public Cloud9ResponsePrivate {

public:

    explicit DescribeEnvironmentMembershipsResponsePrivate(DescribeEnvironmentMembershipsResponse * const q);

    void parseDescribeEnvironmentMembershipsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEnvironmentMembershipsResponse)
    Q_DISABLE_COPY(DescribeEnvironmentMembershipsResponsePrivate)

};

} // namespace Cloud9
} // namespace QtAws

#endif
