// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBATCHIMPORTJOBREQUEST_P_H
#define QTAWS_CREATEBATCHIMPORTJOBREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "createbatchimportjobrequest.h"

namespace QtAws {
namespace FraudDetector {

class CreateBatchImportJobRequest;

class CreateBatchImportJobRequestPrivate : public FraudDetectorRequestPrivate {

public:
    CreateBatchImportJobRequestPrivate(const FraudDetectorRequest::Action action,
                                   CreateBatchImportJobRequest * const q);
    CreateBatchImportJobRequestPrivate(const CreateBatchImportJobRequestPrivate &other,
                                   CreateBatchImportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBatchImportJobRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
