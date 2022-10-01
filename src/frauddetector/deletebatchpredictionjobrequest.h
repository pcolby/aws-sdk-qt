// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBATCHPREDICTIONJOBREQUEST_H
#define QTAWS_DELETEBATCHPREDICTIONJOBREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteBatchPredictionJobRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT DeleteBatchPredictionJobRequest : public FraudDetectorRequest {

public:
    DeleteBatchPredictionJobRequest(const DeleteBatchPredictionJobRequest &other);
    DeleteBatchPredictionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBatchPredictionJobRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
