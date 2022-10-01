// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELBATCHIMPORTJOBREQUEST_H
#define QTAWS_CANCELBATCHIMPORTJOBREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class CancelBatchImportJobRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT CancelBatchImportJobRequest : public FraudDetectorRequest {

public:
    CancelBatchImportJobRequest(const CancelBatchImportJobRequest &other);
    CancelBatchImportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelBatchImportJobRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
