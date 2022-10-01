// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBATCHIMPORTJOBSREQUEST_H
#define QTAWS_GETBATCHIMPORTJOBSREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetBatchImportJobsRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetBatchImportJobsRequest : public FraudDetectorRequest {

public:
    GetBatchImportJobsRequest(const GetBatchImportJobsRequest &other);
    GetBatchImportJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBatchImportJobsRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
