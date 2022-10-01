// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVENTTYPEREQUEST_H
#define QTAWS_PUTEVENTTYPEREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class PutEventTypeRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT PutEventTypeRequest : public FraudDetectorRequest {

public:
    PutEventTypeRequest(const PutEventTypeRequest &other);
    PutEventTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEventTypeRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
