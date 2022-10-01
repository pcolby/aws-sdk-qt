// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPUTEENVIRONMENTSRESPONSE_P_H
#define QTAWS_DESCRIBECOMPUTEENVIRONMENTSRESPONSE_P_H

#include "batchresponse_p.h"

namespace QtAws {
namespace Batch {

class DescribeComputeEnvironmentsResponse;

class DescribeComputeEnvironmentsResponsePrivate : public BatchResponsePrivate {

public:

    explicit DescribeComputeEnvironmentsResponsePrivate(DescribeComputeEnvironmentsResponse * const q);

    void parseDescribeComputeEnvironmentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeComputeEnvironmentsResponse)
    Q_DISABLE_COPY(DescribeComputeEnvironmentsResponsePrivate)

};

} // namespace Batch
} // namespace QtAws

#endif
