// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDETECTORREQUEST_P_H
#define QTAWS_DESCRIBEDETECTORREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "describedetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class DescribeDetectorRequest;

class DescribeDetectorRequestPrivate : public FraudDetectorRequestPrivate {

public:
    DescribeDetectorRequestPrivate(const FraudDetectorRequest::Action action,
                                   DescribeDetectorRequest * const q);
    DescribeDetectorRequestPrivate(const DescribeDetectorRequestPrivate &other,
                                   DescribeDetectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDetectorRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
