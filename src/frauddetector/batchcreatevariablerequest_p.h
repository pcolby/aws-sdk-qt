// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATEVARIABLEREQUEST_P_H
#define QTAWS_BATCHCREATEVARIABLEREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "batchcreatevariablerequest.h"

namespace QtAws {
namespace FraudDetector {

class BatchCreateVariableRequest;

class BatchCreateVariableRequestPrivate : public FraudDetectorRequestPrivate {

public:
    BatchCreateVariableRequestPrivate(const FraudDetectorRequest::Action action,
                                   BatchCreateVariableRequest * const q);
    BatchCreateVariableRequestPrivate(const BatchCreateVariableRequestPrivate &other,
                                   BatchCreateVariableRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchCreateVariableRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
