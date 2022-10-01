// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBATCHIMPORTJOBSREQUEST_P_H
#define QTAWS_GETBATCHIMPORTJOBSREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "getbatchimportjobsrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetBatchImportJobsRequest;

class GetBatchImportJobsRequestPrivate : public FraudDetectorRequestPrivate {

public:
    GetBatchImportJobsRequestPrivate(const FraudDetectorRequest::Action action,
                                   GetBatchImportJobsRequest * const q);
    GetBatchImportJobsRequestPrivate(const GetBatchImportJobsRequestPrivate &other,
                                   GetBatchImportJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBatchImportJobsRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
