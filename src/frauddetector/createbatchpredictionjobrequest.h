// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBATCHPREDICTIONJOBREQUEST_H
#define QTAWS_CREATEBATCHPREDICTIONJOBREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class CreateBatchPredictionJobRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT CreateBatchPredictionJobRequest : public FraudDetectorRequest {

public:
    CreateBatchPredictionJobRequest(const CreateBatchPredictionJobRequest &other);
    CreateBatchPredictionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBatchPredictionJobRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
