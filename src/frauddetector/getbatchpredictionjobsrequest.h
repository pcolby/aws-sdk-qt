// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBATCHPREDICTIONJOBSREQUEST_H
#define QTAWS_GETBATCHPREDICTIONJOBSREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetBatchPredictionJobsRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetBatchPredictionJobsRequest : public FraudDetectorRequest {

public:
    GetBatchPredictionJobsRequest(const GetBatchPredictionJobsRequest &other);
    GetBatchPredictionJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBatchPredictionJobsRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
