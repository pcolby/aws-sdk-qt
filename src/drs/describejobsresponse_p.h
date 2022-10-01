// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBSRESPONSE_P_H
#define QTAWS_DESCRIBEJOBSRESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class DescribeJobsResponse;

class DescribeJobsResponsePrivate : public DrsResponsePrivate {

public:

    explicit DescribeJobsResponsePrivate(DescribeJobsResponse * const q);

    void parseDescribeJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeJobsResponse)
    Q_DISABLE_COPY(DescribeJobsResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
