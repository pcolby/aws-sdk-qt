// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETVARIABLEREQUEST_P_H
#define QTAWS_BATCHGETVARIABLEREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "batchgetvariablerequest.h"

namespace QtAws {
namespace FraudDetector {

class BatchGetVariableRequest;

class BatchGetVariableRequestPrivate : public FraudDetectorRequestPrivate {

public:
    BatchGetVariableRequestPrivate(const FraudDetectorRequest::Action action,
                                   BatchGetVariableRequest * const q);
    BatchGetVariableRequestPrivate(const BatchGetVariableRequestPrivate &other,
                                   BatchGetVariableRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetVariableRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
