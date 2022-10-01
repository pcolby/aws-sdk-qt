// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELBATCHPREDICTIONJOBREQUEST_H
#define QTAWS_CANCELBATCHPREDICTIONJOBREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class CancelBatchPredictionJobRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT CancelBatchPredictionJobRequest : public FraudDetectorRequest {

public:
    CancelBatchPredictionJobRequest(const CancelBatchPredictionJobRequest &other);
    CancelBatchPredictionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelBatchPredictionJobRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
