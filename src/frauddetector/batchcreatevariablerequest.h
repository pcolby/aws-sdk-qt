// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATEVARIABLEREQUEST_H
#define QTAWS_BATCHCREATEVARIABLEREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class BatchCreateVariableRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT BatchCreateVariableRequest : public FraudDetectorRequest {

public:
    BatchCreateVariableRequest(const BatchCreateVariableRequest &other);
    BatchCreateVariableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchCreateVariableRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
