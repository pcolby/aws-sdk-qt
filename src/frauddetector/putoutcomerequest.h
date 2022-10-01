// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOUTCOMEREQUEST_H
#define QTAWS_PUTOUTCOMEREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class PutOutcomeRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT PutOutcomeRequest : public FraudDetectorRequest {

public:
    PutOutcomeRequest(const PutOutcomeRequest &other);
    PutOutcomeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutOutcomeRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
