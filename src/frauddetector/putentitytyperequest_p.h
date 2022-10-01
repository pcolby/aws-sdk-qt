// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTENTITYTYPEREQUEST_P_H
#define QTAWS_PUTENTITYTYPEREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "putentitytyperequest.h"

namespace QtAws {
namespace FraudDetector {

class PutEntityTypeRequest;

class PutEntityTypeRequestPrivate : public FraudDetectorRequestPrivate {

public:
    PutEntityTypeRequestPrivate(const FraudDetectorRequest::Action action,
                                   PutEntityTypeRequest * const q);
    PutEntityTypeRequestPrivate(const PutEntityTypeRequestPrivate &other,
                                   PutEntityTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutEntityTypeRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
