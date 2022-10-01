// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTSTATUSRESPONSE_P_H
#define QTAWS_DESCRIBEENVIRONMENTSTATUSRESPONSE_P_H

#include "cloud9response_p.h"

namespace QtAws {
namespace Cloud9 {

class DescribeEnvironmentStatusResponse;

class DescribeEnvironmentStatusResponsePrivate : public Cloud9ResponsePrivate {

public:

    explicit DescribeEnvironmentStatusResponsePrivate(DescribeEnvironmentStatusResponse * const q);

    void parseDescribeEnvironmentStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEnvironmentStatusResponse)
    Q_DISABLE_COPY(DescribeEnvironmentStatusResponsePrivate)

};

} // namespace Cloud9
} // namespace QtAws

#endif
