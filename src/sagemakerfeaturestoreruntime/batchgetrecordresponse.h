// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETRECORDRESPONSE_H
#define QTAWS_BATCHGETRECORDRESPONSE_H

#include "sagemakerfeaturestoreruntimeresponse.h"
#include "batchgetrecordrequest.h"

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

class BatchGetRecordResponsePrivate;

class QTAWSSAGEMAKERFEATURESTORERUNTIME_EXPORT BatchGetRecordResponse : public SageMakerFeatureStoreRuntimeResponse {
    Q_OBJECT

public:
    BatchGetRecordResponse(const BatchGetRecordRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetRecordRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetRecordResponse)
    Q_DISABLE_COPY(BatchGetRecordResponse)

};

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws

#endif
