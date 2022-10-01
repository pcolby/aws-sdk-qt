// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETRECORDRESPONSE_P_H
#define QTAWS_BATCHGETRECORDRESPONSE_P_H

#include "sagemakerfeaturestoreruntimeresponse_p.h"

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

class BatchGetRecordResponse;

class BatchGetRecordResponsePrivate : public SageMakerFeatureStoreRuntimeResponsePrivate {

public:

    explicit BatchGetRecordResponsePrivate(BatchGetRecordResponse * const q);

    void parseBatchGetRecordResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetRecordResponse)
    Q_DISABLE_COPY(BatchGetRecordResponsePrivate)

};

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws

#endif
