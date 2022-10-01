// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVENTTYPEREQUEST_P_H
#define QTAWS_PUTEVENTTYPEREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "puteventtyperequest.h"

namespace QtAws {
namespace FraudDetector {

class PutEventTypeRequest;

class PutEventTypeRequestPrivate : public FraudDetectorRequestPrivate {

public:
    PutEventTypeRequestPrivate(const FraudDetectorRequest::Action action,
                                   PutEventTypeRequest * const q);
    PutEventTypeRequestPrivate(const PutEventTypeRequestPrivate &other,
                                   PutEventTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutEventTypeRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
