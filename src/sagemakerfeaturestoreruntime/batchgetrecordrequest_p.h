// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETRECORDREQUEST_P_H
#define QTAWS_BATCHGETRECORDREQUEST_P_H

#include "sagemakerfeaturestoreruntimerequest_p.h"
#include "batchgetrecordrequest.h"

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

class BatchGetRecordRequest;

class BatchGetRecordRequestPrivate : public SageMakerFeatureStoreRuntimeRequestPrivate {

public:
    BatchGetRecordRequestPrivate(const SageMakerFeatureStoreRuntimeRequest::Action action,
                                   BatchGetRecordRequest * const q);
    BatchGetRecordRequestPrivate(const BatchGetRecordRequestPrivate &other,
                                   BatchGetRecordRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetRecordRequest)

};

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws

#endif
