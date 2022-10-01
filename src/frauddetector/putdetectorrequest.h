// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDETECTORREQUEST_H
#define QTAWS_PUTDETECTORREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class PutDetectorRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT PutDetectorRequest : public FraudDetectorRequest {

public:
    PutDetectorRequest(const PutDetectorRequest &other);
    PutDetectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDetectorRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
