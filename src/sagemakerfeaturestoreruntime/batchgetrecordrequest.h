// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETRECORDREQUEST_H
#define QTAWS_BATCHGETRECORDREQUEST_H

#include "sagemakerfeaturestoreruntimerequest.h"

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

class BatchGetRecordRequestPrivate;

class QTAWSSAGEMAKERFEATURESTORERUNTIME_EXPORT BatchGetRecordRequest : public SageMakerFeatureStoreRuntimeRequest {

public:
    BatchGetRecordRequest(const BatchGetRecordRequest &other);
    BatchGetRecordRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetRecordRequest)

};

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws

#endif
