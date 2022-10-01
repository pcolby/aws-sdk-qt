// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBQUEUESRESPONSE_P_H
#define QTAWS_DESCRIBEJOBQUEUESRESPONSE_P_H

#include "batchresponse_p.h"

namespace QtAws {
namespace Batch {

class DescribeJobQueuesResponse;

class DescribeJobQueuesResponsePrivate : public BatchResponsePrivate {

public:

    explicit DescribeJobQueuesResponsePrivate(DescribeJobQueuesResponse * const q);

    void parseDescribeJobQueuesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeJobQueuesResponse)
    Q_DISABLE_COPY(DescribeJobQueuesResponsePrivate)

};

} // namespace Batch
} // namespace QtAws

#endif
