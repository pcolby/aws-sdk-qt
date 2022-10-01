// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETVARIABLEREQUEST_H
#define QTAWS_BATCHGETVARIABLEREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class BatchGetVariableRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT BatchGetVariableRequest : public FraudDetectorRequest {

public:
    BatchGetVariableRequest(const BatchGetVariableRequest &other);
    BatchGetVariableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetVariableRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
