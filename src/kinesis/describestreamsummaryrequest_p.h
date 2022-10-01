// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTREAMSUMMARYREQUEST_P_H
#define QTAWS_DESCRIBESTREAMSUMMARYREQUEST_P_H

#include "kinesisrequest_p.h"
#include "describestreamsummaryrequest.h"

namespace QtAws {
namespace Kinesis {

class DescribeStreamSummaryRequest;

class DescribeStreamSummaryRequestPrivate : public KinesisRequestPrivate {

public:
    DescribeStreamSummaryRequestPrivate(const KinesisRequest::Action action,
                                   DescribeStreamSummaryRequest * const q);
    DescribeStreamSummaryRequestPrivate(const DescribeStreamSummaryRequestPrivate &other,
                                   DescribeStreamSummaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStreamSummaryRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
