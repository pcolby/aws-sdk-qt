// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELBATCHIMPORTJOBREQUEST_P_H
#define QTAWS_CANCELBATCHIMPORTJOBREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "cancelbatchimportjobrequest.h"

namespace QtAws {
namespace FraudDetector {

class CancelBatchImportJobRequest;

class CancelBatchImportJobRequestPrivate : public FraudDetectorRequestPrivate {

public:
    CancelBatchImportJobRequestPrivate(const FraudDetectorRequest::Action action,
                                   CancelBatchImportJobRequest * const q);
    CancelBatchImportJobRequestPrivate(const CancelBatchImportJobRequestPrivate &other,
                                   CancelBatchImportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelBatchImportJobRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
