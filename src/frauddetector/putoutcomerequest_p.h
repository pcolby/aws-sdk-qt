// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOUTCOMEREQUEST_P_H
#define QTAWS_PUTOUTCOMEREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "putoutcomerequest.h"

namespace QtAws {
namespace FraudDetector {

class PutOutcomeRequest;

class PutOutcomeRequestPrivate : public FraudDetectorRequestPrivate {

public:
    PutOutcomeRequestPrivate(const FraudDetectorRequest::Action action,
                                   PutOutcomeRequest * const q);
    PutOutcomeRequestPrivate(const PutOutcomeRequestPrivate &other,
                                   PutOutcomeRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutOutcomeRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
