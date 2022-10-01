// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEXTERNALMODELREQUEST_P_H
#define QTAWS_PUTEXTERNALMODELREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "putexternalmodelrequest.h"

namespace QtAws {
namespace FraudDetector {

class PutExternalModelRequest;

class PutExternalModelRequestPrivate : public FraudDetectorRequestPrivate {

public:
    PutExternalModelRequestPrivate(const FraudDetectorRequest::Action action,
                                   PutExternalModelRequest * const q);
    PutExternalModelRequestPrivate(const PutExternalModelRequestPrivate &other,
                                   PutExternalModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutExternalModelRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
