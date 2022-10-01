// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBATCHIMPORTJOBREQUEST_P_H
#define QTAWS_DELETEBATCHIMPORTJOBREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "deletebatchimportjobrequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteBatchImportJobRequest;

class DeleteBatchImportJobRequestPrivate : public FraudDetectorRequestPrivate {

public:
    DeleteBatchImportJobRequestPrivate(const FraudDetectorRequest::Action action,
                                   DeleteBatchImportJobRequest * const q);
    DeleteBatchImportJobRequestPrivate(const DeleteBatchImportJobRequestPrivate &other,
                                   DeleteBatchImportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBatchImportJobRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
