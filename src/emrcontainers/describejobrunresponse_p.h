// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBRUNRESPONSE_P_H
#define QTAWS_DESCRIBEJOBRUNRESPONSE_P_H

#include "emrcontainersresponse_p.h"

namespace QtAws {
namespace Emrcontainers {

class DescribeJobRunResponse;

class DescribeJobRunResponsePrivate : public EmrcontainersResponsePrivate {

public:

    explicit DescribeJobRunResponsePrivate(DescribeJobRunResponse * const q);

    void parseDescribeJobRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeJobRunResponse)
    Q_DISABLE_COPY(DescribeJobRunResponsePrivate)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
