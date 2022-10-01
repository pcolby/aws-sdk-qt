// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBSRESPONSE_P_H
#define QTAWS_DESCRIBEJOBSRESPONSE_P_H

#include "mgnresponse_p.h"

namespace QtAws {
namespace Mgn {

class DescribeJobsResponse;

class DescribeJobsResponsePrivate : public MgnResponsePrivate {

public:

    explicit DescribeJobsResponsePrivate(DescribeJobsResponse * const q);

    void parseDescribeJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeJobsResponse)
    Q_DISABLE_COPY(DescribeJobsResponsePrivate)

};

} // namespace Mgn
} // namespace QtAws

#endif
