// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDETECTORREQUEST_P_H
#define QTAWS_PUTDETECTORREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "putdetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class PutDetectorRequest;

class PutDetectorRequestPrivate : public FraudDetectorRequestPrivate {

public:
    PutDetectorRequestPrivate(const FraudDetectorRequest::Action action,
                                   PutDetectorRequest * const q);
    PutDetectorRequestPrivate(const PutDetectorRequestPrivate &other,
                                   PutDetectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutDetectorRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
