// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBATCHIMPORTJOBREQUEST_H
#define QTAWS_CREATEBATCHIMPORTJOBREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class CreateBatchImportJobRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT CreateBatchImportJobRequest : public FraudDetectorRequest {

public:
    CreateBatchImportJobRequest(const CreateBatchImportJobRequest &other);
    CreateBatchImportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBatchImportJobRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
