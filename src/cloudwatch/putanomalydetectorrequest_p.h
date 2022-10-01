// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTANOMALYDETECTORREQUEST_P_H
#define QTAWS_PUTANOMALYDETECTORREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "putanomalydetectorrequest.h"

namespace QtAws {
namespace CloudWatch {

class PutAnomalyDetectorRequest;

class PutAnomalyDetectorRequestPrivate : public CloudWatchRequestPrivate {

public:
    PutAnomalyDetectorRequestPrivate(const CloudWatchRequest::Action action,
                                   PutAnomalyDetectorRequest * const q);
    PutAnomalyDetectorRequestPrivate(const PutAnomalyDetectorRequestPrivate &other,
                                   PutAnomalyDetectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAnomalyDetectorRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
