// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTENTITYTYPEREQUEST_H
#define QTAWS_PUTENTITYTYPEREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class PutEntityTypeRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT PutEntityTypeRequest : public FraudDetectorRequest {

public:
    PutEntityTypeRequest(const PutEntityTypeRequest &other);
    PutEntityTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEntityTypeRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
