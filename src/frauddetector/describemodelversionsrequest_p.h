// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELVERSIONSREQUEST_P_H
#define QTAWS_DESCRIBEMODELVERSIONSREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "describemodelversionsrequest.h"

namespace QtAws {
namespace FraudDetector {

class DescribeModelVersionsRequest;

class DescribeModelVersionsRequestPrivate : public FraudDetectorRequestPrivate {

public:
    DescribeModelVersionsRequestPrivate(const FraudDetectorRequest::Action action,
                                   DescribeModelVersionsRequest * const q);
    DescribeModelVersionsRequestPrivate(const DescribeModelVersionsRequestPrivate &other,
                                   DescribeModelVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeModelVersionsRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
